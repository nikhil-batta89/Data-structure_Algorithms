#include<iostream>
using namespace std;

int main(){
	int n,temp;
	cout<<"Enter the size of array : ";
	cin>>n;
	int arr[n];
	cout<<"Enter any "<<n<<" numbers : "<<endl;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	for(int i=0;i<n;i++){
		if(arr[i]%2==0)
		{
			if(temp==0)
			cout<<"Even numbers are : "<<endl;
			cout<<arr[i]<<" ";
			temp=1;
		}
	}
	if(temp==0)
	cout<<"There are Zero even numbers"<<endl;
	
	return 0;
	
	
}
