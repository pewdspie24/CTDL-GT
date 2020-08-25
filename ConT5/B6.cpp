#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define fi first
#define se second
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

int sol(string s){
    int maxx = 1;
    int len = s.size();
    int l,r;
    for(int i = 1; i < len; i++){
        // day chan
        l = i-1;
        r = i;
        while(l >= 0 && r < len && s[l] == s[r]){
            if(r-l+1 > maxx){
                maxx = r-l+1;
            }
            l--;
            r++;
        }
        // day le
        l = i-1;
        r = i+1;
        while(l >= 0 && r < len && s[l] == s[r]){
            if(r-l+1 > maxx){
                maxx = r-l+1;
            }
            l--;
            r++;
        }
    }
    return maxx;
}


int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        cout<<sol(s)<<endl;
   }
    return 0;
}
//Code by QT