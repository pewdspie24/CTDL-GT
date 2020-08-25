#include <bits/stdc++.h>

using namespace std;

string s;

void sol(string s, int i){
    if(i == s.size()/2){
        cout<<"La xau doi xung";
        return;
    } 
    if(s[i] == s[s.size()-i-1]){
        sol(s,i+1);
    }
    else{
        cout<<"Khong la xau doi xung";
        return;
    }
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin>>s;
    sol(s,0);
    return 0;
}