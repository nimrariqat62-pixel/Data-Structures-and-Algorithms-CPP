
#include <iostream>
using namespace std;
int main(){
	int numbers[] = {7,1,6,9,8};
	int size = 5;

	
	
	for(int i=1; i<size; i++)
	{
	int key = numbers[i];
	int j=i-1;
  
    
while( j>=0 && numbers[j] > key)
{
numbers[j+1] = numbers[j];
j--;	
}
        numbers[j+1] = key;
        
}

for(int i=0; i<size; i++)
{
     cout << numbers[i] << "   ";
}
     return 0;
   
}
