#include<iostream>
using namespace std;

bool checkPrefixSuffixSum(int array[],int size)
{
	int prefix=0,suffix;
	int totalSum=0;
	int index;
	for(int i=0;i<6;i++)
	{
		totalSum+=array[i];
	}
	//cout<<totalSum<<endl;
	for(int i=0;i<6;i++)
	{
		prefix+=array[i];
		suffix=totalSum-prefix;
		if(prefix==suffix)
		{
			return true;
		}
	}
	return false;
	//cout<<"PARTITIONING IS HAPPENING AT INDEX "<<index;	
}
int main()
{
	int array[6]={1,1,1,1,1,1};
	cout<<checkPrefixSuffixSum(array,6);
}
