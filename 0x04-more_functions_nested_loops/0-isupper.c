#include "main.h"
#include <stdio.h>

/*
 *_isupper - check for uppercase letters
 *@c: checking for caps
 *Return - (1) if uppercase or (0) if otherwise
 *
 **/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
