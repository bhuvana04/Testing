#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include <assert.h>

int add(int num1, int num2);
int sub(int num1, int num2);
int mult(int num1,int num2);
int main()
{
    char op='+';
    int num1, num2, result;
    switch(op)
    {
        case '+':
            result = add(num1, num2);
            break;

        case '-':
            result = sub(num1, num2);
            break;

        case '*':
            result = mult(num1, num2);
            break;

        default:
            printf("Invalid operator");
    }
    assert(add(10,10)==20);
    printf("passed\n");
    assert(sub(10,10)==0);
    printf("passed\n");
    assert(mult(10,10)==100);
    printf("passed\n");
    return 0;
}

int add(int num1, int num2)
{
    return num1 + num2;
}

int sub(int num1, int num2)
{
    return num1 - num2;
}

int mult(int num1, int num2)
{
    return num1 * num2;
}

