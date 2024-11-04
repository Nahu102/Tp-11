#include <iostream>
using namespace std;
int main()
{
	int num_total=0;
	int num[4];
	
	for(int i=0;i!=4;i++)
	{
		cout<<"ingrese el valor del vector "<<i+1<<": ";
		cin>>num[i];
		num_total+=num[i];
	}
		
	cout<<num_total<<endl;
	return 0;
}
