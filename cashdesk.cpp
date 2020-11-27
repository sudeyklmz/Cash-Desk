#include <iostream>
using namespace std;
int main()
{
	int x, y;
	int sonuc;
	cout<<"given money"<<endl;
	cin>>x;
	cout<<"the money which should be given"<<endl;
	cin>>y;
if(x>y)
{
	sonuc=x-y;
	cout<<"change= "<<sonuc<<endl;
}
else
{
	cout<<"it is not enough.You should give "<<y-x<<" euro more"<<endl;
}

}
