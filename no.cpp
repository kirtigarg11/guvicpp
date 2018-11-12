#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){ 
int k;
cin>>k;
string s;
stringstream ss;
ss<<k;
s=ss.str();
cout<<s.size();
}
