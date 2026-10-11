
#include <iostream>
using namespace std;
int main(){
	int numbers[] = {2,-6,5,2,1,-4};
	int size = 6;
	int currentsum=numbers[0];
	int maxsum=numbers[0];
	
	for(int i=0; i<size; i++)
	{
		if(currentsum+numbers[i]>numbers[i])
		{
			currentsum=currentsum+numbers[i];
		}
		else{
			currentsum=numbers[i];
		}
		if(currentsum>maxsum)
		{
			maxsum= currentsum;
		}
	}
		cout << " maximum subarray sum = " << maxsum;
		return 0;
	}
			
		