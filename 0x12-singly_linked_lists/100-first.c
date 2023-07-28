#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
* firstpri - This project prints a sentence before the main
* function is executed
*/
void firstpri(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
