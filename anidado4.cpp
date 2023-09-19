#include<stdio.h>

int main(){
	
	float temp;
	int dias=1, horas;
	
	while (dias<=3){
		for (horas=1;horas<=24;horas++){
		
			printf("Temp del dia %d en la hora %d:", dias, horas);
			scanf("%f", &temp);
		
		}
		
		dias=dias+1;

	}
		
	return 0;
}
