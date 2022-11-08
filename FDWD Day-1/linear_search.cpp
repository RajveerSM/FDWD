#include<iostream>
using namespace std;
int main()
{
	int n,i,num,count;
	cout<<"number of elements in array\n"; //size of array
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Enter number to be searched"<<endl;
	cin>>num;
	for(i=0;i<n;i++){
		if(a[i]==num){
			cout<<a[i]<<" is found at "<<i<<endl;
			count=1;
		}
	}
	if(count!=1)
	{ cout<<num<<" is not found"<<endl; }
}