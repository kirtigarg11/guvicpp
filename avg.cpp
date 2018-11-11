#include <iostream>

using namespace std;

int main(){
int a;
cin>>a;
int ar[a],sum=0;
for(int i=0;i<a;i++){
cin>>ar[i];
sum=sum+ar[i];


  }
sum=sum/a;
cout<<sum;
}
