#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int main(){

    int N;
    cin>>N;
    long long product=1;
    long long value;
    for(int i=0;i<N;i++){
        cin>>value;
        product=(product*value)%MOD;

    }


    cout<<product%MOD;


}
