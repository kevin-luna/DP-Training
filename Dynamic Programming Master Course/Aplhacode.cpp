#include<bits/stdc++.h>
using namespace std;
long memo[5001];
bool is_valid(string &number,int i){
    return (number[i]=='2' && number[i+1]<'7') || (number[i]=='1');
}
int main(){
    int t;
    while (t--)
    {
        string s;
        cin>>s;
        long len = s.size();
        if(s=="0")break;
        memo[len-1]=1;
        for(int i=len-3;i>=0;i--){
            memo[i]+= memo[i+1];
            memo[i]+= is_valid(s,i) ? memo[i+2]:0;
        }
        cout<<memo[0]<<"\n";
    }
    
}