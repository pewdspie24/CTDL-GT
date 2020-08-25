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
const int im = 10000000;
const int in = INT_MIN;
const int limit = 1e5+5;
const ll M = 1e9+7;

int dp[500][500];
int check[500][500];
int hang,cot;

void init(){
    memset(dp,0,sizeof(dp));
    memset(check,0,sizeof(check));
}

int sol(int a[500][500], int h, int c ){
    if(h >= hang || c >= cot || h < 0 || c < 0) return im;
    else if(dp[h][c] > 0 && dp[h][c] < im) return dp[h][c];
    else if(a[h][c] == 0){
        dp[h][c] = im;
        return im;
    }
    else if(a[h][c] == 2){
        dp[h][c] = 0;
        return 0;
    }
    else if(check[h][c]) return im;
    else{
        check[h][c] = 1;
        int tren = sol(a,h+1,c); 
        int duoi = sol(a,h-1,c); 
        int trai = sol(a,h,c-1); 
        int phai = sol(a,h,c+1); 
        dp[h][c] = 1+ min(min(min(tren,duoi),trai),phai);
        check[h][c] = 0;
    }
    return dp[h][c];
}

int res(int a[][500]){
    int ans = 0;
    for(int i = 0; i < hang; i++){
        for(int j = 0; j < cot; j++){
            if(a[i][j] == 1)
            sol(a,i,j);
        }
    }
    for(int i = 0; i < hang; i++){
        for(int j = 0; j < cot; j++){
            if(a[i][j] == 1 && dp[i][j] > ans)
            ans = dp[i][j];
        }
    }
    if(ans < im) return ans;
    else return -1;
}

int main ()
{
    ONLY_CPP
    int T;
    // cin>>T;
    T=1;
    while(T--){
        cin>>hang>>cot;
        init();
        int a[500][500];
        for(int i = 0; i < hang; i++){
            for(int j = 0; j < cot; j++){
                cin>>a[i][j];
            }
        }
        cout<<res(a)<<endl;
   }
    return 0;
}
//Code by QT