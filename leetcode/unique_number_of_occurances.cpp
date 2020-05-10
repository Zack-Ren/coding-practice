#include <bits/stdc++.h>
using namespace std;
//Given an array of integers arr, write a function that returns true if and only if the number of occurances of each value in the array is unique

bool uniqueOccurances(vector<int> arr){
	unordered_map<int, int> m;
	unordered_set<int> s;

	for(int i : arr){
		m[i]++;
	}

	for (auto& j : m){
		s.insert(j.second);
	}

	return m.size() == s.size();
}

int main(){
	vector<int> arr = {1,2,2,1,1,3};

	if (uniqueOccurances(arr)){
		cout << "true";
	} else {
		cout << "false";
	}
}
