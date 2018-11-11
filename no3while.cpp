#include <iostream>
using namespace std;

int main(){
	float i,a,b,r;
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
	cout<<"hasil          :"<<b<<endl;
	r=b/a;
	cout<<"rata-rata      :"<<r;
}
