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

int a[20][20];
bool b[20];
int kq[50];
int minn=im;
int cost=0;
int n;

void Try(int i){
    if(i==n){
        if(cost+a[kq[i-1]][kq[0]]<minn){
            minn=cost+a[kq[i-1]][kq[0]];
        }
    }
    else
    {
        for(int j=0;j<n;j++){
            if(b[j]==false && cost+a[kq[i-1]][j] < minn){
                kq[i]=j;
                b[j]=true;
                cost+=a[kq[i-1]][j];
                Try(i+1);
                b[j]=false;
                cost-=a[kq[i-1]][j];
            }
        }
    }
}
int main() 
{ 
    cin>>n;
    for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++) cin>>a[i][j];
    kq[0]=0;
    b[0] = true;
    Try(1);
    cout<<minn;
    return 0; 
} 