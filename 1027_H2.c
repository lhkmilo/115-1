#include <stdio.h>
int taxi(int a)
{
    int fare=70;
    if(a>2)
    {
        fare=fare+(a-2)*10;
    }
    return fare;
}
int main()
{
int a,fare;
printf("請輸入行駛公里數:");
scanf("%d",&a);
fare=taxi(a);
printf("車資:%d\n",fare);
return 0;
}