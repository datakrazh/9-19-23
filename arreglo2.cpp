#include<stdio.h>

int main(){
	
int x, tabla[100];
	
	for(x=0;x<100;x++)
		tabla[x]=x;
	
	for(x=0;x<100;x++)
		printf("%d\n", tabla[100-x]);//CAMBIAMOS "x" POR "100-x"
		
	return 0;
}
