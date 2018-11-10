#include<iostream>
using namespace std;

int main()
{
    string ch;
    int flag=0;
    cin >> ch;

for(int i=0;i<ch.size();i++){
    if((ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >= 'A' && ch[i] <= 'Z'))
    {
       flag=1;
    }
     else if(ch[i] >= '0' && ch[i] <= '9')
    {
        flag=0;
    }
    else
    {
        flag=1;
    }
    
}
if(flag==1){cout<<"no";}
else{cout<<"yes";}
    return 0;
}
