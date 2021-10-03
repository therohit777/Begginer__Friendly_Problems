#include<bits/stdc++.h>
 
using namespace std;

int subsetSum(vector<int>&v, int n, int sum){
      if(n==0)
      return (sum==0)? 1:0;
return subsetSum(v,n-1,sum)+subsetSum(v,n-1,sum-v[n-1]);
}
 
int main(){
    vector<int> v;
    int n; cin>>n;
    for(int i=0; i<n; i++){
          int x; cin>>x;
          v.push_back(x);
    }
    int sum; cin>>sum;
    cout<<"The no. of subsets having sum "<<sum<<" is: "<<subsetSum(v,n,sum);
 
return 0;
}