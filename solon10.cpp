#include<bits/stdc++.h>
using namespace std;
bool ss(string a,string b){
    if(a.size()!=b.size())
        return a.size()>b.size();
    return a>=b;
}
string tru(string a,string b){
    string s="";
    int i=a.size()-1,j=b.size()-1,nho=0;
    while(i>=0){
        int x=a[i]-'0'-nho;
        if(j>=0)
            x-=b[j]-'0';
        if(x<0){
            x+=10;
            nho=1;
        }
        else
            nho=0;
        s+=char(x+'0');
        i--;
        j--;
    }
    while(s.size()>1&&s.back()=='0')
        s.pop_back();
    reverse(s.begin(),s.end());
    return s;
}
string cong(string a,string b){
    string s="";
    int i=a.size()-1,j=b.size()-1,nho=0;
    while(i>=0||j>=0||nho>0){
        int x=nho;
        if(i>=0)
            x+=a[i--]-'0';
        if(j>=0)
            x+=b[j--]-'0';
        s+=char(x%10+'0');
        nho=x/10;
    }
    reverse(s.begin(),s.end());
    return s;
}
int main(){
    string n;
    cin>>n;
    vector<string>f;
    f.push_back("1");
    f.push_back("2");
    while(1){
        string x=cong(f[f.size()-1],f[f.size()-2]);
        if(ss(x,n))
            break;
        f.push_back(x);
    }
    vector<string>a;
    for(int i=f.size()-1;i>=0;i--){
        if(ss(n,f[i])){
            n=tru(n,f[i]);
            a.push_back(f[i]);
        }
    }
    for(int i=a.size()-1;i>=0;i--){
        cout<<a[i]<<" ";
    }
    return 0;
}
