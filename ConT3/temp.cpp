#include <bits/stdc++.h> 
using namespace std; 

// Returns vector of Pre Processed perfect cubes 
vector<string> calPerfectCube(long long int n) 
{ 
	vector<string> perfectCubes; 
	for (int i = 1; i * i * i <= n; i++) { 
		long long int iThCube = i * i * i; 

		// convert the cube to string and push into 
		// perfectCubes vector 
		string cubeString = to_string(iThCube); 
		perfectCubes.push_back(cubeString); 
	} 
	
	return perfectCubes; 
} 

//Returns the Largest cube number that can be formed
string CheckSubSequence(string num, vector<string> perfectCubes) 
{ 
	// reverse the calPerfectCubeed cubes so that we 
	// have the largest cube in the beginning 
	// of the vector 
	reverse(perfectCubes.begin(), perfectCubes.end()); 

	int totalCubes = perfectCubes.size(); 

	// iterate over all cubes 
	for (int i = 0; i < totalCubes; i++) { 
		string currCube = perfectCubes[i]; 

		int digitsInCube = currCube.length(); 
		int index = 0; 
		int digitsInNumber = num.length(); 
		for (int j = 0; j < digitsInNumber; j++) { 

			// check if the current digit of the cube 
			// matches with that of the number num 
			if (num[j] == currCube[index]) 
				index++; 
			
			if (digitsInCube == index)				 
				return currCube;			 
		} 
	} 

	// if control reaches here, the its 
	// not possible to form a perfect cube 
	return "Not Possible"; 
} 

void FLC(long long int n) 
{ 
	// pre process perfect cubes 
	vector<string> perfectCubes = calPerfectCube(n); 

	// convert number n to string 
	string num = to_string(n); 

	string ans = CheckSubSequence(num, perfectCubes); 

	cout << "Largest Cube is " << ans << endl; 
} 

// Driver Code 
int main() 
{ 
	long long int n; 
	n = 10000000000; 
	FLC(n); 
	return 0; 
} 
