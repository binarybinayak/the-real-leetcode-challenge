public class Java {
    public static int scoreOfString(String s) {
        int score = 0;
        for(int i=0; i<s.length()-1; i++) {
            int diff = ((int) s.charAt(i) - (int) s.charAt(i+1) > 0) ? (int) s.charAt(i) - (int) s.charAt(i+1) : (int) s.charAt(i+1) - (int) s.charAt(i);
            score += diff;
        }
        return score;
    }

    public static void main(String[] args) {
        System.out.println(scoreOfString("hello"));
    }
}
