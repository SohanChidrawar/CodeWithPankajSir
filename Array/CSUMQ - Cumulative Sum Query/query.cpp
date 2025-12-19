#include <iostream>

using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int *arr = new int[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int *prefix = new int[n];
	int q;
	cin>>q;
	for(int i=0;i<n;i++)
	{
		if(i==0)
			prefix[i]=arr[i];
		else
			prefix[i]=prefix[i-1]+arr[i];
	}
	while(q--)
	{
		int a,b;
		cin>>a>>b;
		int sum;
		sum = prefix[b];
		if((a-1)>=0)
			sum -= prefix[a-1];
		cout<<sum<<endl;
	}
	
	return 0;
}
