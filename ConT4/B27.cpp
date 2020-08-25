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
        ll n,l,r, res = 0, check = 0;
        cin>>n>>l>>r;
        vi a;
        while(n!=1){
            a.pb(n%2);
            n/=2;
        }
        if(l%2 == 0 && r%2 == 0) res+= (r-1-l-1)/2+1;
        else if(l%2 == 1 && r%2 == 0) res+= (r-1-l)/2+1; 
        else if(l%2 == 0 && r%2 == 1) res += (r-l-1)/2+1;
        else res= (r-l)/2+1; //(*)
        for(int i = a.size() - 1; i >= 0; i--){
            if(a[i] == 1){
                ll init = pow(2,a.size()-i);
                ll distance = pow(2,a.size()-i+1);
                ll quantityL = 0;
                ll quantityR = 0;
                if(l-init>=0){
                    if((l-init)%distance==0) check = 1;
                    quantityL = (l-init)/distance +1; //(**)
                    quantityR = (r-init)/distance +1;
                }
                else if(r-init>=0){
                    quantityR = (r-init)/distance +1;
                }
                res+=quantityR-quantityL;
            }
        }
        if(check == 1) res++;
        cout<<res<<endl;
   }
    return 0;
}
// Idea: Các số lẻ luôn là 1, tính tổng các số đó trong l-r (*)
//       Tìm ra quy luật là (2^i) sẽ là vị trí các số "dư" khi chia n cho 2 tới hết
//       Còn khoảng cách là (2^(i+1)) giữa các số đó
//       Thử từng số, tính các số trong khoảng đấy bằng công thức (**) (tính tất cả các số từ init tới r - đi các số từ init tới l)

//Code by QT