
#include <iostream>
using namespace std;
int main(){
	
	int numbers[] = {7,8,9,10,11};
	int size = 5;
	int value;
	int index;
	
	cout << " enter a index : ";
	cin >> index;
	for (int i= index; i < size-1;  i++)
	numbers[i] = numbers [i+1];
	--size;
	for(int i =0; i<size; i++)
	cout << numbers[i] << "     ";
	return 0;
}
	                    