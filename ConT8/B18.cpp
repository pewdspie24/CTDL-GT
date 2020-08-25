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
const int im = INT_MAX;
const int in = INT_MIN;
const int limit = 1e5+5;
const ll M = 1e9+7;

int main ()
{
    ONLY_CPP
    int T;
    // cin>>T;
    T=1;
    while(T--){
        int hang,cot, tmp;
        cin>>hang>>cot;
        vector<vi > b;
        for(int i = 1; i <= hang; i++){
            vi temp;
            temp.clear();
            for(int j = 1; j <= cot; j++){
                cin>>tmp;
                temp.pb(tmp);
                // cout<<b[i][j]<<" ";
            }
            b.pb(temp);
            // cout<<endl;
        }
        // cout<<endl;
        int ngay = 0;
        // cout<<"ASF"<<endl;
        while(true){
            int kt = 0;
            vector<vi > a;
            a.clear();
            a=b;
            // for(int i = 1; i <= hang; i++){
            //     for(int j = 1; j <= cot; j++){
            //         // a[i][j]=b[i][j];
            //         cout<<a[i][j]<<" ";
            //     }
            //     cout<<endl;
            // }cout<<endl;
            for(int i = 0; i <= hang-1; i++){
                for(int j = 0; j <= cot-1; j++){
                    if(b[i][j] == 2){
                        kt = 1;
                        a[i][j] = 0;
                        if(i >= 1){
                            if(a[i-1][j] == 1) a[i-1][j]++;
                        }
                        if(j >= 1){
                            if(a[i][j-1] == 1) a[i][j-1]++;
                        }
                        if(i <= hang-2){
                            if(a[i+1][j] == 1) a[i+1][j]++;
                        }
                        if(j <= cot-2){
                            if(a[i][j+1] == 1) a[i][j+1]++;
                        }
                    }
                }
            }
            b.clear();
            b=a;
            if(!kt){
                ngay--;
                break;
            }
            ngay++;
        }
        int check = 0;
        for(int i = 0; i <= hang-1; i++){
            for(int j = 0; j <= cot-1; j++){
                if(b[i][j] == 1){
                    check = 1;
                    break;
                }
            }
            if(check == 1) break;
        }
        if(check == 1) cout<<-1;
        else cout<<ngay;
   }
    return 0;
}
//Code by QT