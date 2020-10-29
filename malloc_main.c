#include <stdio.h>

int		your_main_with_no_args();
int		your_main_with_ac_av(int ac, char *av[]);
int		your_main_with_ac_av_envp(int ac, char *av[], char *envp[]);
void	leakcheckfull();
void	leakcheck();

#if MAIN_TYPE == 1

int		main()
{
	int ret;
	ret = your_main_with_no_args();
	#ifdef LC
		leakcheck();
	#else
		leakcheckfull();
	#endif
	return (ret);
}

#elif MAIN_TYPE == 2

int		main(int ac, char **av)
{
	int ret;
	ret = your_main_with_ac_av(ac, av);
	#ifdef LC
		leakcheck();
	#else
		leakcheckfull();
	#endif
	return (ret);
}

#elif MAIN_TYPE == 3

int		main(int ac, char **av, char **envp)
{
	int ret;
	ret = your_main_with_ac_av_envp(ac, av, envp);
	#ifdef LC
		leakcheck();
	#else
		leakcheckfull();
	#endif
	return (ret);
}

#endif