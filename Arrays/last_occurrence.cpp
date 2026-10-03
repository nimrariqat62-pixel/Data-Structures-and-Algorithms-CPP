
#include <iostream>
using namespace std;
int main(){
	
	int numbers[] = {5,8,3,8,2,8,9};
	int size= 7;
	int targetvalue=8;
	int i=6;
	
	while(i>=0){
	
	if (numbers[i] == targetvalue) {
		cout << " number is found at index" << i << endl;
		
break;
	}
	
	i--;
}
	return 0;
}