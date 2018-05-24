#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int *a=NULL;
	int n,i,t,k;
	cin>>n;
	a=new int[n];
	for(i=0;i<=n;i++)
	{
		cin>>a[i];

	}  
	for(i=0;i<n;i++)
	{
		t=a[i];
		if(t<=a[i+1])
		{
			t=a[i+1];  
		}
	}
		cout<<t;
		return 0;
	
		}
		

	
	
