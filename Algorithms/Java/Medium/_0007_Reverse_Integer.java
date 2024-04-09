import java.util.*;

public class _0007_Reverse_Integer {
    static int reverse(int x) {
        long reverse = 0;
        while(x != 0) {
            reverse = reverse * 10 + (x % 10);
            x = x / 10;
        }
        if(reverse > Integer.MAX_VALUE || reverse < Integer.MIN_VALUE) {
            return 0;
        }
        else {
            return (int) reverse;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();
        sc.close();
        int reverseNumber = reverse(number);
        System.out.println(reverseNumber);
    }
}

// Example 1:
// Input: x = 123
// Output: 321

// Example 2:
// Input: x = -123
// Output: -321

// Example 3:
// Input: x = 120
// Output: 21