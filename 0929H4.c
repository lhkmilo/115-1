#include <stdio.h>
int main()
{
    int 門禁卡權限=5;
    int 停車場權限=1<<2;
    int 辦公室權限=1<<3;
    printf("停車場的權限:%d\n",停車場權限);
    printf("學生有無停車場權限:%d\n",門禁卡權限&停車場權限);
    printf("學生有無辦公室權限:%d\n",門禁卡權限&辦公室權限);
    return 0;
}