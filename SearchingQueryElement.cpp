#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	cout<<"how many elements you want in the array? ";
	cin>>n;
	vector <int> v(n);
	cout<<"enter array elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	
	const int N=1e5 +10;
	vector <int> freq(N,0);
	
	for(int i=0;i<n;i++)
	{
		freq[v[i]]++;
	}
	
	int q;
	cout<<"enter queries: ";
	cin>>q;
	
	while(q--)
	{
		int queryElement;
		cout<<"enter query element - ";
		cin>>queryElement;
		cout<<freq[queryElement]<<endl;
		
	}
}
