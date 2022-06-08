#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
   for(int i=n;i>=1;i--)
   {
       fact=fact*i;
   }
   return fact;
}

int main(){
int n;
cout<<"Enter number ";
cin>>n;

int fact = factorial(n);
cout<<fact;
return 0;
}