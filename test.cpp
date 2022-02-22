#include <bits/stdc++.h>
using namespace std;

bool solve(int x){
    if(x<0)return false;
    if(x>=0&&x<10)return true;
    int sum=0;
    while(sum<x){
        sum=sum*10+x%10;
        x=x/10;
    }
    cout<<x<<' '<<sum<<endl;
   if(sum==x||sum/10==x)return true;
   return false;
}

int main(){
    int x;
    cin>>x;
    cout<<solve(x)<<endl;
}