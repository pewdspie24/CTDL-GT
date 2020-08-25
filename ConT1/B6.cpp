#include<bits/stdc++.h>
using namespace std;
int a[100],n,Stop=0;
void init(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        a[i] = i+1;
    }
    Stop=0;
}
void output(){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i];
    }
    cout<<" ";
}
void sol(){
    int i = n-2;
    while(i >= 0 && a[i] > a[i+1]) i--;
    if(i<0) Stop=1; //end
    else{
        int k = n-1;
        while(a[k] < a[i]) k--;
        swap(a[i], a[k]);
        int r = n-1; int l = i+1;
        while(l<r){
            swap(a[l], a[r]);
            l++;
            r--;
        }
    }
}
int main(){
    int T;
    cin>>T;
    while(T--){
        init();
        while(Stop==0){
            output();
            sol();
        }
        cout<<endl;
    }
}