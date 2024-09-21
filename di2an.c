#include <stdio.h>
int LaoBan();
int GuKe();
int main()//begin
{
	printf("Qing Shu Ru Mi Ma  667896 Jin Ru Lao Ban Mo Shi,Shu Ru Qi Ta Jin Ru Gu Ke Mo Shi \n");
	int MiMa = 667896;
	int ShuRu;
	scanf ("%d",&ShuRu);
	if(ShuRu==MiMa)
	LaoBan();
	else
	GuKe();;
	return 0;
}
int LaoBan()//   Lao Ban Mo Shi
{
	printf("Yi Jin Ru Lao Ban Mo Shi");
	return 0;
}




int GuKe()//Gu Ke Mo Shi
{
	
	printf(" Yi Jin RU Gu Ke Mo Shi");
	return 0; 
 } 
