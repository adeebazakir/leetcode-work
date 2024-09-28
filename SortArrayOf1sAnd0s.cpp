#include<iostream>
#include<vector>
using namespace std;

void sortArray(vector<int> &array,int size)
{
	int i=0,j=size-1;
	while(i<j)
	{
		 // Move `i` forward if it's already 0
		while(i<j && array[i]==0)
		{
			i++;
		}
		// Move `j` backward if it's already 1
		while(i<j && array[j]==1)
		{
			j--;
		}
		 // Swap if `i` points to 1 and `j` points to 0
		if(i<j)
		{
			int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
		}
	}
}
int main()
{
	int n;
	cout<<"enter the size of array: ";
	cin>>n;
	vector<int> array(n);
	cout<<"Enter the element into array (only 0s and 1s) ";
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	
	sortArray(array,n);
	for(int i=0;i<n;i++)
	{
		cout<<array[i]<<" ";
	
	}
	
	//the code below can solve the problem but it has O(n^2) complexity
	/*
	for(int i=0;i<n/2;i++)
	{
		for(int j=n-1;j>n/2;j--)
		{
				if(array[i]==1 && array[j]!=1)
				{
					int temp=array[i];
					array[i]=array[j];
					array[j]=temp;
				}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<array[i]<<" ";
	
	}
	*/
}
