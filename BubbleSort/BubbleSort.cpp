#include <stdio.h>

main(){
	int array[3];
	int a,b,c;
	printf("Please enter 3 numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	array[0]=a;
	array[1]=b;
	array[2]=c;
	
	//With Bubble Sort
	for(int i=0; i<3; i++){
		for(int j=0; j<3-i-1; j++){
			int temp;
			if(array[j]>array[j+1]){
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	
	for(int i=0; i<3; i++){
		printf("%d  " , array[i]);
	}
	
	
	return 0; 
}