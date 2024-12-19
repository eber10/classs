#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n=5;
	int arr[n]={1,2,3,4,5}, x;
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"ingrese el numero que sea eliminar: "; cin>>x;
	for(int i=0; i<n; i++)
	{
		if(arr[i]==x)
		{
			for(int j=i+1; j<n; j++)
			{
				arr[j-1]=arr[j];
			}
			n--;
		}
	}
	cout<<"nueva lista "<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
	
}