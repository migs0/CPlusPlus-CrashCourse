#include<iostream>

using namespace std;

void arr(int val[][4], int rows, int cols)
{
	for(int i=0;i<rows;i++)
	{
		cout<<"\n";
		for(int j=0;j<cols;j++)
		{
			cout<<*((val+i)+j)<<" ";
		}
	}
}

int main()
{
	const int a = 5;
	const int b = 4;
	int vals[a][b] =
	{
		{10,11,12,13}
		{14,15,16,17}
		{18,19,20,21}
		{22,23,24,25}
		{26,27,28,29}
	};

	//arr(vals,a,b);
	return 0;
}
						