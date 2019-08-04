#include<bits/stdc++.h>
using namespace std;



int main(){

    int T;
    string seat_type;
    cin>>T;
    int arr[T];

    for(int i=0;i<T;i++){

        cin>>arr[i];
            }

            int compartment_no;
            int first_seat;
            int last_seat;
            int difference;
            int opposite_seat;

    for(int i=0;i<T;i++){

        int p = arr[i];
        int t = p%12;

        if(t==0||t==1||t==6||t==7){
            seat_type = "WS";
        }
        else if(t==2||t==5||t==8||t==11){
            seat_type = "MS";
        }
        else if(t==3||t==4||t==9||t==10){
            seat_type = "AS";
        }

        compartment_no = floor((p-1)/12);
        first_seat = 12*compartment_no + 1;
        last_seat = first_seat + 11;
        difference = last_seat - p;
        opposite_seat  = first_seat + difference;

        cout<<opposite_seat<<" "<<seat_type<<"\n";
    }



}
