
#include <iostream>
using namespace std;
int main(){
	int numbers[] ={3,6,8,10,12};
	int size=5;
	int temp= numbers[0];
	for(int i=0; i<size-1; i++)
	{
		numbers[i]= numbers[i+1];
	}
	numbers[size-1]=temp;
	
	for(int i=0; i<size; i++)
	{
		cout << numbers[i] << "    ";
	}


return 0;
}