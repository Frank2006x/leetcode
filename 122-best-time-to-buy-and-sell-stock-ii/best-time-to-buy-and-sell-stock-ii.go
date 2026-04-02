func max(a, b int) int {

	if a > b {
		return a
	}
	return b
}



func maxProfit(prices []int) int {
	n := len(prices)
	prev:=make([]int,2)
    cur:=make([]int,2)
    
	for index := n - 1; index >= 0; index-- {
		for buy := 1; buy >= 0; buy-- {
			if buy == 1 {
				cur[buy] = max(-prices[index]+prev[0], prev[1] )
			} else {

				cur[buy] = max(prices[index]+prev[1], prev[0])
			}
            prev=cur
		}
	}

	return cur[1];
}