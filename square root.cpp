#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,result;
	cout<<"enter the num:";
	cin>>n;
	if (n>=0)
	{
		result=cbrt(n);
		cout<<"the cbrt of num:"<< n << " is " << result;
	}
	else{
		cout<<"error: cant not find";
	
}
return 0;
}