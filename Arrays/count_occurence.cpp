
#include <iostream>
using namespace std;
int main(){
	
	int numbers[] = {5,8,3,8,2,8,9};
	int size= 7;
	int targetvalue=8;
	int i=0;
	int count =0;
	
	while(i<size){
		
	
	if (numbers[i] == targetvalue) {
		cout << " number is found at index" << i << endl;
	count++;
		

	}
	
	i++;
}
cout << "total occurences :  " << count << endl;
	return 0;
}