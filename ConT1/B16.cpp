#include<bits/stdc++.h>
using namespace std;
int a[100],n,Stop=0, tong = 0, k, dem = 0;
int b[100][100];
void init(){
    for (int i = 0; i < n; i++)
    {
        a[i] = i+1;
    }
    Stop=0;
}
void output(){
    tong = 0;
    for (int i = 0; i < n; i++)
    {
        tong+=b[i][a[i]-1];
        // cout<<b[i][a[i]-1]<<" ";
    }
    if(tong == k) dem++;
}
void output2(){
    tong = 0;
    for (int i = 0; i < n; i++)
    {
        tong+=b[i][a[i]-1];
    }
    if(tong == k){
        for(int i = 0 ; i < n; i++){
        cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
void sol(){
    int i = n-2;
    while(i >= 0 && a[i] > a[i+1]) i--;
    if(i<0) Stop=1; //end
    else{
        int g = n-1;
        while(a[g] < a[i]) g--;
        swap(a[i], a[g]);
        int r = n-1; int l = i+1;
        while(l<r){
            swap(a[l], a[r]);
            l++;
            r--;
        }
    }
}
int main(){
    cin>>n>>k;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) cin>>b[i][j];
    }
    init();
    while(Stop==0){
        output();
        sol();
    }
    cout<<dem<<endl;
    init();
    while(Stop==0){
        output2();
        sol();
    }
}