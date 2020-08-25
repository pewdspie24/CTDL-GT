#include <bits/stdc++.h>
using namespace std;
int a[100];
void sol(int n, int k){
    for(int i = 0; i < n; i++){
        a[i] = 0;
    } 
    for(int i = n-1; i >= 0; i--){
        int dem = 0;
        if(a[i] == 0){
            a[i] = 1;
            for(int j = i+1; j < n; j++) a[j] = 0;
            for(int g = 0; g < n; g++){
                if(a[g] == 1) dem++;
            }
            if(dem == k){
                for(int j = 0; j < n; j++) cout<<a[j];
                cout<<endl;
            }
            i = n;
        }
    }
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int n,k;
        cin>>n>>k;
        sol(n,k);
    }
    return 0; 
}