#include<iostream>
using namespace std;
int binarySearch(int arr[],int x,int low, int high)
{
	int mid;
	while(low!=high)
	{
		mid=(low+high)/2;
		if(x==arr[mid])
			return mid;
		else if(x>arr[mid])
			low=mid+1;
		else
			high=mid-1;	
	}
	return 0;
}
int main()
{
	int n,i,num,result;
	cout<<"Number of elements in array\n"; 
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Enter number to be searched"<<endl;
	cin>>num;
	result=binarySearch(a,num,0,n);
	if(result==0)
		cout<<"Element not found.";
	else
		cout<<"Element found at index "<<result;
}