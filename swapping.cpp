#include<iostream>
using namespace std;
int main()
{
	int n,i,minIndex=0,maxIndex=0;
	
	cout<<"Enter the number of elements : ";
	cin >> n;
	
	int arr[n];
	
	cout<<"Enter "<< n <<"numbers: " <<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	 } 
	 
	 for (i=1;i<n;i++)
	 {
	 	if(arr[i]<arr[minIndex])
	 	{
	 		minIndex= i;
		 }
		if(arr[i]>arr[maxIndex])
		{
			maxIndex=i;
		}
	 }
	 
	 int temp=arr[minIndex];
	 arr[minIndex]=arr[maxIndex];
	 arr[maxIndex]=temp;
	 
	 cout<<"Array after swapping smallest and largest numbers: " <<endl;
	 
	 for(i=0;i<n;++i)
	 {
	 	cout<<arr[i]<<" ";
	 }
	 cout <<endl;
	 
	 return 0;
	 
}
