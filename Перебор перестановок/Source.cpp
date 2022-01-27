#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> FillVector(const int& n)
{
	vector<int> result;
	for (int i = 1; i <= n; i++)
	{
		result.push_back(i);
	}
	return result;
}

vector<vector<int>> NumsSortAndReverse(vector<int>& nums)
{
	vector<vector<int>>result;
	do
	{
		result.push_back({ begin(nums),end(nums) });
	} while (next_permutation(begin(nums), end(nums)));

	reverse(begin(result), end(result));
	return result;
}

void PrintSortedNums(const vector<vector<int>>& result)
{
	for (auto& x : result)
	{
		for (auto& y : x)
		{
			cout << y << " ";
		}
		cout << endl;
	}
}

int main()
{
	int n;
	cin >> n;

	vector<int> nums = FillVector(n);

	vector<vector<int>>result= NumsSortAndReverse(nums);

	PrintSortedNums(result);

	//system("pause");
	return 0;
}