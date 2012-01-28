#include <iostream>
#include <vector>
using namespace std;

void giveLargest(vector<int> n)
{
	int x;
	x=n[0];
	for(int i=1;i<n.size();i++)
	{
		if(x<n[i])
		{
			x=n[i];
			cout<<"The max value is: "<<x<<endl<<endl;
		}
	}
}

void giveSmallest(vector<int> n)
{
	int x;
	x=n[0];
	for(int i=1;i<n.size();i++)
	{
		if(x>n[i])
		{
			x=n[i];
			cout<<"The min value is: "<<x<<endl<<endl;
		}
	}
}

void getAve(vector<int> n)
{
	int total = 0;
	int ave;
	
	for(int i=0;i<n.size();i++)
	{
		total = total + n[i];
	}

	ave = total / n.size();
	cout<<"The average is: "<<ave<<endl<<endl;
}

int main()
{
	vector<int> nums;
	nums={136,155,164,183,192};
	giveLargest(nums);
	giveSmallest(nums);
	getAve(nums);
}