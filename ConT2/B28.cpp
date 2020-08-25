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

int b[10000];
map<vi,int> check;
vector<vi> sol;
vi tmp;
int n,s;
int a[10000];

void solve(int i, int res){
    if(res == 0){
        if(check[tmp] == 0){
            check[tmp] = 1;
            sol.pb(tmp);
        }
    }
    else{
        for(int j = i; j < n; j++){
            if(res >= a[j]){
                tmp.pb(a[j]);
                res-=a[j];
                solve(j,res);
                res+=a[j];
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
        cin>>n>>s;
        tmp.clear();
        sol.clear();
        check.clear();
        // cout<<ar.size()<<endl;
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        sort(a,a+n);
        // int k = s/a[0];
        solve(0,s);
        if(sol.size() == 0) cout<<"-1"<<endl;
        else{
            int kt = 0;
            sort(sol.begin(),sol.end());
            for(int i = 0; i < sol.size(); i++){
                ll tong = 0;
                cout<<"[";
                for(int j = 0; j < sol[i].size(); j++)
                tong+=sol[i][j];
                if(tong == s){
                    for(int j = 0; j < sol[i].size(); j++)if(j != sol[i].size()-1) cout<<sol[i][j]<<" "; else cout<<sol[i][j];
                    cout<<"] ";
                } 
            }
            cout<<endl;
        }
        
    }
    return 0;
}
//Code by QT