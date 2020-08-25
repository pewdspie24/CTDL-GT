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

int ktchu = 0;


int main ()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        int kt = 0;
        int dem = 0;
        int sl = 0;
        vector < vector <char> > sol;
        stack <char> sta;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(' || s[i] == ')'){
                kt = 1;
                break;
            }
        }
        if(kt == 0) cout<<"-1";
        else if(s.length() == 1) cout<<"-1";
        else{
            vector <char> temp;
            for(int i = 0; i < s.length(); i++){
                int kt1 = 0;
                for(int j = 0; j < s.length(); j++){
                    if(j != i){
                        if(s[j] == '(') sta.push(s[j]);
                        else if(s[j] == ')'){
                            if(sta.empty() == true){
                                kt1 = 1;
                                break;
                            }
                            else if(sta.top() == '(') sta.pop();
                            else{
                                kt1 = 1;
                                break;
                            }
                        }
                    }
                    if(j == s.length()-1){
                        if(sta.empty() == false){
                            kt1 = 1;
                            break;
                        }
                    }
                }
                if(kt1 == 0){
                    for(int j = 0; j < s.length(); j++){
                        if(i != j){
                            temp.pb(s[j]);
                        }
                    }
                    sol.pb(temp);
                    temp.clear();
                    dem++;
                }
            }
            if(dem == 0) cout<<"-1";
            else{
                sol.erase( unique( sol.begin(), sol.end() ), sol.end() );
                for(int k = 0; k < sol.size(); k++){
                    for(int l = 0; l < sol[k].size(); l++)
                    cout<<sol[k][l];
                    cout<<" ";
                }
                // cout<<" "
            }
        }
        while(!sta.empty()) sta.pop();
        cout<<endl;
        sol.clear();
    }
    return 0;
}
//Code by QT