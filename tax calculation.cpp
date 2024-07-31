#include<iostream>
using namespace std;
int main()
{
	double totalsales=95000;
	cout<<"total sales:$"<<totalsales<<endl;
	const double statetaxrate = .04;
    double statetax = totalsales * statetaxrate;
	cout<<"state tax:$"<<statetax<<endl; 
	return 0;
}