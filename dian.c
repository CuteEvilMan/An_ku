#include <stdio.h>
int LaoBan();
int GuKe();
int main()//开始 
{
	printf("输入密码//667896//调整货物，输入其他购物\n");
	int MiMa = 667896;
	int ShuRu;
	scanf ("%d",&ShuRu);
	if(ShuRu==MiMa)
	LaoBan();
	else
	GuKe();;
	return 0;
}
int LaoBan()//老板模式 
{
	printf("老板模式已开启");
	return 0;
}




int GuKe()//顾客模式 
{
	
	printf("顾客模式已开启");
	return 0; 
 } 
