#include <stdlib.h>		
#include "main.h"

/**		
 * *malloc_checked - hands out space using malloc		
 * @p: number of bytes		
 *		
 * Return: pointer to the allocated memory		
 */

void *malloc_checked(unsigned int p)
		
{		
	void *ptr;		
	ptr = malloc(p);
		
	if (ptr == NULL)		
		exit(98);
	
	return (ptr);		
}

