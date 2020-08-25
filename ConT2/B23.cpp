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

int l1[10],l2[10],n,t,a[101][101]={0},l3[10],l4[10],test[100][100];
string x[101];
int kt = 0;
void sol(int i, int j, int all) {
    if (i == n && j == n ) { // => toi khi nao toi mep cuoi cung thi in
        kt = 1;
        for (int k = 1; k <= all-1; k++) cout<<x[k];
        cout<<" ";
    }
    else {
        // cout<<i<<" ";
        int i1,j1;
        for (int r = 1; r <= 4; r++) { 
            i1 = i + l1[r]; // r = 1 thi i tang
            j1 = j + l2[r]; // r = 2 thi j tang
            // cout<<i1<<" ";
            if (1 <= i1 && i1 <= n && 1 <= j1 && j1 <= n &&  a[i1][j1] == 1 && test[i1][j1] != 1) { //cout<<r<<" "<<i<<" "<<j<<endl; // ktra xem vi tri da tang co = 1 k
                if (r == 1) x[all] = "D"; //r=1 => di xuong
                else if(r == 2) x[all] = "L"; //r=2 => di ngang
                else if(r==3) x[all] = "R";
                else x[all] = "U";
                // cout<<x[all]<<endl;
                test[i1][j1] = 1;
                sol(i1,j1,all+1); // => de quy, dat truong hop tiep theo khi da + them vao vi tri, sẽ thử được cả lên và xuống
                test[i1][j1] = 0;
            }
        }
    }
}

int main(){
    l1[1] = 1; l1[2] = 0; l1[3] = 0; l1[4] = -1;
    l2[1] = 0; l2[2] = -1; l2[3] = 1; l2[4] = 0;
    cin>>t;
    while (t--){
        cin>>n;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++) cin>>a[i][j];
        if(a[1][1] == 0) cout<<"-1"<<endl;
        // else if
        else{
            test[1][1]=1;
            sol(1,1,1);
            if(kt == 0) cout<<"-1"<<endl;
            else cout<<endl;
            kt = 0;
        }
        
    }
}
//Code by QT