#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int check = 1;
        int n;
        int a[100];
        cin>>n;
        int k = 1;
        a[1] = n;
        while(check){
            cout<<"(";
            for(int i = 1; i <= k; i++){
                if(i != k)
                cout<<a[i]<<" ";
                else cout<<a[i];
            }
            cout<<")"<<" ";
            int i=k,j,r,t,tmp;
            while(i>0 && a[i] == 1) i--;
            if(i>0){
                a[i] -=1;
                tmp = k-i+1;
                r = tmp/a[i];
                t = tmp%a[i];
                k=i;
                if(r>0){
                    for(j = i+1; j <= i+r; j++) a[j] = a[i];
                    k += r;
                }
                if(t>0){
                    k+=1;
                    a[k] = t;
                }
            }
            else check = 0;
        }
        cout<<endl;
    }
}