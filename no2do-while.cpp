#include <iostream>
using namespace std;

int main(){
	int i,a,b;
	i=1;
	b=0;
	cout<<"masukkan angka :";
	cin>>a;
	do
	{
		cout<<i<<",";
		b+=i;
		i++;
		
	}
	while (i<=a);
	cout<<endl;
	cout<<"hasil          :"<<b;
}
