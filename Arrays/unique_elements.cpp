
#include <iostream>
using namespace std;
int main(){
	int numbers[] = {4,2,4,7,2,9};
	int size= 6;
	int count = 0;
	
	for(int i=0; i<size; i++)
	{
	count =0;
	
	for(int j=0; j<size; j++)
	{
		if(numbers[i]==numbers[j])
		{
			count++;
		}
		
	}
		if(count==1)
		{
		cout <<  numbers[i] << "   " << endl;
	}
	}
	return 0;
	}
