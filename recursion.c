#include <stdio.h>
int sum(int n)
{
    int total = 0;
    if (n == 1)
    {
        return 1;
    }
    total = n + sum(n - 1);
    return total;
}
int main()
{
    int n;
    scanf("%d", &n);

    int t = sum(n);
    printf("%d", t);
    return 0;
}
