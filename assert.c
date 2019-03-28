#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include <assert.h>
#include "testing pgm.c"
int main()
{
    assert(operation('+',10,10)==20);
    printf("passed\n");
    assert(operation('-',10,10)==0);
    printf("passed\n");
    assert(operation('*',10,10)==100);
    printf("passed\n");
    return 0;
}
