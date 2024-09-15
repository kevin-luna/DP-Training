/*
 * Triple Step: A child is running up a staircase with n steps and can hop either 1 step, 2 steps,
 * or 3 at time. Implement a method to count how many possible ways can run up the stairs.
 */

 #include<bits/stdc++.h>
 using namespace std;
 typedef long long int ll;

 ll steps[100000];

 ll countSteps(ll n){
	for(int s=4;s<=n;s++){
		steps[s]=steps[s-1]+steps[s-2]+steps[s-3];
	}
	return steps[n];
 }
 int main(){
	 int n;
     steps[0]=0;
	 steps[1]=1;
	 steps[2]=1;
	 steps[3]=2;
	 cin>>n;
	 cout<<countSteps(n)<<"\n";
 }
