#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll a, b;
int main(){
    cin>>a>>b;
    double x=(0-b)/a;

    if(a==0){
        if(b==0){
            cout<<"VO SO NGHIEM";
        }
        else{
            cout<<"VO NGHIEM";
        }
    }
    else{
        cout<<fixed<<setprecision(3)<<x;
    }
}