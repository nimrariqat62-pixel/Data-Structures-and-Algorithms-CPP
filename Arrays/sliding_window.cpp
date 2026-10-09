
#include <iostream>
using namespace std;
int main(){
	int numbers[] = {7,8,9,10,11};
	int k = 3;
	int n= 5;
	int windowSum=0;
	for(int i=0; i<3; i++)
	windowSum+=numbers[i];
	int maxSum= windowSum;
	for(int i=0;  i+k<n; i++)
	{
	windowSum= windowSum-numbers[i]+numbers[i+k];
	if(windowSum>maxSum)
	{
		maxSum=windowSum;
	}
	
	}
	cout << maxSum << endl;


return 0;
}