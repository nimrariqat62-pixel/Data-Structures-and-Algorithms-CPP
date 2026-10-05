





#include <iostream>
using namespace std;
void merge(int numbers[], int left,int mid, int right)
{
	int temp[100];
int i=left;
int j= mid+1;
int k =left;

while (i<=mid && j<=right)
{

	if(numbers[i] <= numbers[j])
	{
	temp[k] = numbers[i];
	k++;
	i++;
}

else 

{
	temp [k] = numbers[j];
	k++;
	j++;
}
}

while(i<=mid)
{
	
temp [k] = numbers[i];
k++;
i++;

}

while (j<=right)
{
	temp [k] = numbers[j];
	k++;
	j++;
}

for (int i =left; i<=right; i++)
{
	numbers[i] = temp[i];
}
}
void mergesort(int numbers[], int left,int right)
{
	if(left<right)
{	 
	int mid = left+(right-left)/2;
	mergesort(numbers,left,mid);
	mergesort(numbers,mid+1, right);
	merge(numbers,left,mid,right);
}
}
int main(){
	int numbers[]= {7,8,10,18,19};
	int size =5;
	mergesort(numbers,0,size-1);
	for (int i=0; i<size; i++)
	{
		cout << numbers[i]  << endl;
	}


return 0;

}