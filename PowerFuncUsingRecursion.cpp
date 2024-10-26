#include<iostream>
using namespace std;

int power(int n,int pow)
{
	if(pow==0)
	{
		return 1;
	}
	else
	{
		return n* power(n,pow-1);
	}
	
}

double myPow(double x, int n) 
{
        if (n == 0) {
            return 1.0;
        }

        double result = myPow(x, n / 2);
        
        // If n is even
        if (n % 2 == 0) {
            return result * result;
        } else {
            // If n is odd
            if (n > 0) {
                return x * result * result;
            } else {
                return (1 / x) * result * result;
            }
        }
    }

int main()
{
	int n;
	cin>>n;
	int pow;
	cin>>pow;
	int powe=power(n,pow);
	cout<<powe;
	
	double p;
	cin>>p;
	cout<<myPow(p,pow);
}
