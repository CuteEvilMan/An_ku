#include <stdio.h>
int LanBan();
int GuKe();
int HuoWuXianShi();
int begin();
 
const  int HuoJia [4] [5] =     		//售货机本机 
{
	{0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0}
};
int Using_HuoJia [4] [5] =    
{
	{0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0}
};
int main()//开始
{
    begin();
    return 0;
}
int LanBan()//老板模式
{
    printf("已进入老板模式\n");
    HuoWuXianShi();
    int B_ShuRu;
    printf ("输入密码（初始123456）设置货物，输入其他回到开始"); printf("\n");
    int B_MiMa = 123456;
    scanf ("%d",B_ShuRu);
    if (B_ShuRu == B_MiMa)
    {
    	
    	
	}
	else begin(); 
    return 0;
}

int GuKe()//顾客模式
{
    printf("已进入顾客模式\n");
    return 0;
}
int HuoWuXianShi()//显示货物 
{
	printf("货物\t");
    for(int n = 0 ;n<5;n++)
    printf("%3d",Using_HuoJia [0] [n - 1]);     printf("\n");
	printf("原价\t");
    for(int n = 0 ;n<5;n++)
    printf("%3d",Using_HuoJia [1] [n - 1]);    printf("\n");
    printf("售价\t");
    for(int n = 0 ;n<5;n++)
    printf("%3d",Using_HuoJia [2] [n - 1]);     printf("\n");
    printf("销量\t");
    for(int n = 0 ;n<5;n++)
    printf("%3d",Using_HuoJia [3] [n - 1]);     printf("\n");
    return 0;
} 

int begin() 		//起点 
{
	printf("请输入密码 (667896)进入老板模式，输入其他进入顾客模式\n");
    int MiMa = 667896;
    int ShuRu;
    scanf("%d", &ShuRu);
    if(ShuRu == MiMa)
        LanBan();
    else
       GuKe();
    return 0;
}
