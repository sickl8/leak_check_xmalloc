# leak_check_xmalloc

An alternative to valgrind.

Replace <stdlib.h> with "malloc.h".

Include "malloc.h" in your main too.

Add a line leakcheck(); or leakcheckfull(); before your main's return.

It should be something like this:

	#include "malloc.h"

	int		main()
	{
		/* your code */
		leakcheck(); //or leakcheckfull();
		return (0);
	}

# cub3D/miniRT Section (MinilibX)

To test memory leaks for cub3D Project or MinilibX for general

Replace <stdlib.h> with "malloc.h".

Include "malloc.h" in your main too.

Add a line leakcheck(); or leakcheckfull(); before your quit function.

It should be something like this:

    #include "malloc.h"

    int     ft_quit()
    {
        /* your code */
        leakcheck(); //or leakcheckfull();
        exit(EXIT_SUCCESS);
    }