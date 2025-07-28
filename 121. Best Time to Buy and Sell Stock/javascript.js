function maxProfit(prices) {
  let min = prices[0];
  let maxProfit = 0;
  for (let i = 0; i < prices.length; i++) {
    let profit = prices[i] - min;
    maxProfit = maxProfit < profit ? profit : maxProfit;
    min = min > prices[i] ? prices[i] : min;
  }
  return maxProfit;
}

console.log(maxProfit([7, 1, 5, 3, 6, 4]));
