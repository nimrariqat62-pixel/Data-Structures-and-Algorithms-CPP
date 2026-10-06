
		
#include <iostream>
using namespace std;
int main(){
	int numbers[]= {7,8,9,10,11};
	int size = 5;
	int low=0;
		int high = size-1;
	int pivot = numbers[high];
	int i = low-1;
	
	for(int j=low; j<high; j++)
	
		if(numbers[j]<pivot)
		{
  i++;
  
  int temp=numbers[i];
  numbers[i] = numbers[j];
  numbers[j]  = temp;
	
	
}

     
       int temp = numbers[i+1];
       numbers[i+1] = numbers[high];
       numbers[high] = temp;
       
       for(int k=0; k<size; k++)
       {
       	cout << numbers[k] << "   ";
       
   }
   
   return 0;
   
} 