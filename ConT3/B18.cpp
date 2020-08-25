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
        int n;
        cin>>n;
        stack<int> res;
        int kt = 0;
        int so7 = 0;
        int tempso7 = 0;
        int check = 0;
        int checkall = 0;
        while(res.size()!=0) res.pop();
        if(n%7==0){
            while(n!=0){
                res.push(7);
                n-=7;
            }
            checkall = 1;
        }
        else
        while(true){
            if(n%4 == 0){
                kt = 1;
                check = n;
                tempso7 = so7;
            }
            if(n >= 7){
                n-=7;
                so7++;
                res.push(7);
            }
            else{
                if(n != 4){
                    if(check != 0){
                        for(int i = 0; i < so7-tempso7; i++){
                            res.pop();
                        }
                        while(check!=0){
                            check-=4;
                            res.push(4);
                        }
                        checkall = 1;
                        break;
                    }
                    else break;
                }
                else{
                    res.push(4);
                    n-=4;
                    checkall = 1;
                }
            }
        }
        if(checkall == 0) cout<<"-1";
        else while(res.size() != 0){
            cout<<res.top();
            res.pop();
        }
        cout<<endl;
   }
    return 0;
}
//Code by QT