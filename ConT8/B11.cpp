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

int d[] = {1,10,100,1000};
int step[10005];
bool ngto[10005];
int s, t;

void sangNgTo() {
     memset(ngto,true,sizeof(ngto));
     ngto[1] = false;
     for (int i = 2; i <= 100; ++i) 
         if (ngto[i]) 
            for (int j = 2; i*j <= 10000; ngto[i*j++] = false);
}

int bfs() {
      queue<int> q;   
      if (s == t) return 0;
      q.push(s);
      memset(step,0,sizeof(step));
      step[s] = 1;
      while (!q.empty()){
            int u = q.front(); q.pop(); 
            for (int i = 0; i < 4; ++i)
                for (int j = 0; j < 10; ++j) {
                    int v = d[i]*((u/d[i]/10)*10 + j) + u%d[i];
                    if (v > 1000 && ngto[v] && step[v] == 0) {
                          q.push(v);   
                          step[v] = step[u] + 1;
                          if (v == t) return (step[t] - 1);
                    }
                }
      }
      return -1;
}

int main ()
{
    ONLY_CPP
    int T;
    cin>>T;
    sangNgTo();
    while(T--){
        cin>>s>>t;
        cout<<bfs()<<endl;
   }
    return 0;
}
//Code by QT