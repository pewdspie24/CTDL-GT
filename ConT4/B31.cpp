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
const int N=11;
const ll M=1000000007;

ll n;

struct Matrix{
	ll m[N][N];
};

Matrix operator * (Matrix a, Matrix b)
{
    Matrix res;
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
        {
            res.m[i][j] = 0;
            for (int k=0; k<n; k++)
                res.m[i][j] = (res.m[i][j]+a.m[i][k]*b.m[k][j])%M;
        } // tạo ma trận
    return res;
}

Matrix Solve (Matrix a, ll tmp)
{
    if (tmp==1)
        return a;
    if (tmp%2!=0)
        return Solve(a,tmp-1)*a;
    Matrix temp = Solve(a,tmp/2);
    return temp*temp;
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        ll k;
		cin>>n>>k;
		Matrix a;
        for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++){
            cin>>a.m[i][j];
        }
		Matrix result = Solve(a, k);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++)
		    cout<<result.m[i][j]<<" ";
            cout<<endl;
        }
        
   }
    return 0;
}
//Code by QT