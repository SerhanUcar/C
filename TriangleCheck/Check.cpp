#include <stdio.h>
#include <stdlib.h>

main(){
	
	double a,b,c;
	
	printf("Enter 3 values: \n");
	scanf("%lf %lf %lf", &a, &b, &c);
	
	double value;
	
	if((a+b>c) && (c>abs(a-b))){
		printf("You can draw a triangle.");
	}
	else{
		printf("You can't draw a triangle.");
	}
	
	return 0; 
}