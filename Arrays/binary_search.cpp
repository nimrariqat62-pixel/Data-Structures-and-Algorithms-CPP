

#include <iostream>
using namespace std;
int main(){
	
	int numbers[] = {7,8,9,10,11};
	int size  = 5;
	int value;
	cout << " enter a  value : ";
	cin >> value;
	for(int i =0; i<size; i++)
	{
if(numbers[i]== value)
{
		cout << "number is found at index" << i << endl; 
	break;
}
	}

return 0;
	}