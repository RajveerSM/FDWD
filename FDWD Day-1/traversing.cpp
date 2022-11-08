#include <iostream>
using namespace std;
int main() {
	int n;
	cout<<"Number of elements in array\n";
	cin>>n;
	int a[n];
	cout<<"Enter elements\n";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Traversing array\n"<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}