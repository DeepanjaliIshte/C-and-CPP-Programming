#include<iostream>
using namespace std;

int main()
{
	int n;
	float sum=0.0,mean;
	cout<<"Enter the number of element : ";
	cin>>n;
	
	float arr[n];
	
	cout << "Enter "<<n<<" number "<<endl;
	for (int i=0;i<n;i++)
	{
		cin>> arr[i];
		sum +=arr[i];
	}
	mean=sum/n;
	
	cout <<"Mean= " <<mean <<endl;
	
	return 0;
}
