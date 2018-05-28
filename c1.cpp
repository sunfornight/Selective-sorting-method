#include<iostream>
using namespace std;
const int n=6;
void selection(int *,int);
void main()
{
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	selection(a,n);
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
void selection(int *a,int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]>a[i])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}


