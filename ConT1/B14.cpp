#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n,k,kt = -1;
        cin>>n>>k;
        int a[1000];
        int b[1000]={0};
        for(int i = 1; i <= k; i++){
            cin>>a[i];
        }
        for(int i = k; i > 0; i--){
            if(a[i] != n-k+i){
                kt = i;
                break;
            }
        }
        int dem = 1;
        if(kt == -1){
            cout<<k<<endl;
        }
        else{
            a[kt]++;
            int tmp = a[kt];
            for(int i = 1; i < kt; i++){
                b[dem] = a[i];
                dem++;
            }
            for(int i = kt; i <= k; i++){
                b[dem] = tmp;
                dem++;
                tmp++;
            }
            a[kt]--;
            sort(a+1,a+k+1);
            sort(b+1,b+dem);
            /*for(int i = 1; i <= k ; i++) cout<<a[i]<<" ";
            cout<<endl;
            for(int i = 1; i <= k ; i++) cout<<b[i]<<" ";*/
            int sol = 0;
            for(int i = 1; i <= k; i++){
                for(int j = 1; j <= k; j++){
                    if(a[i] == b[j]){
                        sol++;
                        break;
                    }
                }
            }
            cout<<k-sol<<endl;
        }
    }
}