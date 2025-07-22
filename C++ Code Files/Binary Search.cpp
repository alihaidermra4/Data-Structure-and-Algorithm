#include<iostream>
using namespace std;
int main()
{
	int len = 9;
	int Beg =0;
	int End = len-1;
	int Mid = (Beg+End)/2;
	int A[len] = {10,20,30,40,50,60,70,80,90};
	
	int item = 30;
	
	while(Beg<=End && Mid != item)
	{
		if(A[Mid]>item)
		{
			cout<<"\nMid is greater than item";
			End = Mid-1;
			Mid = (End+Beg)/2;
		}
		else if (A[Mid]<item)
		{
			cout<<"\nMid is smaller than item";
			Beg = Mid+1;
			Mid = (End+Beg)/2;
		}
		else
		{
			break;
		}
	}
	
	if (A[Mid] == item)
	{
		cout<<"\nfound the item at index : "<<Mid;
	}
	else
	{
		cout<<"\nThe item is not found in the array";
	}
}
