#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define ii pair<int, int>
#define pai pair<ar<int,3>,int>
#define ar array
#define ONLY_CPP ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define QT NN

using namespace std;

typedef double ld;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
// typedef pair<int,int> II;

const ld pi=2*acos(0);
const int im = INT_MAX;
const int in = INT_MIN;
const int limit = 1e5+5;
const ll M = 1e9+7;

int x,y,z;
char a[100][100][100];
int cnt[100][100][100];
ar<int,3> l,r;

void bfs(){
    queue <pai> q;
    //set <ar<int,3>> vis;
    q.push(pai( {l[0] , l[1] , l[2] } , 0));
    cnt[l[0]][l[1]][l[2]] = 0;
    //vis.insert({l[0] , l[1] , l[2]});
    while(!q.empty()){
        pai s = q.front(); q.pop();
        if(s.first == r)
            return;
        // 
        for(int i = s.first[0] + 1 ; i < x ; i++){
            if(a[i][s.first[1]][s.first[2]] == '#')
                break;
            if( cnt[i][s.first[1]][s.first[2]] == -1){
                //vis.insert({i,s.first[1],s.first[2]});
                cnt[i][s.first[1]][s.first[2]] = cnt[i - 1][s.first[1]][s.first[2]] + 1;
                q.push(pai({i,s.first[1],s.first[2]} ,s.second + 1));
            }
        }
        //
        for(int i = s.first[0] - 1 ; i >= 0 ; i--){
            if(a[i][s.first[1]][s.first[2]] == '#')
                break;
            if( cnt[i][s.first[1]][s.first[2]] == -1){
                //vis.insert({i,s.first[1],s.first[2]});
                cnt[i][s.first[1]][s.first[2]] = cnt[i + 1][s.first[1]][s.first[2]] + 1;
                q.push(pai({i,s.first[1],s.first[2]} ,s.second + 1));
            }
        }
        //
        for(int i = s.first[1] + 1 ; i < y ; i++){
            if(a[s.first[0]][i][s.first[2]] == '#')
                break;
            if(cnt[s.first[0]][i][s.first[2]] == -1){
                //vis.insert({s.first[0],i,s.first[2]});
                cnt[s.first[0]][i][s.first[2]] = cnt[s.first[0]][i - 1][s.first[2]] + 1;
                q.push(pai({s.first[0],i,s.first[2]} ,s.second + 1));
            }
        }
        //
        for(int i = s.first[1] - 1 ; i >= 0 ; i--){
            if(a[s.first[0]][i][s.first[2]] == '#')
                break;
            if(cnt[s.first[0]][i][s.first[2]] == -1){
                //vis.insert({s.first[0],i,s.first[2]});
                cnt[s.first[0]][i][s.first[2]] = cnt[s.first[0]][i + 1][s.first[2]] + 1;
                q.push(pai({s.first[0],i,s.first[2]} ,s.second + 1));
            }
        }
        //
        for(int i = s.first[2] + 1 ; i < z ; i++){
            if(a[s.first[0]][s.first[1]][i] == '#')
                break;
            if(cnt[s.first[0]][s.first[1]][i] == -1){
                //vis.insert({s.first[0],s.first[1],i});
                cnt[s.first[0]][s.first[1]][i] = cnt[s.first[0]][s.first[1]][i - 1] + 1;
                q.push(pai({s.first[0],s.first[1],i} ,s.second + 1));
            }
        }
        //
        for(int i = s.first[2] - 1 ; i >= 0; i--){
            if(a[s.first[0]] [s.first[1]] [i] == '#')
                break;
            if(cnt[s.first[0]][s.first[1]][i] == -1){
                //vis.insert({s.first[0],s.first[1],i});
                cnt[s.first[0]][s.first[1]][i] = cnt[s.first[0]][s.first[1]][i +1] + 1;
                q.push(pai({s.first[0],s.first[1],i} ,s.second + 1));
            }
        }
    }
}

int main ()
{
    ONLY_CPP
    int T;
    cin>>T;
    while(T--){
        cin>>x>>y>>z;
        memset(cnt,-1,sizeof(cnt));
        for(int i = 0; i < x; i++)
        for(int j = 0; j < y; j++)
        for(int k = 0; k < z; k++){
            cin>>a[i][j][k];
            if(a[i][j][k] == 'S'){
                l[0] = i;
                l[1] = j;
                l[2] = k;
            }
            if(a[i][j][k] == 'E'){
                r[0] = i;
                r[1] = j;
                r[2] = k;
            }
        }
        bfs();
        cout<<cnt[r[0]][r[1]][r[2]]<<endl;
   }
    return 0;
}
//Code by QT