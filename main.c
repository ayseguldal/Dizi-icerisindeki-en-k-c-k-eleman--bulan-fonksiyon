#include <stdio.h>
#include <stdlib.h>


float enkucukbulma(float array[],int n){
  // n dizinin uzunluðudur.
	int i;
	float enkucuk=array[0];        
	
	for(i=1;i<n;i++){            
		if(array[i]<enkucuk){   
			enkucuk=array[i];  
		}
	}
	  return enkucuk;   
}                    


int main() {
    int i;
    float sayilar[5]={3.2,78,2.9,35,0.75};
    float enkucuk=enkucukbulma(sayilar,5);
    
    printf("En Kucuk: %f",enkucuk);
   

	return 0;    
}
