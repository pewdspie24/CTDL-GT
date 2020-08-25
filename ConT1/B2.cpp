#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n,k,kt = -1;
        cin>>n>>k;
        int a[1000];
        for(int i = 1; i <= k; i++){
            cin>>a[i];
        }
        for(int i = k; i > 0; i--){
            if(a[i] != n-k+i){
                kt = i;
                break;
            }
        }
        if(kt == -1){
            for(int i = 1; i <= k; i++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else{
            a[kt]++;
            int tmp = a[kt];
            for(int i = 1; i < kt; i++) cout<<a[i]<<" ";
            for(int i = kt; i <= k; i++){
                cout<<tmp<<" ";
                tmp++;
            }
            cout<<endl;
        }
    }
}