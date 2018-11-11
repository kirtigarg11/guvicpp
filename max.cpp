#include<iostream>
using namespace std;
int main(){
int ar[10];
int max=0;
for(int i=0;i<10;i++){
cin>>ar[i];
if(ar[i]>max){
max=ar[i];
}
}
cout<<max;

}
