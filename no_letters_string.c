#include <stdio.h>
int main()
{

    int count = 0;
    char name[] = "teja vardhan";
    int i = 0;
    while (name[i] != '\0')
    {
        if (name[i] == ' ')
        {
            i++;
            continue;
        }
        count++;
        i++;
    }
    printf("%d", count);

    return 0;
}
