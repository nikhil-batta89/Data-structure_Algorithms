// STRING INSERTION SORT IN ASCENDING ORDER:-

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
		while((j>0)&&(a[j-1])>temp)
		{
			a[j]=a[j-1];
			j=j-1;
		}
		a[j]=temp;
	}
	for(int i=0;i<len;i++)
	{
		cout<<"The Ascending order of insertion sorting string is : "<<a[i]<<endl;
	}
}
