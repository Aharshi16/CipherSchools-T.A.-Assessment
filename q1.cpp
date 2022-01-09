#include<bits/stdc++.h>
using namespace std;
int findMissingValue(int a[],int n)
{
	int sum = (n*(n+1))/2;
	int total;
	for (int i=0;i<n;i++)
	{
		total+=a[i];
	}
	return (sum-total);
}
int main()
{
	int i;
	int a[] = {3,0,1};
	int n = sizeof(a)/sizeof(a[0]);
	int missedValue = findMissingValue(a,n);
	cout<<"the missed value is:\t"<<missedValue;
	return 0;
}

