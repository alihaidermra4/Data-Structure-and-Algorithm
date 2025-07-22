#include<iostream>
using namespace std;

int main(){
	int len = 6;
	int A[len]={10,50,20,40,80,7};

	
	int k = 1;
	for (k=1; k<=len-1; k++)
	{
		int ptr = 0;
		while(ptr<len-k)
		{
			cout<<"\nDecresing value of ptr : "<<len-k<<endl;
			if(A[ptr]>A[ptr+1])
			{
				cout<<A[ptr]<<" Swapping "<<A[ptr+1]<<endl;
				int temp;
				temp = A[ptr];
				A[ptr]= A[ptr+1];
				A[ptr+1] = temp;
			}
			else{
				cout<<"Not Swapping\n";
			}
			ptr = ptr+1;
			}	
	}
	cout<<"Sorted Array\n";
	for (k=0; k<len;k++)
	{
		cout<<A[k]<<endl;
	}
}
