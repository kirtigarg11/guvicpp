#include<iostream>
using namespace std;
int main(){ 
int n,l=0,sum=0;
cin>>n;
int r,i=0;
while(n!=0){
r=n%10;
sum=sum+r;

n=n/10;

}
cout<<sum;
}
