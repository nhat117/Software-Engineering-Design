#include <iostream>
#include <vector>

using namespace std;

int Max_Pairwise(const vector <int> &  num) {
	int res = 0;
	int n = num.size();
	for (int i = 0; i < n; ++i) {
		for (int i_2 = i + 1; i_2 < n; i_2 ++) {
			if (num[i] * num[i_2] > res) {
				res = num[1] * num[i_2];
			}
		}
	}
	return res;
}

int main () {
	int n ;
	cin >> n;
	vector<int> num(n);
	for (int i = 0; i < n; i ++) {
		cin >> num[i];
	}
	int res = Max_Pairwise =  Max_Pairwise 
	cout << res << "\n";
	return 0;
}