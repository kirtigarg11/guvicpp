#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a=1,ar[n];
ar[0]=0;
ar[1]=1;
for(int i=2;i<=n;i++){
  ar[i]=ar[i-1]+ar[i-2];


}
for(int j=1;j<=n;j++){
  cout<<ar[j]<<" ";
}
}
