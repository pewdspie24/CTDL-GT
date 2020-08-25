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

string decode(string str) 
{ 
	stack<int> integerstack; 
	stack<char> stringstack; 
	string temp = "", result = ""; 
 
	for (int i = 0; i < str.length(); i++) 
	{ 
		int count = 0; 

		if (str[i] >= '0' && str[i] <='9') 
		{ 
			while (str[i] >= '0' && str[i] <= '9') 
			{ 
				count = count * 10 + str[i] - '0'; 
				i++; 
			} 

			i--; 
			integerstack.push(count); 
		} 

		else if (str[i] == ']') 
		{ 
			temp = ""; 
			count = 0; 

			if (! integerstack.empty()) 
			{ 
				count = integerstack.top(); 
				integerstack.pop(); 
			} 

			while (! stringstack.empty() && stringstack.top()!='[' ) 
			{ 
				temp = stringstack.top() + temp; 
				stringstack.pop(); 
			} 

			if (! stringstack.empty() && stringstack.top() == '[') 
				stringstack.pop(); 

			for (int j = 0; j < count; j++) 
				result = result + temp; 

			for (int j = 0; j < result.length(); j++) 
				stringstack.push(result[j]); 

			result = ""; 
		} 

		else if (str[i] == '[') 
		{ 
			if (str[i-1] >= '0' && str[i-1] <= '9') 
				stringstack.push(str[i]); 

			else
			{ 
				stringstack.push(str[i]); 
				integerstack.push(1); 
			} 
		} 

		else
			stringstack.push(str[i]); 
	} 

	while (! stringstack.empty()) 
	{ 
		result = stringstack.top() + result; 
		stringstack.pop(); 
	} 

	return result; 
} 

int main() 
{ 
    int T;
    cin>>T;
    while(T--){
        string str;
        cin>>str;
        cout<<decode(str)<<endl;
    }
	return 0; 
} 
// Code by QT
