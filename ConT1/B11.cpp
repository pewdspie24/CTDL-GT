#include<bits/stdc++.h>
using namespace std;
string bin="";
string gray;
void sol(){
    bin += gray[0]; //MSB
    for(int i = 1; i < gray.length(); i++){
        if(gray[i] == '0') bin+=bin[i-1];
        else{
            if(
                bin[i-1] == '0'){
                bin+='1';
            }
            else bin+='0';
        } 
    }
}
int main(){
    int T;
    cin>>T;
    while(T--)
    {
        bin="";
        cin>>gray;
        sol();
        cout<<bin<<endl;
    }
}