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

bool DFS(int s, int t, vector <int> vect[], int v){
    stack <int> st;
    vi res;
    bool visited[v+5][v+5];
    memset(visited, false, sizeof(visited));
    visited[s][t]=true; visited[t][s]=true;
    st.push(1);
    res.pb(1);
    while(!st.empty()){
        int xet=st.top();
        st.pop();
        for(int i=0; i<vect[xet].size(); i++){
            int tmp=vect[xet][i];
            if(!visited[xet][tmp]){
                st.push(xet);
                st.push(tmp);
                visited[xet][tmp]=true;
                res.pb(tmp);
                break;
            }
        }
        for(int i=0; i<vect[xet].size(); i++){
            int tmp=vect[xet][i];
            visited[tmp][xet]=true;
        }
    }
    if(res.size()!=v)
        return true;
    return false;
}

void sol(int n, vector <int> vect[]){
    vector <int> res;
    for(int i=1; i<=n; i++){
        for(int j=0; j<vect[i].size(); j++){
            if(vect[i][j]>i){
                if(DFS(i, vect[i][j], vect, n)){
                    res.pb(i);
                    res.pb(vect[i][j]);
                }
            }
        }
    }
    for(int i=0; i<res.size(); i++)
        cout << res[i] << " ";
    cout << endl;
}

int main ()
{
    ONLY_CPP
    int T;
    cin>>T;
    while(T--){
        int v, e;
        cin >> v >> e;
        vi vect[1005];
        for(int i=0; i<e; i++){
            int x, y;
            cin >> x >> y;
            vect[x].pb(y);
            vect[y].pb(x);
        }
        sol(v, vect);
   }
    return 0;
}
//Code by QT