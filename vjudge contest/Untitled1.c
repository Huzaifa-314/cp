#include <stdio.h>
int main()
{
    int n;
    printf("input a number: ");
    scanf("%d", &n);

    printf("Result: \n");
    while (n > 0)
    {
        printf("%d\n", n);
        --n;
    }

    return 0;
}
