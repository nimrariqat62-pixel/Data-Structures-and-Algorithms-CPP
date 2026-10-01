

#include <iostream>
using namespace std;
int main(){
	int numbers[] = {110,120,160,170,180};
	int value;
	
	cout << "enter a value : ";
	cin >> value;
	for (int i=0; i<5; i++)
	
  if(numbers[i] == value)
  cout << "number is  found " << i << endl;
  else 
  if(numbers[i] != value)
  cout << "number is not found " << i << endl;
  return 0;
}