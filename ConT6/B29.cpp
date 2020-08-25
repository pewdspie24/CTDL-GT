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
    int n,tmp;
    vi a;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>tmp;
        a.pb(tmp);
    }
    int dem = 1, dem1 = 1;
    for(int i = n-dem; i > 0; i--){
        int kt = 0;
        for(int j = 0; j <= i; j++){
            if(a[j] > a[j+1]){
                swap(a[j+1],a[j]);
                kt = 1;
            } 
        }
        if(kt == 1){
            cout<<"Buoc "<<dem1<<": ";
            for(int j = 0; j < a.size(); j++){
                cout<<a[j]<<" ";
            }
            dem1++;
            cout<<endl;
        }
        dem++;
    }
    return 0;
}
//Code by QT