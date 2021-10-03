#include<bits/stdc++.h>
 
using namespace std;

void generateAllPermutations(string &str, int index){
      if(index==str.length()-1){
            cout<<str<<" ";
            return;
      }
      for(int j=index; j<str.length(); j++){
            swap(str[index],str[j]);
            generateAllPermutations(str, index+1);
            swap(str[index],str[j]);
      }
}
 
int main(){
string s;
cin>>s;
generateAllPermutations(s,0);
 
return 0;
}