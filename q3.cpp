#include<iostream>
using namespace std;
int main()
{
	int cp,sp;
	cin>>cp>>sp;
	if(cp>sp)
	 cout<<"Profit="<<cp-sp;
	else
	 cout<<"Loss="<<sp-cp;
	return 0;
}
