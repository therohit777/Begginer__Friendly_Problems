#include<bits/stdc++.h>
 
using namespace std;

void TOH(int n, char S, char A, char D){
      if(n==1)
      cout<<"Move disc "<<n<<" from "<<S<<" to "<<D<<endl;
      else{
            TOH(n-1,S,D,A);
            cout<<"Move disc "<<n<<" from "<<S<<" to "<<D<<endl;
            TOH(n-1,A,S,D);
      }
}
 
int main(){
   int n;
   cin>>n;
   TOH(n,'A','B','C');
 
return 0;
}