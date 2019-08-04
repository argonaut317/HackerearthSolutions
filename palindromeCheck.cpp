#include<bits/stdc++.h>
using namespace std;


int main(){
    string str;
    cin>>str;
    int n = str.size();
    int flag;
    for(int i=0;i<n;i++){

        if(str[i]==str[n-i-1]){
            flag=0;
        }
        else{
            flag=1;
            break;
        }

    }
    if(flag==1){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }

}
