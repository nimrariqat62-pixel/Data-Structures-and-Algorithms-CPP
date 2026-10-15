
#include <iostream>
using namespace std;
int main(){
	
	int numbers[3][4] = {
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}
	};
	
	int search;
	bool found=false;
	cout << " enter value to search :  ";
	cin >> search;
    
    for(int i=0; i<4; i++)
   { 
   
    for(int j=0; j<3; j++)
    {
    	
    	if(numbers[j][i]==search)
    {
    	cout << "number is  found  " << endl;
    	found=true;
    	
    break;
    }
    
    }
   
   }
   
          if(found==false)
          {
          	cout << "number is not found" << endl;
          }
   
   return 0;
}
 