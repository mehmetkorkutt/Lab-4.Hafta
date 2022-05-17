#include <stdio.h>

int fonk(int n){
	
	if(n==4)
	
	return n;
	
	else
	
	return 2 * fonk(n+1);
}
int main(){
	
	printf("%d", fonk(2));
	
	return 0;
	
}
