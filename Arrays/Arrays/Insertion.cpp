

#include <iostream>
using namespace std;
int main(){
	
	int numbers[] = {10,20,30,40,50};
	int size=5;
	int value;
	int index;
	cout << " enter a value : ";
	cin >> value;
	cout << " enter a index :  ";
	cin >> index;
	for (int i= size-1; i>=index; i--)
	numbers[i+1] = numbers[i];
	numbers[index] = value;
	++size;
	for (int i = 0; i < size; i++)
	cout << numbers[i] << "  " << endl;
	return 0;
}