#include "malloc.h"

#define DO_EXPAND(VAL)  VAL ## 1
#define EXPAND(VAL)     DO_EXPAND(VAL)

#ifdef MAIN_TYPE
	#if (EXPAND(MAIN_TYPE) == 1)
		#error MAIN_TYPE ISNT A VALUE RANGING FROM 1 TO 3 INCLUDED
	#elif MAIN_TYPE == 1
		#define main() xmain()
	#elif MAIN_TYPE == 2
		#define main(x, y) ymain(x, y)
	#elif MAIN_TYPE == 3
		#define main(x, y, z) zmain(x, y, z)
	#else
		#error MAIN_TYPE ISNT A VALUE RANGING FROM 1 TO 3 INCLUDED
	#endif
#else
	#error MAIN_TYPE UNDEFINED, COMPILE WITH "-D MAIN_TYPE=X" WHERE: 1 <= X <= 3
#endif

int		xmain();
int		ymain(int ac, char *av[]);
int		zmain(int ac, char *av[], char *envp[]);