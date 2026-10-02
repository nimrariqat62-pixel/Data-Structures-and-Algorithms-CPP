

#include  <iostream>
using namespace std;
int main(){

int numbers[] = {7,6,8,10,11};
int value;
for(int i=0; i<5-1; i++)
{
int minIndex= i;
for(int j=i+1; j<5; j++)
{
if (numbers[j] < numbers[minIndex])
minIndex=j;
}
int temp = numbers[i];
numbers[i] = numbers[minIndex];
numbers[minIndex] = temp;
}
for (int j=0; j<5; j++)
cout << numbers[j] << "   ";


return 0;
}





