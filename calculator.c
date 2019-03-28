#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int operation(char mode,int num1, int num2)
{
   if(mode=='+')
   {
       return num1 + num2;
}

    else if(mode=='-')
    {
        return num1 - num2;
}
    else if(mode=='*')
    {
        return num1 * num2;
}
else
    {
    printf("invalid operation");
}
}
