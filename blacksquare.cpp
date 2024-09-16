#include <bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    string s;
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1')
        count=count+a;
        else if(s[i]=='2')
        count=count+b;
        else if(s[i]=='3')
        count=count+c;
        else count=count+d; 
    }
    cout<<count;
}