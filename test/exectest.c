/*
 * exectest.c
 *
 * Exec a simple program.  Return the result of Exec.
 */

#include "syscall.h"

int
main()
{
    int result = 1000;
    char array[13];
   // Read(array,5,0);
    array[0]='t';
    array[1]='e';
    array[2]='s';
    array[3]='t';
    array[4]='/';
    array[5]='e';
    array[6]='x';
    array[7]='i';
    array[8]='t';
    array[9]='t';
    array[10]='e';
    array[11]='s';
    array[12]='t';
    array[13]='\0';
    Exec(array);
    Exit(result);
}
