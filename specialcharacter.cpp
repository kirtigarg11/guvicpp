#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main(){
string st;
int count=0;
getline(cin,st);
for(int i=0;i<st.size();i++){
if(st[i]>='a' &&st[i]<='z'){}
else if(st[i]>='A' && st[i]<='Z'){}
else if(st[i]==' '){}
else if(st[i]>='0'&& st[i]<='9'){}
else{count++;}
}
cout<<count;
}
