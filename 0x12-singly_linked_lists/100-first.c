#include <stdio.h>

/* Apply the constructor attribute to myStartupFun()
   so that it is executed before main() */
void myStartupFun(void) __attribute__((constructor));

/**
 * myStartupFun - execute a function before main
 */
void myStartupFun(void)
{
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
