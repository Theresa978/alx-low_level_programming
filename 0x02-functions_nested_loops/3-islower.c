#include "main.h"
/**
 * _islower - check if char is lowercase
 * @C: is the char to be checked
 * return: 1 if char is lowercse, otherwise 0.
 */

int _islower(int c)
{
	if(c >= 'a' && c <= 'z')
		return (1);
	else
		return(0)
}
