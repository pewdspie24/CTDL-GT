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

void sol(string s, int k, string& maxx){
    if(k == 0) return;
    int n = s.length();
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(s[i] < s[j]){
                swap(s[i], s[j]);
                if(s.compare(maxx) > 0) maxx = s;
                sol(s,k-1,maxx);
                swap(s[i],s[j]);
            }
        }
    }
}

int main ()
{
    
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        string maxx = s;
        sol(s,n,maxx);
        cout<<maxx<<endl;
    }
    return 0;
}
//Code by QT