#include <stdio.h>
int mult(int n)
{
    int fact = 1;
    if (n == 1)
    {
        return 1;
    }
    fact = n * mult(n - 1);
    return fact;
}
int main()
{
    int n;
    scanf("%d", &n);

    int t = mult(n);
    printf("%d", t);
    return 0;
}
