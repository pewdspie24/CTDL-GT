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

string rep(int j, string s){
      string temp = "";
      for(int i = 0; i < s.size(); i++){
         if(i == j)temp += "*";
         else temp += s[i];
      }
      return temp;
   }
int sol(string b, string e, vector<string>& w) {
    if(find(w.begin(), w.end(), e) == w.end() || !b.size() || !e.size() || !w.size())return 0;
    map < string , vector <string> > m;
    for(int i = 0; i < w.size(); i++){
        string x = w[i];
        for(int j = 0; j < x.size(); j++){
        string inter = rep(j,x);
        m[inter].push_back(x);
        }
    }
    queue < pair <string, int> > q;
    q.push({b, 1});
    map <string, int> visited;
    while(!q.empty()){
        pair < string, int > s = q.front();
        q.pop();
        string x = s.first;
        int l = s.second;
        for(int i = 0; i < x.size(); i++){
        string temp = rep(i ,x);
        for(int j = 0; j < m[temp].size(); j++){
            string aa = m[temp][j];
            if(aa == e)return l+1;
            if(!visited[aa]){
                q.push({aa, l+1});
                visited[aa] = 1;
            }
        }
        }
    }
    int level = 0;
    return 0;
}

int main ()
{
    ONLY_CPP
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        string s,e;
        cin>>s>>e;
        string s1;
        vector<string> ss;
        unordered_set<string> st;
        for(int i = 0; i < n; i++){
            cin>>s1;
            ss.pb(s1);
        }
        cout<<sol(s,e,ss)<<endl;
   }
    return 0;
}
//Code by QT