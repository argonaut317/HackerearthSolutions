
#include<bits/stdc++.h>
using namespace std;

void printAllrec(string s,int n,int index,string curr,vector<string>& string_set){

if(index==n){
    return;
}

cout<<curr<<"\n";
string_set.push_back(curr);

for(int i=index+1;i<n;i++){

    curr+=s[i];
    printAllrec(s,n,i,curr,string_set);
    curr.erase(curr.size()-1);

}

return;


}


void printAllSubsequence(string s){
int n =s.size();
string curr = "";
vector<string> string_set;
printAllrec(s,n,-1,curr,string_set);

cout<<"\n"<<"The vector is as follows :";

for(int i=0;i<string_set.size();i++){
    cout<<i<<" "<<string_set[i]<<"\n";
}

}


int main(){

string s = "abc";

printAllSubsequence(s);


}
