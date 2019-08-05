#include<bits/stdc++.h>
using namespace std;


int main(){

    int T;
    cin>>T;
    int arr[11][2];
    int N;
    int cost_G,cost_P;
    for(int i=0;i<T;i++){
        cin>>cost_G>>cost_P;

        cin>>N;

        for(int i=0;i<N;i++){
            cin>>arr[i][0];
            cin>>arr[i][1];
        }

        // for(int i=0;i<N;i++){
        //     cout<<arr[i][0]<<" "<<arr[i][1]<<"\n";
        // }

        // cout<<"\n\n";
        int count_1=0;
        int count_2=0;

        for(int i=0;i<N;i++){

            if(arr[i][0]==1){
                count_1++;
            }
            if(arr[i][1]==1){
                count_2++;
            }


        }

        //in case G=1 and P=2
        int ques1 = cost_G*count_1;
        int ques2 = cost_P*count_2;

        int case_1 = ques1+ques2;

        ques1 = cost_G*count_2;
        ques2 = cost_P*count_1;

        int case_2 = ques1+ques2;

        if(case_1>=case_2){
            cout<<case_2;
        }
        else{
            cout<<case_1;
        }
        cout<<"\n";

    }



}
