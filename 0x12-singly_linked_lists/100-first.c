#include <stdio.h>
/**
 * print_before_main - prints before main function is executed
 *
 * Description: __attribute__ ((constructor)) is a GCC compiler
 *	extension which specifies that this function will be
 *	executed before main function
 */
void __attribute__ ((constructor)) print_before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
