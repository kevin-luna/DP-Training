/*
    You are given a positive integer N. You have to 
    reduce it to one by performing on of the following
    steps:
    1) Reduce it to n-1
    2) If it is divisible by 2, divide it by 2.
    3) If it is divisible by 3, divide it by 3.
    Compute the min steps necessary to reach one.
*/
#include<bits/stdc++.h>
using namespace std;
const int INF = INT_MAX;
int memo[10000];
int main(){
    int n;
    cin>>n;
    memo[1]=0;
    memo[2]=1;
    for(int i=3;i<=n;i++){
        memo[i]=min({memo[i-1],i%2== 0 ? memo[i/2]: INF,i%3 == 0 ? memo[i/3]: INF})+1;
    }
    cout<<memo[n]<<"\n";
}