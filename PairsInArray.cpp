#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int x;
	cout<<"enter the sum:";
	cin>>x;
	for(int num=0;num<10;num++)
	{
		for(int i=1;i<10;i++)
		{
			if(arr[num]+arr[i]==x)
			{
				cout<<arr[num]<<","<<arr[i]<<" is a pair which gave "<<x;
				cout<<endl;
			}
		}
	}
	cout<<"triplets whose sum is equal to "<<x<<endl;
	for(int num=0;num<10;num++)
	{
		for(int secnum=num+1;secnum<10;secnum++)
		{
			for(int thirdnum=secnum+1;thirdnum<10;thirdnum++)
			{
				if(arr[num]+arr[secnum]+arr[thirdnum]==x)
				{
					cout<<arr[num]<<","<<arr[secnum]<<","<<arr[thirdnum]<<" is a triplet which gave "<<x;
				    cout<<endl;
				}
			}
		}
	}
	
}
