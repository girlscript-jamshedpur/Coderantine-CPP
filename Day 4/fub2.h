// function example : a mini calculator to do operation on 2 numbers.

#include <iostream>
using namespace std;

void add(int x, int y)
{
    cout<<x+y<<endl;
}

void sub(int x, int y)
{
    cout<<x-y<<endl;
}

void mul(int x, int y)
{
    cout<<x*y<<endl;
}

void divide(int x, int y)
{
    cout<<x/y<<endl;
}


int main() {
	int x,y;
	cin>>x>>y;
	char c;
	cin>>c;
	if(c=='+') add(x,y);
	else if(c=='-') sub(x,y);
	else if(c=='*') mul(x,y);
	else if(c=='/') divide(x,y);
	else cout<<"This operation is not possible"<<endl;
	
	return 0;
}


