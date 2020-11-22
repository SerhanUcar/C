#include <stdio.h>
#include <math.h>

main(){
	printf("Which one do you prefer: Circles area(1) - Circles perimeter(2): ");
	int choice;
	scanf("%d", &choice);
	
	printf("Give the radius: ");
	float r;
	scanf("%f", &r);
	
	float pi=M_PI;
	
	if(choice==1){
		float area=pi*r*r;
		printf("Circles area is: %f" , area);
	}
	if(choice==2){
		double perimeter=2*pi*r;
		printf("Circles perimeter is: %f", perimeter);
	}
	
	return 0; 
}