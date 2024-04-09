import java.util.Scanner;

public class _0231_Power_of_Two {
    public static boolean isPowerOfTwo(int n) {
        if(n == 1) {
            return true;
        }
        if((n == 0) || (n % 2 != 0)) {
            return false;
        }
        return isPowerOfTwo(n / 2);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();
        System.out.print(isPowerOfTwo(n));
    }
}

// MATH | BIT MANIPULATION | RECURSION

// Example 1:
// Input: n = 1
// Output: true
// Explanation: 20 = 1

// Example 2:
// Input: n = 16
// Output: true
// Explanation: 24 = 16

// Example 3:
// Input: n = 3
// Output: false