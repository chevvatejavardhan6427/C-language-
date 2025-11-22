#include <stdio.h>
#include <math.h>
int main()
{
    int n, sum = 0, digits = 0, tem;
    printf("Enter a number : ");
    scanf("%d", &n);
    int x = n;
    while (x != 0)
    {
        digits++;
        x /= 10;
    }

    int y = n;

    while (y != 0)
    {
        tem = y % 10;
        sum += pow(tem, digits);
        y /= 10;
    }

    if (sum == n)
        printf("Armstron number");
    else
        printf("Not an Armstrong number");

    return 0;
}
