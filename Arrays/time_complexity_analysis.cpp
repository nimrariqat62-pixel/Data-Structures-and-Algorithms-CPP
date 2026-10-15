
#include <iostream>
#include <algorithm>
using namespace std;
void arrange(int numbers[], int n,int index);
void subsets(int numbers[], bool included[] ,int n, int index);

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int n = 5;
    for (int i = 0; i < n; i++) 
    {
    cout << numbers[i] << "  ";

}


int target =20;
int low=0;
int high=4;

int mid;
while(low<=high)
{
mid=(low+high)/2;

if(numbers[mid] == target)
{
	cout << " target is found at index : " << mid << endl;
	break;
}

 	 
   if  (numbers[mid] < target)
{
  low=mid+1;
}
 else  if (numbers[mid] > target)
{
high=mid-1;
}
}

for(int i=0; i<n; i++)
{
	for(int j=0; j<n; j++)
	{
		cout << numbers[i] << "    " << numbers[j] << endl;
	}
}


for(int i =0; i<n; i++)
{
	for(int j=0; j<n; j++)
	{
		for(int k=0; k<n; k++)
		{
			cout << numbers[i] << "    " << numbers[j] << "    " << numbers[k] << endl;
		}
	}
}
       
   cout << numbers[2] << endl;
   arrange(numbers, 3, 0);
   bool included[3] = {};
subsets(numbers, included, 3, 0);
for(int i=1; i<n; i*=2)
{
    for(int j=0; j<n; j++)
    {
        cout << i << "     " << j << endl;
    }
}
}

void arrange(int numbers[], int n, int  index)

{
if(index == n)
{
	for(int i=0; i<n; i++)
	{
		cout << numbers[i] << "    ";
	}
	
	cout << endl;
	return;
}
    for(int i =index; i<n; i++)
    {
        swap(numbers[index] , numbers[i]);
        arrange(numbers,n,index+1);
        swap(numbers[index] , numbers[i]);
    }
}

void subsets(int numbers[], bool included[], int n, int index)
{
	  if(index == n)
	  {
	      cout << " { ";
	      for(int i=0; i<n; i++)
	      {
	      	if(included[i])
	      	{
	      	cout << numbers[i] << "    ";
	      }
	      }
	       
	       cout << "  } " <<  endl;
	       return;
	       
	  }
	  included [index]= true;
	  subsets(numbers,included,n, index+1);
	  included [index] = false;
	  subsets(numbers,included,n,index+1);
}

                          