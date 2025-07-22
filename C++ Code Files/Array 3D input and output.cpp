#include<iostream>
using namespace std;

int main(){
	
	int size=1;
	int size1 = 2;
	int A[size][size1][size];
	
	for (int i=0;i<size;++i)
	{
		for (int j=0;j<size1;++j)
		{
			for (int k=0;k<size;++k)
			{
				cout<<"\nEnter a number at index "<<i<<" "<<j<<" "<<k<<" :\n";
				cin>>A[i][j][k];
			}
		}
	}
	
	
	for (int i=0;i<size;++i)
	{
		for (int j=0;j<size1;++j)
		{
					for (int k=0;k<size;++k)
			{
				cout<<"\nYour number at index "<<i<<" "<<j<<" "<<k<<" :\n";
				cout<<A[i][j][k];
			}
		}
	}

}
	
	
