#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int ar[n];
for(int i=0;i<n;i++){
cin>>ar[i];

}
int max;
max=ar[0];
for(int j=0;j<n;j++){
if(ar[j]<max){
max=ar[j];
}
cout<<max;
}

