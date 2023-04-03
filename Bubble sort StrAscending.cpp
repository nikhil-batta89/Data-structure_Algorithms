// STRING BUBBLE SORT IN ASCENDING ORDER:-

#include<iostream>
using namespace std;

int main()
{
	int temp,len;
	string a="anisha";
    len=a.length();
	for(int i=0;i<len;i++)
	{
		int flag=0;
		for(int j=0;j<len-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0)
		{
			break;
		}
	}
	for(int i=0;i<len;i++)
	{
		cout<<"The Ascending Number is : "<<a[i]<<endl;
	}
}
