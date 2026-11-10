#include <stdio.h>
void count(int n)
{
    if (n==0)
    {
        printf("所有樓層解鎖完成！");
        return;
    }
    printf("解鎖第%d層魔法能量\n",n);
    count(n-1);
}

int main()
{
    int n;
    printf("請輸入魔法金字塔層數：");
    scanf("%d",&n);
    count(n);
    return 0;
}