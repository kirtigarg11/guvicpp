#include<iostream>
#include<sstream>
#include<cstring>
using namespace std;
int main(){
string st;
int count=0;
getline(cin,st);
for(int i=0;i<st.size();i++){
if(st[i]==' ' && i+1!=st.size() && st[i+1]!=' '){
count++;
}}
cout<<count+1;

}
