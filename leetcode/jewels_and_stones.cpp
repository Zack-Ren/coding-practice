#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int numJewelsInStones(string J, string S){
	int count = 0;
	for(int i = 0; i < S.length(); i++){
		if(J.find(S[i]) != string::npos){
			count++;
		}
	}
	return count;
}


int main(){
	string J = "aA";
	string S = "aAAbbbb";	
	
	int j = numJewelsInStones(J, S);
	cout << j;
}
