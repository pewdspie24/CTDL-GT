#include <bits/stdc++.h>
#include <string.h>
#include <string>

#define pb push_back
#define FOR(i,n) for(i = 0; i < n; i++)
#define mp make_pair
#define fi first
#define se second

using namespace std;

typedef double ld;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> II;

const ld pi=2*acos(0);
const int im = INT_MAX;
const int in = INT_MIN;
const int limit = 1e5+5;

int Stop=0;
int a[1000];
int n,k,s;
int dem = 0;

int start(){
    for(int i = 1; i <= k; i++){
        a[i] = i;
    }
}
void output(){
    ll tong = 0;
    for(int i = 1; i <= k; i++){
        // cout<<a[i];
        tong+=a[i];
    }
    if(tong == s) dem++;
    // cout<<endl;
    // cout<<tong<<endl;
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

int main ()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    while(true){
        cin>>n>>k>>s;
        // cout<<k<<endl;
        Stop=0;
        if(n==k && k == s && n == 0){
            break;
        }
        else if (n == 0 && k == 1 && s == 0) cout<<"1"<<endl;
        else if (k > n) cout<<"0"<<endl;
        else{
            start();
            while(Stop!=1){
                output();
                sol();
            }
            cout<<dem<<endl;
            dem = 0;
        }
    }
    return 0;
}
//Code by QT