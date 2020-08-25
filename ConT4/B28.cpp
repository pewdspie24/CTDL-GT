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

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        vi a;
        int n, tmp;
        cin>>n;
        for(int i = 0; i < n; i++){
            cin>>tmp;
            a.pb(tmp);
        }
        sort(a.begin(),a.end());
        int mid = n/2;
        int res = n;
        for(int i = 0; i < n/2; i++){
            while(true){
                if(a[i]*2 <= a[mid]){
                    res--;
                    mid++;
                    break;
                }
                else mid++;
                if(mid == n) break;
            }
            if(mid == n) break;
        }
        cout<<res<<endl;
   }
    return 0;
}
//Code by QT