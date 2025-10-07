#include<bits/stdc++.h>
using namespace std;
int main(){
    float a,b,c;
    cin>>a>>b>>c;
    double delta=pow(b,2)-4*a*c;
    float x1=(-b+sqrt(delta))/2*a;
    float x2=(-b-sqrt(delta))/2*a;
    if(a==b&&b==c&&a==0){
        cout<<"VO SO NGHIEM";
        return 0;
    }
    if(a==b&&a==0&&c!=0){
        cout<<"VO NGHIEM";
        return 0;
    }

    if(delta<0)
        cout<<"VO NGHIEM";
    if(delta==0){
        cout<<fixed<<setprecision(3);
        cout<<-b/2*a;
    }

    if(delta>0){
        if(x1>x2){
            cout<<fixed<<setprecision(3);
            cout<<x2<<" "<<x1;
        }
        else{
            cout<<fixed<<setprecision(3);
            cout<<x1<<" "<<x2;
        }
    }


return 0;
}
