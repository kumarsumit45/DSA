#include<iostream>
using namespace std;
int main ()
{
	int arr[10];
	int n;
	cout<<"enter the length of array :";
	cin>>n;
	cout<<"Enter the elements of the array :\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"your inserted array elements are :";
    for(int i=0;i<n;i++)
	{
		cout<<" "<<arr[i]<<"\t";
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
		
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
		   }
		}
		
	}
	cout<<"\nYpur array after bubble sort     :";
	for(int i=0;i<n;i++)
	{
		cout<<" "<<arr[i]<<"\t";
	}
	
	
}
