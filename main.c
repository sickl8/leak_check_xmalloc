#include <stdio.h>
#include <unistd.h>
#include "xmalloc.h"

void	func();

int	main(int ac, char **av)
{
	printf("hi\n");
	// sleep(5);
	func();
}