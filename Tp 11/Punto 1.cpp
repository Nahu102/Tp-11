#include <iostream>
using namespace std;
int main()
{
	int num_total=0;
	int num[4] = { 3,5,6,2 };
	for(int i=0;i!=4;i++)
	{
		num_total+=num[i];
	}	
	cout<<num_total<<endl;
	return 0;
}
