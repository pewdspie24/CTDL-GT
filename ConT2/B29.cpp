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

int a[100][100],L1[100],L2[100],m,n, dem=0;;

void Try(int i, int j){
    if(i == n && j == m){
        dem++;
    }
    else{
        int i1,j1;
        for(int k = 1; k <= 2; k++){
            i1=i+L1[k];
            j1=j+L2[k];
            if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m){
                Try(i1,j1);
            }
        }
    }
}

int main ()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    L1[1] = 1;
    L1[2] = 0;
    L2[1] = 0;
    L2[2] = 1;
    int T;
    cin>>T;
    while(T--){
        dem = 0;
        cin>>n>>m;
        for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++) cin>>a[i][j];
        Try(1,1);
        cout<<dem<<endl;
    }
    return 0;
}
//Code by QT