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
		leakcheck();
		return (0);
	}
