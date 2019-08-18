#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef unsigned long long int ull;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N{};
	cin >> N;
	vector<ull> data;
	for(int i{}; i < N; i++)
	{
		ull temp;
		cin >> temp;
		data.push_back(temp);
	}
	ull sum{};
	sort(data.begin(), data.end());
	for(int i{}; i < N; i++)
	{
		sum += data.at(i) * i - data.at(i) * (N - i - 1);
	}
	cout << sum << endl;
}