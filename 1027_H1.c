#include <stdio.h>
int add(int a,int price)
{
    return a*price;
}
int main()
{
int a,price,total;
printf("請輸入購買數量:");
scanf("%d",&a);
printf("請輸入購買金額:");
scanf("%d",&price);
total=add(a,price);
printf("總金額:%d\n",total);
return 0;
}