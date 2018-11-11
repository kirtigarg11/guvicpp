#include <iostream>
#include<sstream>
#include<cstring>
using namespace std;

int main(){
  int n;
cin>>n;
string s;
stringstream ss;
ss<<n;
s=ss.str();
cout<<s.size();
}
