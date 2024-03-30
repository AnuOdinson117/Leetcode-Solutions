import java.util.*;

public class _242_Valid_Anagram {
    static boolean isAnagram(String s, String t) {
        char arrayS[] = s.toCharArray();
        char arrayT[] = t.toCharArray();
        Arrays.sort(arrayS);
        Arrays.sort(arrayT);
        s = new String(arrayS);
        t = new String(arrayT);
        if(s.equals(t)) {
            return true;
        }
        else {
            return false;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str1 = sc.nextLine();
        String str2 = sc.nextLine();
        sc.close();
        if(isAnagram(str1, str2)) {
            System.out.println("true");
        }
        else {
            System.out.println("false");
        }
    }
}

// HASH TABLE | STRING | SORTING

// Example 1:
// Input: s = "anagram", t = "nagaram"
// Output: true

// Example 2:
// Input: s = "rat", t = "car"
// Output: false