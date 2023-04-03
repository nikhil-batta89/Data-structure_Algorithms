#include<iostream>
using namespace std;

int main(){
	int n, arr[n], ani[n]; // arr[n]=> input array ,ani[n]=> output array
	cout<<"Enter the size of array : ";
	cin>>n;
	cout<<"Enter any "<<n<<" numbers : "<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}	
	// Copy numbers from inputArray to outputArray in reverse order
	for(int i=0;i<n;i++){
		ani[i]=arr[n-i-1];	
	}
	cout<<"Reversed array"<<endl;
	for(int i=0;i<n;i++){
		cout<<ani[i]<<" ";
	}
	return 0;
}
