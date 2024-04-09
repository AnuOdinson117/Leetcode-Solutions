import java.util.*;

public class _0455_Assign_Cookies {
    static int findContentChildren(int[] g, int[] s) {
        Arrays.sort(g);
        Arrays.sort(s);
        int count = 0;
        int i = 0, j = 0;
        while((i < g.length) && (j < s.length)) {
            if(s[j] >= g[i]) {
                count++;
                i++;
                j++;
            }
            else {
                j++;
            }
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int m = sc.nextInt();
        int[] greed = new int[m];
        for(int i = 0; i < m; i++) {
            greed[i] = sc.nextInt();
        }
        int n = sc.nextInt();
        int[] size = new int[n];
        for(int j = 0; j < n; j++) {
            size[j] = sc.nextInt();
        }
        sc.close();
        System.out.print(findContentChildren(greed, size));
    }
}

// ARRAY | TWO POINTERS | GREEDY | SORTING

// Example 1:
// Input: g = [1,2,3], s = [1,1]
// Output: 1
// Explanation: You have 3 children and 2 cookies. The greed factors of 3 children are 1, 2, 3. And even though you have 2 cookies, since their size is both 1, you could only make the child whose greed factor is 1 content. You need to output 1.

// Example 2:
// Input: g = [1,2], s = [1,2,3]
// Output: false
// Explanation: You have 2 children and 3 cookies. The greed factors of 2 children are 1, 2. You have 3 cookies and their sizes are big enough to gratify all of the children. You need to output 2.