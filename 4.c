#include <stdio.h>

void fun(int k){
	
	if(k=0)

	return;
	
	fun(k/2);
	
	printf("%d", k%2);
}

int main(void){
	
	int k=25;
	
	fonk(k);
}
