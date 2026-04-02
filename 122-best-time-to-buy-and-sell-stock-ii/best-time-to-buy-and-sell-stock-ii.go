func max(a, b int) int {

	if a > b {
		return a
	}
	return b
}

func solve(prices []int, index int, buy int, dp [][]int) int {
	if index == len(prices) {
		return 0
	}
	if dp[index][buy] != -1 {
		return dp[index][buy]
	}
	if buy == 1 {
		dp[index][buy] = max(-prices[index]+solve(prices, index+1, 0, dp), solve(prices, index+1, 1, dp))
	} else {

		dp[index][buy] = max(prices[index]+solve(prices, index+1, 1, dp), solve(prices, index+1, 0, dp))
	}
	return dp[index][buy]
}

func maxProfit(prices []int) int {
	n := len(prices)
	dp := make([][]int, n+1)
	for i := range dp {
		dp[i] = make([]int, 2)
		for j := 0; j < 2; j++ {
			dp[i][j] = 0
		}
	}
	dp[n][1] = 0
	dp[n][0] = 0
	for index := n - 1; index >= 0; index-- {
		for buy := 1; buy >= 0; buy-- {
			if buy == 1 {
				dp[index][buy] = max(-prices[index]+dp[index+1][0], dp[index+1][1] )
			} else {

				dp[index][buy] = max(prices[index]+dp[index+1][1], dp[index+1][0])
			}
		}
	}

	return dp[0][1];
}