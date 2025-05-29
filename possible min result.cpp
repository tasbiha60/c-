#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--){
    int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
        cin>>a[i];
   }
   int minResult = INT_MAX;//enter the largest value for compare
   for(int i=0;i<n-1;i++){

    for(int j=i+1;j<n;j++){
      int  possible_result = a[i]+a[j]+(j-i);
minResult = min(minResult,possible_result);

   }
   }
   cout<<minResult<<endl;
    }

    return 0;
}
