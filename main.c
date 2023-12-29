#include <stdio.h>
#include <string.h>

void change_x(int *x)
{
    *x = 0;
}

int main()
{
    int x = 100;

    printf("%d\n", x);

    change_x(&x);

    printf("%d\n", x);

    return 0;
}
