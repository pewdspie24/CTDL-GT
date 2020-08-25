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
        int n,s,m;
        cin>>n>>s>>m;
        int sum = 0;
        int kt = 0;
        int dem = 0;
        // int demngay = 1;
        int tmp = 0;
        if(n < m) cout<<"-1"<<endl;
        else{
            for(int i = 1; i <= s; i++){
                // cout<<tmp<<" "<<demngay<<endl;
                if(i%7 == 0){
                    if(sum >= m){
                        sum-=m;
                        continue;
                    }
                    else{
                        if(tmp != 0){
                            tmp--;
                            sum+=n;
                            sum-=m;
                            dem++;
                        }
                        else{
                            kt = 1;
                            break;
                        }
                    }
                }
                else{
                    if(sum < m){
                        sum+=n;
                        sum-=m;
                        dem++;
                    }
                    else{
                        sum-=m;
                        tmp++;
                    }
                }
            }
            if(kt == 1) cout<<"-1"<<endl;
            else cout<<dem<<endl;
        }
   }
    return 0;
}
//Code by QT