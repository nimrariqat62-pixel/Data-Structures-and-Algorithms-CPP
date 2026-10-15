
#include <iostream>
using namespace std;
int main(){
	int numbers[7] = {8,3,6,5,7,9,10};
	int largest=numbers[0];
	int smallest=numbers[0];
	for(int i=0; i<7; i++)
	{
		if(numbers[i]>largest)
		{
			largest=numbers[i];
		}
	
	
	if(numbers[i] < smallest)
	{
		smallest=numbers[i];
	}
	}
	


int evencount=0;
int oddcount=0;
for(int i=0; i<7; i++)
{
	if(numbers[i]%2==0)
	{
	evencount++;
	}
	 else 
	 {
	 	
		oddcount++;
}
}

int positivecount=0;
int negativecount=0;
int zerocount=0;
for(int i=0; i<7; i++)
{
	if(numbers[i]>0)
	{
	positivecount++;
}
else if(numbers[i]<0)

{
	negativecount++;
}
else 
{
	zerocount++;
}

}

cout << " largest numbers : " << largest << endl;
cout << " smallest numbers : " << smallest << endl;
cout << " even count : " << evencount << endl;
cout << " odd count  : " << oddcount << endl;
cout << " positive count : " << positivecount << endl;
cout << " negative count : " << negativecount << endl;
cout << " zero count : " << zerocount << endl;
return 0;
}