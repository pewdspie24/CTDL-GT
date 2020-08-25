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

ll n;
char a[limit];
vll pre;
ll dem;

void preCompute(){
    for(int i = 1; i < 1000000; i++){
        ll b;
        itoa(i,a,2);
        b=atoll(a);
        pre.pb(b);
    }
}

int main ()
{
    ONLY_CPP
    int T;
    cin>>T;
    preCompute();
    while(T--){
        // ll n;
        cin>>n;
        // char a[limit];
        int i = 0;
        // dem = 0;
        while(i < pre.size()){
            if(pre[i] % n == 0){
                cout<<pre[i]<<endl;
                break;
            }
            i++;
        }
   }
    return 0;
}
//Code by QT