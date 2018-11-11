#include <iostream>
using namespace std;

int main(){
	float i,a,b,r;
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
	cout<<"hasil          :"<<b<<endl;
	r=b/a;
	cout<<"rata-rata      :"<<r;
}
