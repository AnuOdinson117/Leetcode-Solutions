import java.util.*;

class _14_Longest_Common_Prefix {
    static String longestCommonPrefix(String[] strs) {
        int n = strs.length;
        if(n == 1) {
            return strs[0];
        }
        Arrays.sort(strs);
        String first = strs[0];
        String last = strs[n - 1];
        String s = "";
        for(int i = 0; i < (Math.min(first.length(), last.length())); i++) {
            if(first.charAt(i) == last.charAt(i)) {
                s = s + first.charAt(i);
            }
            else {
                return s;
            }
        }
        return s;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String strs[] = new String[n];
        for(int i = 0; i < n; i++) {
            strs[i] = sc.next();
        }
        sc.close();
        System.out.print(longestCommonPrefix(strs));
    }
}

// STRING | TRIE

// Example 1:
// Input: strs = ["flower","flow","flight"]
// Output: "fl"

// Example 2:
// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.