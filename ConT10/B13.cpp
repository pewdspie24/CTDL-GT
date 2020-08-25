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

int n,m,G[1005][1005];

int checker(){
    int d[n+1],i,j,k;
    for(int i=1;i<=n;i++) d[i] = 1e9;
    d[1] = 0;
    for(int k=2;k<=n;k++)
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                if(d[j]>d[i]+G[i][j])
                    d[j] = d[i]+G[i][j];

    int check = 0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++){
            int x = d[i] + G[i][j];
            if(d[j] > x){
                check = 1;
                break;
            }
        }
    return check;
}

int main ()
{
    ONLY_CPP
    int T;
    cin>>T;
    while(T--){
        int u,v,k;
        cin >> n >> m;
	    for(int i=0;i<=n;i++)
	        for(int j=0;j<=n;j++)
	            G[i][j] = 1e7;
	    for(int i=1;i<=m;i++){
	        cin >> u >> v >> k;
	        G[u][v] = k;
	    }
	    cout<<checker()<<endl;
   }
    return 0;
}
//Code by QT