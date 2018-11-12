#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){ 
string s;
int count =0;

getline(cin,s);

for(int i=0;i<s.size();i++){
if(s[i]>='0' && s[i]<='1'){count++;}
}
if(count==s.size()){cout<<"yes";}
else{cout<<"no";}

}
