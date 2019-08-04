#include<bits/stdc++.h>

using namespace std;
#define MOD 1000000007
int Comb(int n,int r){

int p=1;
int k=1;

if(n-r<r){
    r = n-r;
}

if(r!=0){

    while(r){
    p*=n;
    k*=r;

    int m =__gcd(p,k);

    p/=m;
    k/=m;

    --n;
    --r;
    }

}
else{
    p=1;
}


return p;


}






int ways(int W, int M){

int ways = (W*M*Comb(W+M-2,1))%MOD;


return ways;

}


int main(){

int W=2;
int M = 2;

cout<<ways(W,M);


}
