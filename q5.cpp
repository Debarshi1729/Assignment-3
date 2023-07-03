#include<iostream>
using namespace std;
int main()
{
	float n1,n2;
	char c;
	cout<<"Enter an operator(+,-,*,/):";
	cin>>c;
	cout<<"Enter two numbers:";
	cin>>n1>>n2;
	switch(c){
		case '+':
		   {	
		   cout<<n1<<"+"<<n2<<"="<<n1+n2;
		   break;}
		case '-':
			{
			cout<<n1<<"-"<<n2<<"="<<n1-n2;
			break;}
		case '*':
			{
			cout<<n1<<"+"<<n2<<"="<<n1+n2;
			break;}
		case '/':
			{
			cout<<n1<<"/"<<n2<<"="<<n1/n2;
			break;}
		default:
			cout<<"wrong input";}
		return 0;
			
}
