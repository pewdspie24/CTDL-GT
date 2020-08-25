#include <bits/stdc++.h>
using namespace std;
char a[100];
void sol(int n){
    for(int i = 0; i < n; i++){
        a[i] = 'A';
        cout<<a[i];
    } 
    cout<<" ";
    for(int i = n-1; i >= 0; i--){
        if(a[i] == 'A'){
            a[i] = 'B';
            for(int j = i+1; j < n; j++) a[j] = 'A';
            for(int j = 0; j < n; j++) cout<<a[j];
            cout<<" ";
            i = n;
        }
    }
    cout<<endl;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        sol(n);
    }
    return 0; 
}