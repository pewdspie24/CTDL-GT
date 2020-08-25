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

int f[105][105][105];

int sol(string s1, string s2, string s3){
    for(int i = 0; i < 105; i++){
        for(int j = 0; j < 105; j++)
            for(int k = 0; k < 105; k++) f[i][j][k] = 0;
    }
    for(int i = 0; i < s1.size(); i++){
        for(int j = 0; j < s2.size(); j++){
            for(int k = 0; k < s3.size(); k++)
            if(s1[i] == s2[j] && s2[j] == s3[k]) f[i+1][j+1][k+1] = f[i][j][k]+1;
            else f[i+1][j+1][k+1] = max(f[i+1][j+1][k],max(f[i+1][j][k+1],f[i][j+1][k+1]));
        }
    }
    return f[s1.size()][s2.size()][s3.size()];
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    cin.ignore();
    while(T--){
        string a,b,c;
        int tmp1,tmp2,tmp3;
        cin>>tmp1>>tmp2>>tmp3;
        cin>>a>>b>>c;
        cout<<sol(a,b,c)<<endl;
   }
    return 0;
}
//Code by QT