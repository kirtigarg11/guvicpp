#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){ 
int ar[10];
for(int i=0;i<10;i++){cin>>ar[i];}
int min=ar[0];
for(int k=0;k<10;k++){if(ar[k]<min;
min=ar[k];}
cout<<min;
