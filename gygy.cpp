#include <iostream>
using namespace std;
typedef unsigned long long int ull;


ull max(ull a,ull b)
{
	a=a>b?a:b;
	return a;
}


ull min(ull a,ull b)
{
	a=a<b?a:b;
	return a;
}


ull gcd(ull a,ull b)
{
	ull c;
	do
	{
		c=max(a,b);
		b=min(a,b);
		a=c;
		a=a-b;
	}while(a!=0);
	return b;
}


ull lcm(ull a,ull b)
{
	ull c=gcd(a,b);
	a=a*b/c;
	return a;
}


int main()
{
	ull a,b;
	cout<<"Input two numbers:"<<endl;
	cin>>a>>b;
	while(cin.good()*a*b==0)
	{
		cout<<"Retry."<<endl;
		cin.clear();
		cin.ignore(1000,'\n');
		cin>>a>>b;
	}
	cout<<"You actually input "<<a<<" and "<<b<<'.'<<endl;
	cout<<"The greatest common divisor is "<<gcd(a,b)<<'.'<<endl;
	cout<<"The least common multiple is "<<lcm(a,b)<<'.'<<endl;
	
	return 0;
}
