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
const int N=2;
const ll M=1000000007;

struct Matrix{
	ll m[N][N];
	Matrix(){
		m[0][0]=0;
		m[0][1]=1;
		m[1][0]=1;
		m[1][1]=1;
        // khởi tạo ma trận
	}
};

Matrix operator * (Matrix a, Matrix b)
{
    Matrix res;
    for (int i=0; i<=1; i++)
        for (int j=0; j<=1; j++)
        {
            res.m[i][j] = 0;
            for (int k=0; k<=1; k++)
                res.m[i][j] = (res.m[i][j]+a.m[i][k]*b.m[k][j])%M;
        } // tạo ma trận
    return res;
}

Matrix Solve (Matrix a, ll n)
{
    if (n==1)
        return a;
    if (n%2!=0)
        return Solve(a,n-1)*a;
    Matrix tmp = Solve(a,n/2);
    return tmp*tmp;
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        ll n;
		cin>>n;
		Matrix a;
		Matrix result = Solve(a, n);
		cout<<result.m[0][1]<<endl;
   }
    return 0;
}
//Code by QT