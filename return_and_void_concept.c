#include <stdio.h>
void Add(int a, int b);
int add(int a, int b);
int main()
{
    Add(2, 7);
    printf("next1\n");
    add(4, 6);
    printf("next2\n");

    int x = add(4, 6);
    printf("%d\n", x);

    return 0;
}
void Add(int a, int b)
{
    printf("%d\n", a + b); // void : it just used to show ones and can't use and store as a varable
    return;
    printf("hello 1\n");
}
int add(int a, int b)
{
    printf("hello 1\n");
    return a + b; // return : it prints return value  and can use and store as a varable
    printf("hello 2");
}
