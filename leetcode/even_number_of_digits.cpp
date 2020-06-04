#include<bits/stdc++.h>

using namespace std;

int findNumbers(vector<int> &nums){
	int even = 0;
	for(int i : nums){
		int count = 0;
		while(i != 0){
			count++;
			i /= 10;
		}
		if (count % 2 == 0){
			even++;
		}
	}
	cout << even;
}


int main(){
	vector<int> num{32,1,5,7,3,4,6};
	findNumbers(num);
}
