
#include<iostream>
using namespace std;
int main()
{
		int num, i, fact=1;
		cin>>num;
	for(i=num; i>0; i--)
	{
		fact=fact*i;
	}
	cout<<"Factorial of "<<num<<" is "<<fact;
return 0;
}
