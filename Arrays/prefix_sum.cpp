
#include <iostream>
using namespace std;
int main(){
	int numbers[] = {1,2,3,4,6,9};
	int prefix[6];
    prefix[0] = numbers[0];
    for(int i=1; i<6; i++)
    {
   
    prefix[i] = numbers[i] + prefix[i-1];
    }
    
    for(int i=0; i<6; i++)
    {
    cout << prefix[i] << "   ";
}
   
   return 0;
}