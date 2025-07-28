#include <iostream>
#include <vector>

int maxProfit(std::vector<int>& prices) {
    int min = prices[0];
    int maxProfit = 0;
    for(int i=0; i<prices.size(); i++) {
        int profit = prices[i] - min;
        maxProfit = maxProfit<profit ? profit : maxProfit;
        min = min > prices[i] ? prices[i] : min;
    }
    return maxProfit;
}


int main() {
    std::vector<int> prices = {2, 6, 5, 4};
    std::cout << maxProfit(prices);   
}