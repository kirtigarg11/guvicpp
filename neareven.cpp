#include<iostream>
using namespace std;
int main(){ 
int n;
cin>>n;
if(n%2==0){cout<<n;}
else if((n-1)%2==0){cout<<n-1;}
else if((n+1)%2==0){cout<<n+1;}
}
