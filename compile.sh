if [ ! $1 ] || [ ! $2 ] || [ ! $3 ]
then
	echo "Usage: ./compile [1|2|3(MAIN_TYPE)] [LC|LCF] [/path/to/your/main] ..."
	exit;
elif [ $1 -lt 1 ] || [ $1 -gt 3 ]
then
	echo "First argument should either be: 1 for main() or 2 for main(int, char**) or 3 for main(int, char**, char**)"
	exit;
elif [ $2 != "LC" ] && [ $2 != "LCF" ]
then
	echo "Second argument should either be: LC for leakcheck or LCF for leakcheckfull"
	exit;
elif [[ $3 != *.c ]]
then
	echo "Third argument is not a \".c\" file"
	exit;
else
	MAIN_T=$1
	LEAK=$2
	MAIN=$3
	gcc -c $MAIN -include xmalloc.h -D MAIN_TYPE=$MAIN_T
	gcc -c malloc.c -D MAIN_TYPE=$MAIN_T -D $LEAK
	shift 3
	$* "${MAIN//.c/.o}" malloc_main.c malloc.o -include inc.h -D MAIN_TYPE=$MAIN_T
	rm -rf "${MAIN//.c/.o}" malloc.o
fi