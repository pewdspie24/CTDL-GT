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
        int a[1000],b[1000];
        int n;
        cin>>n;
        for(int i = 0; i < n; i++) cin>>a[i];
        for(int i = 0; i < n; i++) cin>>b[i];
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                if(b[i] > b[j]){
                    swap(a[i],a[j]);
                    swap(b[i], b[j]);
                }
            }
        }
        // for(int i = 0; i < n; i++) cout<<a[i];
        // for(int i = 0; i < n; i++) cout<<b[i];
        int index = 0;
        int dem = 1;
        for(int i = 1; i < n; i++){
            if(a[i] >= b[index]){
                dem++;
                index = i;
            }
        }
        cout<<dem<<endl;
   }
    return 0;
}
//Code by QT