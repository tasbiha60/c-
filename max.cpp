#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
     int mx=a[0];

    for(int i=0;i<n;i++){

     mx=max(mx,a[i]);

    }
    cout<<mx<<"\n";
    return 0;
}
