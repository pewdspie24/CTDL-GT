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

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int n, tmp, max1 = im, max2 = im, kt = 0;
        cin>>n;
        for(int i = 0; i < n ; i++){
            cin>>tmp;
            if(max1 > tmp){
                max2 = max1;
                max1 = tmp;
                // max2 = tmp;
            }
            else if(max2 > tmp){
                max2= tmp;
            }
        }
        if(max2 != max1)
        cout<<max1<<" "<<max2<<endl;
        else cout<<"-1"<<endl;
   }
    return 0;
}
//Code by QT