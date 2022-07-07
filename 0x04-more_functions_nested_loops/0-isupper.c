#include "main.h"
#include <stdio.h>

/**
 *_isupper - return i if c is uppercase
 @c: checks last digit
 *Return - returns 1 and 0 depending on condition
 **/

int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);
else
return (0);
}
