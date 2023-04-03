// INSERTION SORT IN DESCENDING ORDER:-

#include<iostream>
using namespace std;

int main()
{
	int temp,j;
	int a[]={5,1,6,2,4,3};
	int len=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<len;i++)
	{
		temp=a[i];
		j=i;
		while((j>0)&&(a[j-1])<temp)
		{
			a[j]=a[j-1];
			j=j-1;
		}
		a[j]=temp;
	}
	for(int i=0;i<len;i++)
	{
		cout<<"The descending order of insertion sorting is : "<<a[i]<<endl;
	}
}
