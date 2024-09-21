
    	
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
