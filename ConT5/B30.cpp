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

int f[limit];
int n;

void sol(){
    for(int i = 0; i < limit; i++) f[i] = i;
    for(int i = 4; i < limit; i++){
        for(int j = 1; j <= ceil(sqrt(i)); j++){
            int bp = j*j;
            if(bp > i) break;
            else f[i] = min(f[i],f[i-bp]+1);
        }
    }
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    sol();
    while(T--){
        cin>>n;
        cout<<f[n]<<endl;
   }
    return 0;
}
//Code by QT