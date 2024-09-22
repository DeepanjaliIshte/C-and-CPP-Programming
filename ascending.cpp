#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int array[]={2,6,3,5,9};
	int n =sizeof(array)/sizeof(array[0]);
	
	sort(array,array+n);
	
	cout<<"Array in ascending order: ";
	for(int i=0;i<n;i++)
	{
		cout<<array[i]<<" ";
	}
	return 0;
}
