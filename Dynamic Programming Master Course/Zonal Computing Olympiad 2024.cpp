#include<bits/stdc++.h>
using namespace std;
int a[100001],memo[100001];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    memo[0]=a[0];
    memo[1]=a[1];
    memo[2]=a[2];
    for(int i=3;i<n;i++){
        //This works because in the base cases we assure
        //we are not taking 3 consecutive elements
        //so we can pickup any of 3 previous states
        memo[i]=min({memo[i-1],memo[i-2],memo[i-3]})+a[i];
    }
    cout<<memo[n-1]<<"/n";
}