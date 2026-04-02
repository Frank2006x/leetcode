func max(a, b int) int {

	if a > b {
		return a
	}
	return b
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