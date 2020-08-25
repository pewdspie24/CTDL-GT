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
void solve(vector<int>& a, vector<vector<int> >& sol, 
                 vector<int>& all, int index) 
{ 
    sol.push_back(all); 
    for (int i = index; i < a.size(); i++) { 
        all.push_back(a[i]); 
        solve(a, sol, all, i+1); 
        all.pop_back(); 
    } 
} 
vector<vi > allsub(vi& a)
{ 
    vi all; 
    vector<vi > sol; 
    int i = 0; 
    solve(a, sol, all, i); 
    return sol; 
}
int main ()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int n,s;
        cin>>n>>s;
        int a[n];
        vi ar;
        // cout<<ar.size()<<endl;
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i = 0; i < n; i++){
            ar.push_back(a[i]);
        }
        int kt = 0;
        vector<vi > sol = allsub(ar);
        sort(sol.begin(),sol.end());
        for(int i = 0; i < sol.size(); i++){
            ll tong = 0;
            for(int j = 0; j < sol[i].size(); j++)
            tong+=sol[i][j];
            if(tong == s){
                if(kt == 0){
                    cout<<"[";
                    kt = 1;
                }
                else cout<<" [";
                for(int j = 0; j < sol[i].size(); j++)if(j != sol[i].size()-1) cout<<sol[i][j]<<" "; else cout<<sol[i][j];
                cout<<"]";
            } 
        }
        if(kt == 0) cout<<"-1";
        cout<<endl;
    }
    return 0;
}
//Code by QT