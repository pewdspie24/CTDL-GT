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

int n,m;
int matrix[100][100];
int sol[100][100];
int res;

void Try(int i,int temp){
    res=max(temp,res); // so sánh đường dài nhất với đường hiện thời
    for(int j=0;j<n;j++){
        if(matrix[i][j] == 1 && sol[i][j] == 0){
            sol[i][j]=1; // đánh dấu trong ma trận kề là đã đi qua
            sol[j][i]=1;
            Try(j,temp+1);
            sol[i][j]=0;
            sol[j][i]=0;
        }
    }  
}

int main ()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        res=0;
		cin>>n>>m;
		for(int i=0;i<n;i++)for(int j=0;j<n;j++) {matrix[i][j]=0; sol[i][j]=0;}
		int x,y;
		for(int i=0;i<m;i++){
			cin>>x>>y;
            // tạo ma trận kề
			matrix[x][y]=1;
			matrix[y][x]=1;
		}
		for(int k=0;k<n;k++){
        	Try(k,0); // duyệt ma trận kề
   		}
		cout<<res<<endl;
	}
    return 0;
}
//Code by QT