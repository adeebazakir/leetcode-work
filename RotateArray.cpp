#include<iostream>
using namespace std;

int main()
{
	int nums[]={1,2,3,4,5};
	int k=2,size=5;
	int temp[5];
	k=k%size;
	for(int i=0;i<k;i++)
	{
		temp[i]=nums[size-k+i];
	}
	for(int i=k;i<5;i++)
	{
		temp[i]=nums[i-k];
	}
	for(int i=0;i<size;i++)
	{
		nums[i]=temp[i];
	}
	for(int i=0;i<5;i++)
	{
		cout<<nums[i]<<" ";
	}
}
