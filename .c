#include <stdio.h>

struct Student
{
    char name[50];
    int RollNo;
    float marks;
}s[5];

int main()
{
    float countm;
    for (int i=1;i<=5;i++)
    {
        printf("Enter Student %d Name\n>>", i);
        scanf("%s", s[i].name);
        printf("Enter Student %d Roll Number\n>>", i);
        scanf("%d", &s[i].RollNo);
        printf("Enter Student %d Marks\n>>", i);
        scanf("%f", &s[i].marks);
        countm += s[i].marks;
    }
    for(int i=1;i<=5;i++)
    {
        printf("Details of Student %d:\n", i);
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].RollNo);
        printf("Marks: %f\n", s[i].marks);
    }
    countm = countm/5;
    printf("Average Marks is %f", countm);
    return 0;
}
