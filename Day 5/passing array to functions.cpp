// passing array to functions

#include <iostream>
using namespace std;

void fun(int a[])
{
   for(int i=0;i<5;i++)
   cout<<a[i]<<" ";
}

void fun2(int a[7])
{
   for(int i=0;i<5;i++)
   cout<<a[i]<<" ";
   cout<<a[6];
}

void fun3(int *a)
{
   for(int i=0;i<5;i++)
   cout<<a[i]<<" ";
}

void twoD(int a[][3]) // we can write a[3][3] also
{
   int i,j;
   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
      {
         cin>>a[i][j];
      }
   }
   
   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
      {
         cout<<a[i][j]<<" ";
      }
      cout<<endl;
   }
   
}


int main() {
	
	int a[3][3]={0};
	twoD(a);
	return 0;
}
	
	 
	 
	 
	 



