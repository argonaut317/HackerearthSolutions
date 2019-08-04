#include<bits/stdc++.h>
using namespace std;


int main(){

    int N;
    cin>>N;
    bool flag=true;
    char arr[N];

    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    for(int i=1;i<N;i++){
        if(arr[i-1]==arr[i]&&arr[i-1]=='H'){
            flag=false;
            break;
        }

    }

    if(flag==false){
        cout<<"NO";
    }
    else{
        cout<<"YES"<<"\n";

        for(int i=0;i<N;i++){
            if(arr[i]=='.'){
                cout<<"B";
            }
            else{
                cout<<arr[i];
            }
        }

    }



}
