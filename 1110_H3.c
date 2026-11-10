#include<stdio.h>
#define BUDGET 20000
int expense;
int main()
{
    extern int expense;
    int total;
    printf("請輸入目前的旅行花費：");
    scanf("%d",&expense);
    total=BUDGET-expense;
    printf("旅行總預算：%d\n",BUDGET);
    printf("目前旅行花費：%d\n",expense);
    printf("剩餘預算：%d\n",total);
    return 0;
}