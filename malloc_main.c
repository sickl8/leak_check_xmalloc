#include <stdio.h>

int		xmain();
int		ymain(int ac, char *av[]);
int		zmain(int ac, char *av[], char *envp[]);

#if MAIN_TYPE == 1

int		main()
{
	int ret;
	printf("hello before the real main\n");
	ret = xmain();
	//L_C();
	return (ret);
}

#elif MAIN_TYPE == 2

int		main(int ac, char **av)
{
	int ret;
	printf("hello before the real main\n");
	ret = ymain(ac, av);
	//L_C();
	return (ret);
}

#elif MAIN_TYPE == 3

int		main(int ac, char **av, char **envp)
{
	int ret;
	printf("hello before the real main\n");
	ret = zmain(ac, av, envp);
	//L_C();
	return (ret);
}

#endif