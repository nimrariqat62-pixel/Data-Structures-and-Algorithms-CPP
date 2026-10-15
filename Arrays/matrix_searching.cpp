
#include <iostream>
using namespace std;
int main(){
	
	int numbers[3][4] = {
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}
	};
	
	int search;
	cout << " enter value to search :  ";
	cin >> search;
    
    for(int i=0; i<4; i++)
   { 
   
    for(int j=0; j<3; j++)
    {
    	if(numbers[j][i]==search)
    {
    	cout << "number is found  " << endl;
    break;
    }
    
    }
    
   }
   
   return 0;
}
 