#include <stdio.h>

void LanBan();
void GuKe();
void begin();
void TTongDao(int);

char TongDao[5] = {'A', 'A', 'A', 'A', 'A'};
int Using_HuoJia[4][5] = {
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0}
};

int main() {
    begin();
    return 0;
}

void LanBan() {
    printf("已进入老板模式\n");
    displayInventory();
    printf("请选择想要改的通道(1-5): ");
    int XuanZe;
    while ((scanf("%d", &XuanZe) != 1) || (XuanZe < 1 || XuanZe > 5)) {
        printf("输入错误，请输入1-5: ");
        while ((getchar() != '\n'));
    }
    TTongDao(XuanZe);
}

void GuKe() {
    printf("已进入顾客模式\n");
    printf("未完成");
    while ((getchar() != '\n'));
    begin();
}

void begin() {
    printf("请输入密码 (667896)进入老板模式，输入520退出，输入其他进入顾客模式\n");
    int MiMa = 667896;
    int N_MiMa = 520;
    int ShuRu;
    scanf("%d", &ShuRu);
    while ((getchar() != '\n'));
    if (ShuRu == MiMa)
        LanBan();
    else if (ShuRu == N_MiMa)
        exit(0);
    else
        GuKe();
}

void TTongDao(int XZ_YongDao) {
    printf("请输入想在通道%d放置的货物（A-Z的大写字母）: ", XZ_YongDao);
    char fgh;
    scanf(" %c", &fgh); // 注意前面的空格
    while ((getchar() != '\n'));
    if ((fgh >= 'A') && (fgh <= 'Z')) {
        TongDao[XZ_YongDao - 1] = fgh;
    } else {
        printf("输入错误，请输入A-Z的大写字母\n");
    }
}

void displayInventory() {
    printf("货物\t");
    for (int n = 0; n < 5; n++)
        printf("%3c", TongDao[n]);
    printf("\n原价\t");
    for (int n = 0; n < 5; n++)
        printf("%3d", Using_HuoJia[1][n]);
    printf("\n售价\t");
    for (int n = 0; n < 5; n++)
        printf("%3d", Using_HuoJia[2][n]);
    printf("\n销量\t");
    for (int n = 0; n < 5; n++)
        printf("%3d", Using_HuoJia[3][n]);
    printf("\n");
}