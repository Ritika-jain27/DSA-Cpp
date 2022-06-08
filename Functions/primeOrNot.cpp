#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int num)
{
    for(int j=2;j<=sqrt(num);j++)
    {
        if(num%j==0){
           return false;
        }
    }
    return true;
}

int main()
{
int a,b;
cout<<"enter numbers";
cin>>a>>b;

for(int i=a;i<=b;i++)
{
     if(isPrime(i)){
         cout<<i<<" ";
     }
}
return 0;
}