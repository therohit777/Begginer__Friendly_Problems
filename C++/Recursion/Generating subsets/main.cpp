#include<bits/stdc++.h>
 
using namespace std;
  
void generateSubsets(string &str, string curr, int index){//TC = O(2^n) , SC = O(n)
      if(index==str.length()){
          cout<<str<<" ";
          return;
      }
 generateSubsets(str,curr,index+1);
 generateSubsets(str,curr+str[index],index+1);
}

int main(){
string s;
cin>>s;
generateSubsets(s,"",0);
 
return 0;
}

