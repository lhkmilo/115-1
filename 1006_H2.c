#include <stdio.h>
int main()
{
    float height;
    printf("請輸入身高（公分）:");
    scanf ("%f",&height);
    if (height>=120)
    {
        printf ("可以搭乘雲霄飛車。");
    }
    else
    {
        printf ("身高不足，無法搭乘雲霄飛車。");
    }
    return 0;
}