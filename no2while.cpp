#include <iostream>
using namespace std;

int main(){
	int i,a,b;
	i=1;
	b=0;
	cout<<"masukkan angka :";
	cin>>a;
	while (i<=a)
	{
		cout<<i<<",";
		b+=i;
		i++;
		
	}
	cout<<endl;
	cout<<"hasil          :"<<b;
}
