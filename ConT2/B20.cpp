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

int main ()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++) cin>>a[i];
        int b[100][100];
        int check = 1;
        int tmp = n;
        for(int i = 0; i < n; i++) b[0][i] = a[i];
        while(tmp>1){
            // cout<<"[";
            for(int i = 0; i < tmp-1; i++){
                a[i] = a[i]+a[i+1];
                b[check][i] = a[i];  
            }
            // cout<<"]"<<endl;
            tmp--;
            check++;
        }
        // cout<<check;
        for(int i = check-1; i >= 0; i--){
            cout<<"[";
            for(int j = 0; j < n-i; j++){
                if(j == n-i-1) cout<<b[i][j];
                else cout<<b[i][j]<<" ";
            }
            cout<<"] ";
        }
        cout<<endl;
    }
    return 0;
}
//Code by QT