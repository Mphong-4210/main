#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll a, b, c;

int main(){
    cin>>a>>b>>c;
    if(a==b && c==a){
        cout<<"DEU";
        return 0;
    }
    else if(a*a+b*b==c*c||b*b+c*c==a*a||c*c+a*a==b*b){
        if(a==b||b==c||c==a){
            cout<<"VUONG CAN";
            return 0;
        }
        else{
            cout<<"VUONG THUONG";
            return 0;
        }
    }
    else if(a==b||b==c||c==a){
        cout<<"CAN THUONG";
        return 0;
    }
    else if(a+b>c&&c+b>a&&c+a>b){
        cout<<"THUONG";
        return 0;
    }
    else{
        cout<<"KHONG PHAI TAM GIAC";
        return 0;
    }
}
