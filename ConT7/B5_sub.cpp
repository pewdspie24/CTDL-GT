#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define bep(smth) (smth).begin(), (smth).end()
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
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        stack <int> st;
        st.push(-1);
        int res = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(') st.push(i);
            else if(s[i] == ')'){
                if(st.empty()){
                    continue;
                }
                else{
                    st.pop();
                    if(!st.empty()){
                        res = max(res,i-st.top());
                    }
                    else st.push(i);
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
//Code by QT