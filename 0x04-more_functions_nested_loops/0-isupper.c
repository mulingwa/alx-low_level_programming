#include "main.h"
#include <stdio.h>

/**
 *_isupper - check if character is uppercase
 @c: character to be checked
 *Return - void
 **/

int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);
else
return (0);
}
