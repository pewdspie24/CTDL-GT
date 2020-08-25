#include <bits/stdc++.h>
using namespace std;
char a[100];
int tong = 0;
void sol1(int n, int k){
    for(int i = 0; i < n; i++){
        a[i] = 'A';
    } 
    for(int i = n-1; i >= 0; i--){
        int dem = 0;
        if(a[i] == 'A'){
            a[i] = 'B';
            for(int j = i+1; j < n; j++) a[j] = 'A';
            for(int g = 0; g < n-k+1; g++){
                int kt = 0;
                for(int l = g; l < g+k; l++){
                    if(a[l] == 'A') continue;
                    else{
                        kt = 1;
                        break;
                    }
                }
                if(a[g+k] == 'A' || a[g-1] == 'A'){
                    if(kt == 0){
                        kt = 1;
                        g++;
                    }
                }
                if(kt == 0){
                    dem++;
                } 
            }
            i = n;
        }if(dem == 1) tong++; 
    }
}
void sol2(int n, int k){
    for(int i = 0; i < n; i++){
        a[i] = 'A';
    } 
    for(int i = n-1; i >= 0; i--){
        int dem = 0;
        if(a[i] == 'A'){
            a[i] = 'B';
            for(int j = i+1; j < n; j++) a[j] = 'A';
           for(int g = 0; g < n-k+1; g++){
                int kt = 0;
                for(int l = g; l < g+k; l++){
                    if(a[l] == 'A') continue;
                    else{
                        kt = 1;
                        break;
                    }
                }
                if(a[g+k] == 'A' || a[g-1] == 'A')
                {
                    if(kt == 0){
                        kt = 1;
                        g++;
                    }
                }
                if(kt == 0){
                    dem++;
                }
            }
            i = n;
        }if(dem == 1){
            for(int j = 0; j < n; j++) cout<<a[j];
            cout<<endl;
        }
    }
}
int main(){
    int n,k;
    cin>>n>>k;
    sol1(n,k);
    cout<<tong<<endl;
    sol2(n,k);
    return 0; 
}