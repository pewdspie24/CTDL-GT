#include<bits/stdc++.h>
using namespace std;
int Stop=0;
int a[1000];
int n,k;
int start(){
    Stop=0;
    for(int i = 1; i <= k; i++){
        a[i] = i;
    }
}
void output(){
    for(int i = 1; i <= k; i++){
        cout<<a[i];
    }
    cout<<" ";
}
void sol(){
    int i = k;
    while(i > 0 && a[i] == n-k+i) i--;
    if(i>0){
        a[i]++;
        for(int j = i+1; j <= k; j++){
            a[j] = a[i]+j-i;
        }
    }
    else Stop = 1;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        cin>>n>>k;
        start();
        while(Stop!=1){
            output();
            sol();
        }
        cout<<endl;
    }
}
