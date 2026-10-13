#include <stdio.h>
int main()
{
    int drink;
    printf("1. 紅茶 30元\n2. 綠茶 35元\n3. 奶茶 50元\n4. 果汁 45元\n請選擇飲料：");
    scanf("%d",&drink);
    switch(drink)
    {
        case 1:
        printf("您選擇紅茶，價格30元");
        break;
        case 2:
        printf("您選擇綠茶，價格35元");
        break;
        case 3:
        printf("您選擇奶茶，價格50元");
        break;
        case 4:
         printf("您選擇果汁，價格45元");
        break;
         default:
        printf("輸入錯誤");
        break;
    }
    return 0;
}