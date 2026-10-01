

#include <iostream>
using namespace std;
int main(){
	
	int numbers[] = {5,6,7,8,9};
	int value;
	for(int i=0; i<4; i++)
	for(int v=0; v<4; v++)
	
	if(numbers[v] < numbers [v+1])
{	
	int temp = numbers[v];
	numbers[v] = numbers[v+1];
	numbers[v+1] = temp;
}

	
			
	



for (int v=0; v<5; v++)
{	
	cout << numbers[v] << "  ";
}
	return 0;
}