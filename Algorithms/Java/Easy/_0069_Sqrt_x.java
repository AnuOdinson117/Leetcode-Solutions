import java.util.*;

public class _0069_Sqrt_x {
    static int mySqrt(int x) {
        int low = 0;
        int high = x;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            long longmid = (long) mid;
            long longx = (long) x;
            if((longmid * longmid) == longx) {
                return mid;
            }
            else if((longmid * longmid) > longx) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return high;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();
        System.out.println(mySqrt(n));
    }
}

// MATH | BINARY SEARCH

// Example 1:
// Input: x = 4
// Output: 2
// Explanation: The square root of 4 is 2, so we return 2.

// Example 2:
// Input: x = 8
// Output: 2
// Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.