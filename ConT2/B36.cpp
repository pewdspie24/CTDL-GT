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

int a[5];
int dem = 0;
int n = 5;
int tong;
void Try(int i){
    if(i == n){
        if(tong == 23) dem++;
    }
    else
    for(int j = 1; j <= 3; j++){
        if(j == 1) tong += a[i];
        if(j == 2) tong -= a[i];
        if(j == 3) tong *= a[i];
        Try(i+1);
        if(j == 1) tong -= a[i];
        if(j == 2) tong += a[i];
        if(j == 3) tong /= a[i];
    }
}

int main ()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        for(int i = 0; i < 5; i++) cin>>a[i];
        sort(a,a+5);
        do{
            // for(int i = 0; i < 5; i++) cout<<a[i]<<" ";
            tong = a[0];
            Try(1);
        }
        while(next_permutation(a,a+5));
        if(dem != 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        dem = 0;
    }
    return 0;
}
//Code by QT