#include<iostream>
using namespace std;

int main(){
	int len1, len2, len3, len4;
	cout<<"Enter the length of your first array :\n";
	cout<<"1st Dimension :";
	cin>>len1;
	cout<<"\n2nd Dimension :";
	cin>>len2;
	
	cout<<"Enter the length of your second array :\n";
	cout<<"1st Dimension :";
	cin>>len3;
	cout<<"\n2nd Dimension :";
	cin>>len4;
	
	int a[len1][len2], b[len3][len4];
	
	for(int i=0;i<len1;i++)
	{
		for(int j=0;j<len2;j++)
		{
			cout<<"\nEnter the element at index "<<i<<" "<<j<<" of first array :";
			cin>>a[i][j];
		}
	}
		int c[len1][len4];
		for(int i=0;i<len3;i++)
	{
		for(int j=0;j<len4;j++)
		{
			cout<<"\nEnter the element at index "<<i<<" "<<j<<" of second array :";
			cin>>b[i][j];
		}
	}
	
	if(len2==len3)
	{
		cout<<"\nStandard multiplication is possible";
	for(int i =0; i<len1;i++)
		{
			for(int j=0;j<len4; j++)
			{
				c[i][j]=0;
			}
		}
		for(int i =0; i<len1;i++)
		{
			for(int j=0;j<len4; j++)
			{
				for(int k=0; k<len4; k++)
				{
					c[i][j] += a[i][k] * b[k][j];
				}
			}
		}
	}
	else
	{
		cout<<"\nNot possible";
	}
	
	for(int i =0; i<len1;i++)
		{
			for(int j=0;j<len4; j++)
			{
				cout<<"\nThe element at index "<<i<<" "<<j<<" of resulting array :"<<c[i][j];
			}
		}
	
}
