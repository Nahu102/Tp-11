#include <iostream>
using namespace std;
int main()
{
	int num[4]= {3,5,4,9};
	int num_total=0;
	for(int i=0;i!=4;i++)
	{
		num_total+=num[i];
	}
	cout<<num_total/4;
}
