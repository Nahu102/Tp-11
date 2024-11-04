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
	
	cout<<"\nla suma de los vectores es: "<<num_total<<"\nel promedio es: "<<num_total/4<<endl;
	
	return 0;
}
