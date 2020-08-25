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

ll res[limit];

void preCompute(){
    ll so2 = 0, so3 = 0, so5 = 0;
    ll so2sau = 2, sodem2=0;
    ll so3sau = 3, sodem3=0;
    ll so5sau = 5, sodem5=0;
    ll next = 1;
    res[0] = next;
    for(int i = 1; i < 10000; i++){
        next = min(so2sau,min(so3sau,so5sau));
        res[i] = next;
        if(next == so2sau){
            sodem2++;
            so2sau = res[sodem2]*2;
        }
        if(next == so3sau){
            sodem3++;
            so3sau = res[sodem3]*3;
        }
        if(next == so5sau){
            sodem5++;
            so5sau = res[sodem5]*5;
        }
    }
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    preCompute();
    while(T--){
        int n;
        cin>>n;
        cout<<res[n-1]<<endl;
   }
    return 0;
}
//Code by QT