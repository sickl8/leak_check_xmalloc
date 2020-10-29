#define malloc xmalloc
#define free xfree
#define exit xexit
#include <stddef.h>
void	*xmalloc(size_t xbytes);
void	xfree(void *adr);
void	xexit(int x);