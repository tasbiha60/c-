#include<bits/stdc++.h>
using namespace std;
int main(){
   string S;
   while(getline(cin,S)){

  sort(S.begin() , S.end());
   for(int i=0;S[i]!='\0';i++){
    if(('a'<=S[i] && S[i]<='z') && (S[i]!= ' ')){
        cout<<S[i];
    }
   }
    cout<<endl;
   }
    return 0;

}
