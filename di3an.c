

#include <stdio.h>
int LanBan();
int GuKe();
int main()//开始
{
    printf("请输入密码 667896 进入老板模式，输入其他进入顾客模式\n");
    int MiMa = 667896;
    int ShuRu;
    scanf("%d", &ShuRu);
    if(ShuRu == MiMa)
        LanBan();
    else
       GuKe();
    return 0;
}
int LanBan()//老板模式
{
    printf("已进入老板模式\n");
    return 0;
}

int GuKe()//顾客模式
{
    printf("已进入顾客模式\n");
    return 0;
}
