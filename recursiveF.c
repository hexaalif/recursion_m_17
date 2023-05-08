#include <stdio.h>

void fun()
{
    printf(".");
    fun();
}

int main()
{
    fun();
    return 0;
}