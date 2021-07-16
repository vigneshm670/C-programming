#include <stdio.h>

void fun(int n);

void fun1(int n)
{
    if(n<5)
    {
        fun(n);
    }
}

void fun(int n)
{
    printf("#");
    fun1(n+1);
}

void main()
{
    fun1(0);
    printf("\n");
}