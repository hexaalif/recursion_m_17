#include <stdio.h>

int st(char a[], int i)
{
    if (a[i] == '\0')
        return 0;
    int l = st(a, i + 1);
    return l + 1;
}

int main()
{
    char a[] = "hello";
    int length = st(a, 0);
    printf("%d\n", length);
    return 0;
}