#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
	int matrix[3][3],transpose[3][3];
	
	cout<<"Enter the element of 3*3 matrix"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>matrix[i][j];
		}
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			transpose[i][j]=matrix[i][j];
		}
	}
	
	cout<< "transpose of the matrix is: "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<transpose[i][j]<< " ";
		}
		cout<<endl;
}
	return 0;
}
