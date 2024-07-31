#include<iostream>
using namespace std;
int main()
{
	int n,i,m,sum=0;
	cout<<"enter the num";
	cin>>n;
	m=n/2;
	for (i=1;i<=m;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	if (sum==n&&n !=0)
	{
		cout<<"perfect num:";
		
	}
	else
	{
		cout<<"not perfect num";
	}
	return 0;
}