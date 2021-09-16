import java.util.ArrayList;
import java.util.Scanner;

public class AllPairSumXor {
    public static void main(String[] args) {
        Scanner foo = new Scanner(System.in);
        // ArrayList<Integer> lst = new ArrayList<>();
        // ArrayList<ArrayList<Integer>> matrix=new ArrayList<>();
        int n=foo.nextInt();
        int ans=0;
        for (int i = 0; i <n; i++) {
            int ele=foo.nextInt();
            ans=ans^(2*ele); // only twice of each elements are unique rest all are duplicates so they will cancel out each other
        }
        System.out.println(ans);
    }
    
}
