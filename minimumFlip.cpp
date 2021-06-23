#include <bits/stdc++.h>
using namespace std;
int CountMinFlips(string s, int n,
				int k)
{
	int cnt = 0;
	int prev = -1;
	for (int i = 0; i < k; i++) {
		if (s[i] == '1') {
			prev = i;
		}
	}
	if (prev == -1) {
		cnt++;
		s[k - 1] = '1';
		prev = k - 1;
	}
	for (int i = k; i < n; i++) {
		if (s[i] != '1') {
			if (prev <= (i - k)) {
				s[i] = '1';
				prev = i;
				cnt++;
			}
		}
		else {
			prev = i;
		}
	}
	return (cnt);
}
int main()
{
	string str = "10000001";
	int n = str.size();
	int k = 2;
	cout << CountMinFlips(str, n, k)
		<< endl;
	return 0;
}
