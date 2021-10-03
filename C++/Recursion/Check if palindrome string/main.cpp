#include<bits/stdc++.h>
 
using namespace std;

bool isPalindrome(string &str, int start, int end){
     if(start>=end)
     return 1;
return ((str[start]==str[end])&&isPalindrome(str,start+1,end-1));
}
 
int main(){
string str;
cin>>str;
int n = str.length();
if(isPalindrome(str,0,n-1))
cout<<"YES";
else
cout<<"NO";
 
return 0;
}