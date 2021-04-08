#include <stdio.h>
#include <conio.h>
#include <string.h>

int cozum(int sayi){
	
  int x, y;
  int result=0;
  int temp=0;
  bool first=false;
  printf("%d IKILI SAYI SISTEMINDE:\n", sayi);

  for (x = 10; x >= 0; x--)
  {
    y = sayi >> x;

    if (y & 1){
	
      printf("1");
      if(temp!=0 && temp>result){
      	result=temp;
	  }
	  first=true;
   }else{
   
		
	    if(first){
	  	temp++;
	    }
                 
        printf("0");         
        }
  }

  printf("\n");
  printf("%d",result);
  
}

int main(){
	
	cozum(35);

	
	return 0;
}
