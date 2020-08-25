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

vi a;
vi b;

int bfs(){
    queue <pair<vector<int> ,int> > q;
    set <vector <int>> st;
    q.push(mp(a,0));
    st.insert(a);
    while(!q.empty()){
        pair<vector<int> ,int> s = q.front(); q.pop();
        if(s.fi == b){
            return s.se;
        }
        vector <int> c = s.fi;
        c.at(0) = s.fi.at(3);
        c.at(3) = s.fi.at(4);
        c.at(4) = s.fi.at(1);
        c.at(1) = s.fi.at(0);
        vector <int> d = s.fi;
        d.at(1) = s.fi.at(4);
        d.at(4) = s.fi.at(5);
        d.at(5) = s.fi.at(2);
        d.at(2) = s.fi.at(1);
        if(c == b || d == b)
            return s.se + 1;
        if(st.find(c) == st.end()){
            st.insert(c);
            q.push(mp(c,s.se + 1));
        }
        if(st.find(d) == st.end()){
            st.insert(d);
            q.push(mp(d,s.se + 1));
        }
    }
}  

int main ()
{
    ONLY_CPP
    int tmp;
    for(int i = 0; i < 6; i++){
        cin>>tmp;
        a.pb(tmp);
    }
    for(int i = 0; i < 6; i++){
        cin>>tmp;
        b.pb(tmp);
    }
    cout<<bfs();
    return 0;
}
//Code by QT