#include <bits/stdc++.h>
using namespace std;
long long n, x, dp[1005][1005], op[1005][5] = {0};
int main()
{
	cin >> n >> x;
	for(int i = 1; i <= n; i++)
	{
		cin >> op[i][1] >> op[i][2] >> op[i][3];
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = 0; j <= x; j++)
		{
			int lose = op[i][1], win = op[i][2], xx = op[i][3];
			if(xx <= j)
			{
				dp[i][j] = max(dp[i-1][j] + lose, win + dp[i-1][j-xx]);//这里注意与常规01背包的不同，本题0药剂也要比，就是输掉获得的经验
			}
			else
			{
				dp[i][j] = dp[i-1][j] + lose;
			}
		}
	}
	cout << 5 * dp[n][x];
	return 0;
}
