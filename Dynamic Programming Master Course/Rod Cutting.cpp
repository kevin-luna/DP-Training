#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll memo[100001];
ll a[100001];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    memo[0]=0;
    memo[1]=a[1];
    for(int i=2;i<=n;i++){
        memo[i]=a[i];
        for(int j=1;j<=i/2;j++){
            memo[i]=max(memo[i],memo[j]+memo[i-j]);
        }
    }
    cout<<memo[n]<<"\n";
}