#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int kt = -1;
        string s;
        cin>>s;
        for(int i = s.length()-1; i >= 0; i--){
            if(s[i] == '0'){
                kt = i;
                break;
            }
        }
        if(kt == -1){
            for(int i = 0; i < s.length(); i++) cout<<"0";
            cout<<endl;
        }
        else{
            for(int i = 0; i < kt; i++){
                cout<<s[i];
            }
            cout<<"1";
            for(int i = kt+1; i < s.length(); i++) cout<<"0";
            cout<<endl;
        }
    }
    return 0;
}