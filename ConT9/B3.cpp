#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define ONLY_CPP ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define QT NN

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
const ll M = 1e9+7;

int n,cnt,a[1011][1011];
vector <int> adj[10001];

int main()
{
    ONLY_CPP
    cin>>n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            cin>>a[i][j];
            if (a[i][j] ) {
                adj[i].pb(j);
            }
        }
     for (int i = 1; i <= n; i++){
        for (int j = 0; j < adj[i].size(); j++)
            cout<<adj[i][j]<<" ";
            cout<<endl;
        }
}
//Code by QT