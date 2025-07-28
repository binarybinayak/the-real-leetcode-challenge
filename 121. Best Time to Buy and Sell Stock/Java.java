import java.util.ArrayList;
import java.util.Arrays;

public class Java {
    public static int maxProfit(int[] prices) {
        int min = prices[0];
        int maxProfit = 0;
        for(int i=0; i<prices.length; i++) {
            int profit = prices[i] - min;
            maxProfit = maxProfit < profit ? profit : maxProfit;
            min = prices[i] < min ? prices[i] : min;
        }
        return maxProfit;
    }

    public static void main (String[] args) {
        System.out.println(maxProfit(new int[]{1, 5, 9, 2, 4}));
    }
}
