
#include <iostream>
using namespace std;
int main(){
	int numbers[] ={4,2,2,3,1};
	int size=5;
	int max= numbers[0];
		for(int i=0; i<size; i++)
		{
			if(numbers[i]>max)
			{
				max = numbers[i];
			}
		}   
		  
			int count[5]  = {}; 
			for (int i=0; i<size; i++)
			{
				count [numbers[i]]++;
			}
			 int index=0;
			 for(int i=0; i<=max; i++)
			 {
			 	while (count [i]>0) {
			 		numbers [index] = i;
			 		index++;
			 		count[i] --;
			 	}
			 }
			 for (int i=0; i<size;i++)
			 {
			 		cout << numbers[i] << "    ";
			 }
			    return 0;
}
			 		