#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main(){
string s = "22736739";

sort(s.begin(),s.end(),greater<int>());

cout<<s;
return 0;
}