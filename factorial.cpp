#include<bits/stdc++.h>
using namespace std;


int main(){

    long N;
    cin>>N;

    long product = 1;

    for(long i=1;i<=N;i++){
        product*=i;
    }

    cout<<product;

}
