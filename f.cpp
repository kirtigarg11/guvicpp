#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){ 
string s;
int a=0,b=0;
getline(cin,s);
for(int i=0;i<s.size();i++){
if(s[i]>='a' && s[i]<='z'){a=a+1;}
if(s[i]>='A' && s[i]<='Z'){a=a+1;}
if(s[i]>='0' && s[i]<='9'){b=b+1;}

}
if(a>0&&b>0){cout<<"Yes";}
else{cout<<"No";}
}
