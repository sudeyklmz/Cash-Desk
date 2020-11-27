#include <iostream>
using namespace std;
int main()
{
	int x, y;
	int sonuc;
	cout<<"verilen para miktari"<<endl;
	cin>>x;
	cout<<"vermen gereken para miktari"<<endl;
	cin>>y;
if(x>y)
{
	sonuc=x-y;
	cout<<"change= "<<sonuc<<endl;
}
else
{
	cout<<"it is not enough.You should give "<<y-x<<" tl more"<<endl;
}

}
