#include <stdio.h>

main(){
	
	int a;
	
	printf("Select EUR to ZLT(1) or EUR to USD(2)");
	scanf("%d", &a);
	
	if(a==1){
		double b;
		printf("How much money exchange do you want?");
		scanf("%lf", &b);
		printf("%lf EUR= %lf ZLOTIES \n", b , b*4.28);
	}
	else if(a==2){
		double c;
		printf("How much money exchange do you want?");
		scanf("%lf", &c);
		double d=c*1.18;
		printf("%lf EUR= %lf ZLOTIES \n", c , d);
	}
	else{
		printf("1 EUR is worth 4.28 PLN. 1 EUR is worth 1.18 USD.");
	}
	
	return 0; 
}