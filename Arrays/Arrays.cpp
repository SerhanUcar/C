#include <stdio.h>
#include <stdlib.h>

	int array[10];
	int n;
	void ab(void){
		
		int a;
		printf("How much elements do you want in your array?: ");
		scanf("%d", &a);
		array[a];
		n=a;
		
		for(int i=0; i<a; i++){
			scanf("%d", &array[i]);
		}
		
		
	
		for(int i=0; i<a;i++){
			printf("Array's %d elements is: %d \n", i, array[i]);
		}
		printf("********************* \n");
	}

	void c(void){
		
		int n = sizeof array;
		
		for(int i=0; i<n; i++){
			if(array[i]<0){
				printf("Array's %d element is negative: %d \n",i , array[i]);
			}
		}
		printf("********************* \n");
	}
	
	void d(void){
		
		int sum=0;
		
		for(int i=0; i<n; i++){
			sum+=array[i];
		}
		
		printf("Sum is: %d \n", sum);
		printf("********************* \n");
		
	}
	
	void e(void){
		int max=array[0];
		int min=array[0];
		
		for(int i=1; i<n; i++){
			if(max<array[i]){
				max=array[i];
			}
			if(min>array[i]){
				min=array[i];
			}
		}
		printf("Max= %d and Min= %d \n", max, min);
		printf("********************* \n");
	}
	
	int even=0,odd=0;
	
	void f(void){
		int evenSum=0,oddSum=0;
		
		for(int i=0; i<n; i++){
			if(array[i]%2==0){
				evenSum+=array[i];
				even++;
			}
			else if(array[i]%2!=0){
				oddSum+=array[i];
				odd++;
			}
		}
		
		printf("Even numbers sum: %d and Odd numbers sum: %d \n", evenSum, oddSum);
		printf("********************* \n");
		
	}
	
	void g(void){
		int reverseArray[n];
		
		for(int i=n-1,j=0; i>=0; i--,j++){
			reverseArray[i]=array[j];
		}
		
		for(int i=0; i<n; i++){
			printf("Reverse Array's %d element is: %d \n", i, reverseArray[i]);
		}
		printf("********************* \n");
	}
	
	void h(void){
		int evenArray[even];
		int oddArray[odd];
		
		int evenCount=0,oddCount=0;
		
		for(int i=0; i<n; i++){
			if(array[i]%2==0){
				evenArray[evenCount]=array[i];
				evenCount++;
			}
			else if(array[i]%2!=0){
				oddArray[oddCount]=array[i];
				oddCount++;
			}
		}
		
		
		for(int i=0; i<evenCount; i++){
			printf("Even Array's %d element: %d \n", i, evenArray[i]);
		}
		
		for(int i=0; i<oddCount; i++){
			printf("Odd Array's %d element: %d \n", i, oddArray[i]);
		}
		printf("********************* \n");
	}
	
	void i(int searchNumber){
		
		bool find=false;
		
		for(int i=0; i<n; i++){
			if(array[i]==searchNumber){
				printf("Your searching number is %d. element in array.",i);
				find=true;
				break;
			}
		}
		
		if(find=false){
			printf("Your searching number didn't found in the array.");
		}
		
	}
	
	void j(void){
		
		bool sort=true;
		
		for(int i=0; i<n-1; i++){
			if(array[i]>array[i+1]){
				printf("Array isn't sorted. \n");
				sort=false;
				break;
			}
		}
		
		if(sort==true){
			printf("Array is sorted. \n");
		}
		printf("********************* \n");
	}
	
	void k(void){
		int sum=0;
		
		for(int i=0; i<n; i++){
			sum+=array[i];
		}
		
		int average=sum/n;
		
		int minus=abs(average-array[0]);
		int closestNumber;
		
		for(int i=1; i<n; i++){
			
			if(abs(average-array[i])<minus){
				closestNumber=array[i];
				minus=abs(average-array[i]);
			}
			
		}
		
		printf("Closest number is: %d \n", closestNumber);
		printf("********************* \n");
	}

main(){
	
	ab();
	c();
	d();
	e();
	f();
	g();
	h();
	i(1);
	j();
	k();
	
	return 0;
}
