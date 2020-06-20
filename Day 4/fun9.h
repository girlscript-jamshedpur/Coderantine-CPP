
// function to calculate factorial of a number

#include<iostream>

using namespace std;

int fact(int num) 
{
         if(num==1) 
        {
              return 1;
        }
        else 
        {
             return num * fact(num-1);
        }
}

int main() 
{
       int n;

       //Enter n
       cin>>n;
	   
	   cout<<fact(n);
       
      

       return 0;
}