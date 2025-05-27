#include<bits/stdc++.h>
using namespace std;
int main(){
char X;
    cin>>X;


    if(X>='A' && X<='Z'){
        cout<<"ALPHA"<<"\n"<<"IS CAPITAL"<<endl;
    }
       else if(X>='a' && X<='z'){
            cout<<"ALPHA"<<"\n"<<"IS SMALL"<<endl;
        }

    else if(X>='0' && X<='9'){
        cout<<"IS DIGIT\n";

    }
    else{
        cout<<"Nothing\n";
    }

    return 0;
}
