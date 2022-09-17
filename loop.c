#include <stdio.h>

int main()
{

    int a, b;

    for (a = 1; a <= 10; a++)
    {
        {
            for (b = a; b <= 10; b++)
                printf("%3d", b);
        }
        printf("\n");
    }
}
