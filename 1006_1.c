#include <stdio.h>
int main()
{
    int age;
    int license;
    printf ("輸入年紀:");
    scanf("%d",&age);
    printf ("有無駕照(有1無0):");
    scanf("%d",&license);
    if (age>=18 || license==1)
    {
        printf("可開");
    }
    else 
    {
        printf("不可開");
    }
    return 0;
}