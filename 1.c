#include <stdio.h>

void fonk(int n, int a, int b){
	
	if(n >= 10)
     	return;
	
	fonk(n + 2, a, b + n);

	printf("%d %d %d\n", n, a, b);
	
}
int main(){
	
	int n=0;
	
	int a=5;
	
	int b=7;
	
	
	fonk(n, a, b);
	
	return 0;
}
