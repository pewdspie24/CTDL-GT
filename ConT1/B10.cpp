#include<bits/stdc++.h>
using namespace std;
string bin,gray="";
void sol(){
    gray += bin[0]; //MSB
    for(int i = 1; i < bin.length(); i++){
        if(bin[i-1] == bin[i]) gray += '0';
        else gray += '1';
    }
}
int main(){
    int T;
    cin>>T;
    while(T--)
    {
        gray="";
        cin>>bin;
        sol();
        cout<<gray<<endl;
    }
}