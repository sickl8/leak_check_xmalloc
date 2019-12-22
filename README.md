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

If you're also using exit() in your code, compile everything with the following define:

	gcc ... -D L_C=N //for leakcheck();
	
	gcc ... -D L_C=F //for leakcheckfull();
