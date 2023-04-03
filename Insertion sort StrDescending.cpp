// STRING INSERTION SORT IN DESCENDING ORDER:-

#include<iostream>
using namespace std;

int main()
{
	int temp,j,len;
	string a="ishajain";
	len=a.length();
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
