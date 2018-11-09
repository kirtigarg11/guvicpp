#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int ar[n];
for(int i=0;i<n;i++){
cin>>ar[i];

}
int i,key,j;
for(i=1;i<n;i++){
j=i-1;
key=ar[i];
while(j>=0 && ar[j]>key){
ar[j+1]=ar[j];
j=j-1;
}
ar[j+1]=key;
}
for(i=0;i<n;i++){
    cout<<ar[i]<<" ";
}

}

