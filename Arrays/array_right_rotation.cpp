
#include <iostream>
using namespace std;
int main(){
	int numbers[]= {12,3,6,5,9};
	int size = 5;
	int temp = numbers[size-1];
	for(int i=size-1; i>0; i--)
	{
		numbers[i] = numbers[i-1];
	}
	numbers[0] = temp;
	for(int i=0; i<size; i++)
	{
		cout << numbers[i] << "   ";
	}
	return 0;
}