
#include <iostream>
using namespace std;
int main(){
	int numbers[] = {7,8,9,10,11,12};
	int k=3;
	int size=6;
	int windowSum=0;
	for(int i=0; i<k; i++)
	windowSum+=numbers[i];
	int minimumSum=windowSum;
	for(int i=k; i<size; i++)
	{
	windowSum=windowSum-numbers[i-k]+numbers[i];
	if(windowSum<minimumSum)
	{
	
	minimumSum = windowSum;
	}
	}
	
	cout << "minimumwindowSum : " << minimumSum << endl;
	


return 0;
}
	
	
