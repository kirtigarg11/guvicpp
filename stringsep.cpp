#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main(){ 
int n;
cin>>n;
string s;
stringstream ss;
ss<< n;
s=ss.str();
int si=s.size();
si=si-1;
for(int i=si;i>=0;i--){
    cout<<s[i]<<" ";
}
}
