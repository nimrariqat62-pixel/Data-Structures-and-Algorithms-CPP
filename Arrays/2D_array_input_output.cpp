

#include <iostream>
using namespace std;
int main(){
	
	int numbers[3][4] = {
	                                     {10,20,30,40},
	                                     {50,60,70,80},
	                                     {90,100,110,120}
};

for(int i=0; i<3; i++)
{
	for(int v=0; v<4; v++)
	{
		cout << " enter a number : ";
		cin >> numbers[i][v];
	}
}
	
	for(int i=0; i<3; i++)
	{
		for(int v =0; v<4;  v++)
{		
	cout << numbers[i][v] << "   ";
}
	cout << endl;
}
	return 0;
}
	
