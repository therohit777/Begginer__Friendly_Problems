#include<bits/stdc++.h>
 
using namespace std;

int jos(int n, int k){//TC = O(n)
      if(n==1) return 0;
return (jos(n-1,k)+k)%n;
}
 
int main(){
   int n;
   int k;
   cin>>n>>k;
   cout<<"Position of the survivor is: "<<jos(n,k);
 
return 0;
}