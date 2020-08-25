#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int l=-1,r=-1;
        int a[n];
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        for(int i = n-1; i >0; i--){
            if(a[i] > a[i-1]){
                r = i;
                l = i-1;
                break;
            }
        }
        if(l == -1 && r == -1){
            for(int i = n-1; i >= 0; i--) cout<<a[i]<<" ";
            cout<<endl;
        }
        else{
            swap(a[l], a[r]);
            for(int i = 0; i <= r; i++) cout<<a[i]<<" ";
            for(int i = n-1; i > r; i--) cout<<a[i]<<" ";
            cout<<endl;
        }
    }
}