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

int SNT[60]={2,	3,	5,	7,	11,	13,	17,	19,	23,	29,
31,	37,	41,	43,	47,	53,	59,	61,	67,	71,
73,	79,	83,	89,	97,	101, 103, 107, 109,	113,
127, 131, 137, 139,	149, 151, 157, 163,	167, 173,
179, 181, 191, 193,	197, 199};

vector<vi> sol;
vi tmp;
int n,s,p;
int indexx;
int dem = 0;
// int a[10000];

int findIndex(int p){
    for(int i = 0; i < 46; i++){
        if(SNT[i] == p) return i;
    }
}

void Try(int i, int res){
    if(res == 0){
        if(tmp.size() == n){
            dem++;
            sol.pb(tmp);
        }
    }
    else{
        for(int j = i; j < 46-indexx; j++){
            if(res >= SNT[j+indexx]){
                tmp.pb(SNT[j+indexx]);
                res-=SNT[j+indexx];
                // cout<<SNT[j+indexx]<<" ";
                Try(j+1,res);
                res+=SNT[j+indexx];
                tmp.pop_back();
            }
        }
    }
}

int main ()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        cin>>n>>p>>s;
        indexx=findIndex(p);
        // cout<<SNT[indexx]<<endl;
        Try(0,s);
        cout<<dem<<endl;
        for(int i = 0; i < sol.size(); i++){
            for(int j = 0; j < sol[i].size(); j++){
                cout<<sol[i][j]<<" ";
            }
            cout<<endl;
        }
        dem = 0;
        sol.clear();
        tmp.clear();
    }
    return 0;
}
//Code by QT