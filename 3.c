#include <stdio.h>
int toplam(int a){
	
	if(a==1)
	
	return a;
	
	
	else
	
	return( a + toplam(a-1));
}
int main(void){
	
	int sayi=6;
	
	printf("sonuc:%d", toplam(sayi));
	
}
