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

char a[100][100];
int k,n,m;
string Dict[1000];
int Check[100][100]={{0}};
string s;
int kt = 0;

int sol(int i, int j){
    Check[i][j]=1;
    s = s+a[i][j];
    for(int l = 0; l < k; l++){
        if(s.compare(Dict[l]) == 0) {cout<<s<<" "; kt = 1;}
    }
    // cout<<s<<" ";
    for(int h = i-1; h < m; h++){
        if(h > i+1){
            h--;
            break;
        } 
        for(int c = j-1; c < n; c++){
            if(c > j+1){
                c--;
                break;
            }
            if(h >= 0 && c >= 0 && Check[h][c] == 0){
                sol(h,c);
            }
        }
    }
    Check[i][j] = 0;
    s.erase(s.length()-1);
}

int main ()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        cin>>k>>m>>n;
        kt = 0;
        for(int i = 0; i < k; i++){
            cin>>Dict[i];
            cin.ignore();
            // cout<<Dict[i]<<endl;
        } 
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cin>>a[i][j];
                cin.ignore();
                Check[i][j] = 0;
                // cout<<a[i][j]<<endl;
            }
        }
        s="";
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                sol(i,j);
                // cout<<a[i][j]<<" ";
            }
            // cout<<endl;
        }
        if(kt == 0) cout<<"-1";
        cout<<endl;
    }
    return 0;
}
//Code by QT