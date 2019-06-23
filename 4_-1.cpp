#include<iostream>
using namespace std;
int product(int n,int x)
{
	if(x==0)
	return 0;
	return n+product(n,x-1);
}
int main()
{
	int n,x;
	cin>>n>>x;
	int z=product(n,x);
	cout<<z;
}
