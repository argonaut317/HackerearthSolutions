#include<bits/stdc++.h>
using namespace std;


int main(){

    int N;
    cin>>N;

    //find the prime number using sieve of erathosenes

    bool prime[N+1];

    memset(prime,true,sizeof(prime));

    for(int p=2;p*p<=N;++p){

        if(prime[p]==true){

            for(int i=p*p;i<=N;i+=p){

                prime[i]=false;

            }

        }

    }

    for(int i=2;i<=N;i++){
        if(prime[i]==true){
            cout<<i<<" ";
        }
    }





}
