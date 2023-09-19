#include<stdio.h>

int main(){
	
int x, i=0, tabla[100];
	
	for(x=0;x<99;x++)
		if (x%2==1){
			tabla[i]=x;
			i++;//ó "i=i+1"
		}
	
	for(x=0;x<i;x++)
		printf("%d\n", x);
		
	return 0;
}
