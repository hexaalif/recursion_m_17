#include <stdio.h>

void prnt(int i)
{
    // i--;
    if (i == 0)
        return;
    printf("%d\n", i);
    prnt(i - 1);
}

int main()
{
    prnt(5);
    return 0;
}