public class Java {

    public static boolean isPalindrome(int x) {
        int n = x;
        int revX = 0;
        while(n>0) {
            revX = revX*10 + n%10;
            n = n/10;
        }
        return revX == x;
        
    }

    public static void main (String[] args) {
        System.out.println(isPalindrome(101));
    }
}
