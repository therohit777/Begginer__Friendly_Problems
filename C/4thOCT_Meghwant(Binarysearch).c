
//Binary search .................Iterative method best for sorted array

# include<bits/stdc++.h>
using namespace std; //std::cout or std::cin

int main(){
  int n,t;
  cout<<"enter test cases"<<endl;
  cin>>t;
                               //cout<<(sizeof(arr)/sizeof(arr[0]));   sizeof(arr) = datatype of arr * number of variable
  while(t--){
        cout<<"enter size of array "<<endl;
           cin>>n;
    int arr[n];
   cout<<"Enter array element\n";

  for(int i=0;i<n;i++){
    cin>>arr[i];
    }

    int key;
    cout<<"enter key to search"<<endl;
    cin>>key;

    int low=0,high=n-1, flag=0;
    for(int i=0;i<n;i++){
                                                                // int mid =(low +high)/2; //It take more time 5.2 second
                                                               // cout<<mid;
       int mid=low+(high-low)/2; // It take less time 4.1 second
       if(arr[mid]==key){
        cout<<"present"<<endl;
          flag=1;
          break;
       }
       else if(arr[mid]>key){
             high= mid-1;
       }
       else if(arr[mid] <key)
          low = mid+1;
    }

    if(flag==0){
        cout<<"Not present"<<endl;
    }
  }
  return 0;
}
