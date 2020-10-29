#include "malloc.h"

#define DO_EXPAND(VAL)  VAL ## 1
#define EXPAND(VAL)     DO_EXPAND(VAL)

#ifdef MAIN_TYPE
	#if (EXPAND(MAIN_TYPE) == 1)
		#error MAIN_TYPE ISNT A VALUE RANGING FROM 1 TO 3 INCLUDED
	#elif MAIN_TYPE == 1
		#define main() your_main_with_no_args()
	#elif MAIN_TYPE == 2
		#define main(x, y) your_main_with_ac_av(x, y)
	#elif MAIN_TYPE == 3
		#define main(x, y, z) your_main_with_ac_av_envp(x, y, z)
	#else
		#error MAIN_TYPE ISNT A VALUE RANGING FROM 1 TO 3 INCLUDED
	#endif
#else
	#error MAIN_TYPE UNDEFINED, COMPILE WITH "-D MAIN_TYPE=X" WHERE: 1 <= X <= 3
#endif

int		your_main_with_no_args();
int		your_main_with_ac_av(int ac, char *av[]);
int		your_main_with_ac_av_envp(int ac, char *av[], char *envp[]);
