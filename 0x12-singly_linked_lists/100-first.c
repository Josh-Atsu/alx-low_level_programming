#include "lists.h"
void exe_first(void)__attribute__ ((constructor));

/**
 * exe_first - prints the sentence before going inside the main fubction
 */
void exe_first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
