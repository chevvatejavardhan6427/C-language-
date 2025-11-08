#include <stdio.h>
typedef char letters;
typedef int num;


typedef struct
{
    letters name[50];
    letters section;
    num age;

} Student;
int main()
{
    Student arr[] = {
        {"vinay", 'D', 18},
        {"laddu", 'A', 57}};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {

        printf("%s %c %d\n", arr[i].name, arr[i].section, arr[i].age);
    }

    return 0;
}
