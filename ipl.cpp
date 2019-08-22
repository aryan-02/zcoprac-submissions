#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> memo;
vector<int> fee;
int mfee(int idx, int days)
{
	if(idx == fee.size())
		return 0;
	else if(memo[idx][days] != -1)
	{
		return memo[idx][days];
	}
	else {
		int answer{};
		if(days != 2)
		{
			answer = max(fee[idx] + mfee(idx + 1, days + 1), mfee(idx + 1, 0));
		}
		else {
			answer = mfee(idx + 1, 0);
		}
		memo[idx][days] = answer;
		return answer;
	}
}
int main()
{
	int N{};
	cin >> N;
	for(int i{}; i < N+5; i++)
	{
		memo.push_back({-1, -1, -1});
	}
	for(int i{}; i < N; i++)
	{
		int temp;
		cin >> temp;
		fee.push_back(temp);
	}
	cout << mfee(0, 0) << '\n';
}