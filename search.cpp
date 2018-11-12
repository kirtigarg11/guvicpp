#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){ 
int n,k,flag=0;
cin>>n>>k;
int ar[n];
for(int k=0;k<n;k++){cin>>ar[k];}
for(int i=0;i<n;i++){
if(ar[i]==k){
flag=1;
break;
}
}
if(flag==1){cout<<"yes";}
else{cout<<"no";}
}
