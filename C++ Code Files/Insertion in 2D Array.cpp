#include<iostream>
using namespace std;

int main( )
{
int len1, len2;
cout<<"Enter size of array of 1st dim (max. 10) : ";
cin>>len1;

cout<<"\nEnter size of array of 2nd dim (max. 10) : ";
cin>>len2;

int A[10][10],num1,num2,i,pos;
for(int m = 0; m<=len1-1 ; m++)
	{
		for(int n=0; n<=len2-1; n++)
		{
			cout<<"\nEnter element at index "<<m<<" "<<n<<" = ";
			cin>>A[m][n];	
		}
	}
	
for(int m = 0; m<=len1-1 ; m++)
	{
		for(int n=0; n<=len2-1; n++)
		{
			cout<<"\nOriginal element at index "<<m<<" "<<n<<" = "<<A[m][n];	
		}
	}
for (int z =0; z<=len2-1; z++)
{
	int num, pos;
	cout<<"\nEnter the number you want to insert : "	;
	cin>>num;
	cout<<"\nEnter the positin where the number should be inserted :";
	cin>>pos;
	
	pos--;
	
	for (i=len1-1; i>=pos; i--)
	{
		A[i+1][z] = A[i][z];
	}
	
	A[z][pos] = num;
	
	if (pos>len1-1)
	{
		cout<<"Inserted outside the array";
	}
}
	
	len1++;
	for(int m = 0; m<len1 ; m++)
	{
		for(int n=0; n<len2; n++)
		{
			cout<<"\nElement at index "<<m<<" "<<n<<" = "<<A[m][n];	
		}
	}
}
