#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
	int T;
	cin >> T;
	for(int t = 0; t < T; t++)
	{
		int n;
		cin >> n;
		vector<int> nums(n);
		for(int i = 0; i < n; i++)
		{
			cin >> nums[i];
		}
		stack<int> biggers;
		biggers.push(0);
		cout << 1 << " ";
		for(int i = 1; i < n; i++)
		{
			int num = nums[i];
			while(biggers.size() > 0 && nums[biggers.top()] <= num)
			{
				biggers.pop();
			}
			int res = i + 1;
			if(biggers.size() > 0)
			{
				res = i - biggers.top();
			}
			biggers.push(i);
			cout << res << " ";
		}
		cout << endl;
	}
	return 0;
}