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
        int s,d;
        cin>>d>>s;
        stack <int> res;
        if(d > s*9) cout<<"-1"<<endl;
        else{
            while(d>0){
                int tmp = 0;
                if(s == 1){
                    res.push(d);
                    break;
                }
                while(tmp < 9 && d>1){
                    tmp++;
                    d--;
                }
                res.push(tmp);
                s--;
                if(d == 1 && s != 1){
                    while(s!=1){
                        res.push(0);
                        s--;
                    }
                    res.push(1);
                    break;
                }
                else if(d == 1 && s == 1){
                    res.push(1);
                    break;
                }
            }
            while(res.size()!=0){
                cout<<res.top();
                res.pop();
            }
            cout<<endl;
        }
   }
    return 0;
}
//Code by QT