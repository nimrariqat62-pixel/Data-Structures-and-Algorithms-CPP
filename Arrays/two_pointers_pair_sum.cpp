
#include <iostream>
using namespace std;
int main(){
	
  int numbers[] = {2,4,5,7,8,10};
  int size = 6;
  int target = 12;
  int left=0;
  int right = size-1;
  while(right>left){
  if(numbers[right]+numbers[left]==target)
  {
  	cout << " pair is found : ";
  	
      cout << numbers[right] <<  " + " << numbers[left] << " = " << target;
       break;
      
  }
  	
  	else if(numbers[right]+numbers[left] < target)
  	{
  		left++;
  	}
  	else
  	{
  		right--;
  	}
  }	
  	return 0;
}
