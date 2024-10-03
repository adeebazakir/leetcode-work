#include<iostream>
using namespace std;

int main()
{
	int a[5]={1,2,3,4,5};
	cout<<"ORIGINAL ARRAY"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	for(int i=1;i<5;i++)
	{
		a[i]=a[i]+a[i-1];
	}
	cout<<"PREFIX SUM ARRAY"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
}
