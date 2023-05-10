#include <stdio.h>

void prnt(int i)
{
    if (i == 6)
        return;
    prnt(i + 1);
    printf("%d\n", i);
}

int main()
{
    prnt(1);
    return 0;
}