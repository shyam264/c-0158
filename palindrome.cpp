#include <iostream>  
#include<string>
using namespace std;  
int main()  
{  
  int n,r,sum=0,temp;    
  cout<<"Enter the string=";    
  cin>>n;    
 temp=n;    
 while(n>0)    
{    
 r=n%10;    
 sum=(sum*10)+r;    
 n=n/10;    
}    
if(temp==sum)    
cout<<" is Palindrome.";    
else    
cout<<" is not Palindrome.";   
  return 0;  
}  