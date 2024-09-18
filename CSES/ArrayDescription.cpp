#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 1000000000+7;
ll a[100001];
ll comb[100005][105];
void sum(ll &a,ll b){
    a+=b;
    if(a>MOD)a-=MOD;
}
int main(){
    ll n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
        
    }
    for(int i = 0;i<n;i++){//Iterates over i index
        for(int j=1;j<=m;j++){//Iterates over possibilities
            if(i==0){
                if(a[i]==0)comb[0][j]=1;
                else comb[0][a[0]]=1;
            }else{
                if(j==1){
                    sum(comb[i][j],comb[i-1][1]);
                    sum(comb[i][j],comb[i-1][2]);
                }
                else if(j==m){
                    sum(comb[i][j],comb[i-1][m-1]);
                    sum(comb[i][j],comb[i-1][m]);
                }else{
                    sum(comb[i][j],comb[i-1][j-1]);
                    sum(comb[i][j],comb[i-1][j]);
                    sum(comb[i][j],comb[i-1][j+1]);
                }

                if(a[i]!=0 && j!=a[i]){
                    comb[i][j]=0;
                }
            }
        }
        
    }

    ll ans = 0;
    for(int i=1;i<=m;i++){
        sum(ans,comb[n-1][i]);
    }
    cout<<ans<<"\n";
}
