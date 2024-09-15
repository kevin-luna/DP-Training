#include<bits/stdc++.h>
using namespace std;
int a[100001],memo[100001];
int main(){
    int n,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    memo[0]=a[0];
    memo[1]=a[1];
    memo[2]=a[2];
    for(int i=3;i<n;i++){
        memo[i]=min({memo[i-1],memo[i-2],memo[i-3]})+a[i];
    }
    //If we minimize a subset, the complement is maximum
    cout<<sum-memo[n-1]<<"/n";
}