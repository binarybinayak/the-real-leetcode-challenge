def maxProfit(prices) :
    minPrice = prices[0]
    maxProfit = 0
    for price in prices:
        profit = price - minPrice
        maxProfit = max(maxProfit, profit)
        minPrice = min(price, minPrice)

    return maxProfit

print(maxProfit([1,5,6,4,2,9]))

    