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

int n;
char a[1005][1005];
II x,y;

int bfs(){
    queue <pair<pair<int,int>,int> > q;
    set <II> vis;
    vis.insert(x);
    q.push(mp(x,0)); 
    while(!q.empty()){
        pair<pair<int,int>,int> s = q.front() ; q.pop();
        if(s.fi == y){
            return s.se;
        }

        for(int i = s.fi.fi - 1 ; i >= 0 ; i--){
            if(a[i][s.fi.se] == 'X')
                break;
            if(vis.find(mp(i,s.fi.se)) == vis.end()){
                vis.insert(mp(i,s.fi.se));
                q.push(mp(mp(i,s.fi.se) , s.se + 1));
            }
        }

        for(int i = s.fi.fi + 1 ; i < n ; i++){
            if(a[i][s.fi.se] == 'X')
                break;
            if(vis.find(mp(i,s.fi.se)) == vis.end()){
                vis.insert(mp(i,s.fi.se));
                q.push(mp(mp(i,s.fi.se) , s.se + 1));
            }
        }

        for(int i = s.fi.se - 1 ; i >= 0 ; i--){
            if(a[s.fi.fi][i] == 'X')
                break;
            if(vis.find(mp(s.fi.fi,i)) == vis.end()){
                vis.insert(mp(s.fi.fi,i));
                q.push(mp(mp(s.fi.fi,i) , s.se + 1));
            }
        }

        for(int i = s.fi.se + 1 ; i < n ; i++){
            if(a[s.fi.fi][i] == 'X')
                break;
            if(vis.find(mp(s.fi.fi,i)) == vis.end()){
                vis.insert(mp(s.fi.fi,i));
                q.push(mp(mp(s.fi.fi,i) , s.se + 1));
            }
        }
    }
}

int main ()
{
    ONLY_CPP
    cin>>n;
    for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++) cin>>a[i][j];
    cin>>x.fi>>x.se>>y.fi>>y.se;
    cout<<bfs();
    return 0;
}
//Code by QT