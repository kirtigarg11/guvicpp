#include <iostream>

using namespace std;

int main(){
int a;
cin>>a;
int ar[a],min=0,max=0;
for(int i=0;i<a;i++){
cin>>ar[i];
}
min=ar[0];

for(int k=0;k<a;k++){
if(ar[k]<min){min=ar[k];}
if(ar[k]>max){max=ar[k];}

}
cout<<min<<" "<<max;
  }
