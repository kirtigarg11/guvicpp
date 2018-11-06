#include<iostream>
using namespace std;
int main(){
int n,res=1;
cin>>n;
for(int i=2;i<=n;i++)
{
res=res*i;
}
cout<<res;
}
