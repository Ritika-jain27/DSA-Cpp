#include<iostream>
using namespace std;

void towerofHanaoi(int n,char src,char dest,char helper){

    if(n==0)
    {
        return;  //base case
    }
    towerofHanaoi(n-1,src,helper,dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    towerofHanaoi(n-1,helper,dest,src);
}
int main(){

    towerofHanaoi(3,'A','C','B');

return 0;
}