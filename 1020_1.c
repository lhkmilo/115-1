#include <stdio.h>
int main()
{
    int num;
    printf("請輸數值，輸入0結束:");
    scanf("%d",&num);
    while (num !=0)
    {
        if(num>0)
        {
            printf("正數");
        }
            else
        {
            printf("負數");
        }
            printf("請輸數值，輸入0結束");
            scanf("%d",&num);
    }
    printf("程式結束");
    return 0;
}