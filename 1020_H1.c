#include <stdio.h>
int main()
{
    int code;
    printf("請輸入密碼（輸入-1退出）:");
    scanf("%d",&code);
    while (code !=1234 && code!=-1)
    {
        printf("密碼錯誤，請重新輸入（輸入-1退出）:");
        scanf("%d",&code);
    }
        if (code==1234)
        {
            printf("登入成功");
        }
        else if(code==-1)
        {
            printf("已退出程式");
        }
    return 0;
}