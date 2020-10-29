# leak_check_xmalloc

An alternative to valgrind.

Usage:

	chmod +x compile.sh
	./compile.sh MAIN_TYPE LEAKCHECK_TYPE /path/to/your/main ...

Where:

	MAIN_TYPE:

	1 => main()

	2 => main(int ac, char **av)

	3 => main(int ac, char **av, char **envp)

	LEAKCHECK_TYPE:

	LC => leakcheck()

	LCF => leakcheckfull()

Examples:

	./compile.sh 1 LC main.c gcc file1.c file2.c file3.c

	./compile.sh 2 LCF main_with_ac_av.c clang file4.o file5.c file6.o -include header.h