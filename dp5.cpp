#include<bits/stdc++.h>
using namespace std;
const int nm=1e3+2;
int i,j;
string a,b,c[nm][nm],s;
string timmax(string x,string y)
{
    while(x.size()<y.size()) x='0'+x;
    while(x.size()>y.size()) y='0'+y;
    if(x>y) return x;
    else return y;
}
void taobang()
{
    a='0'+a;
    b='0'+b;
    c[0][0]="0";
    for(i=1;i<a.size();i++)
        for(j=1;j<b.size();j++)
            if(a[i]==b[j])
                c[i][j]=c[i-1][j-1]+a[i];
            else
                c[i][j]=timmax(c[i-1][j],c[i][j-1]);
    s=c[a.size()-1][b.size()-1];
}
int main()
{
    freopen("NUMBER.INP","r",stdin);
    freopen("NUMBER.OUT","w",stdout);
    cin>>a>>b;
    taobang();
    while(s[0]=='0'&&s.size()>1) s.erase(0,1);
    cout<<s;
    return 0;
}
