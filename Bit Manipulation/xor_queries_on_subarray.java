import java.util.ArrayList;
import java.util.Scanner;

public class xor_queries_on_subarray {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> lst=new ArrayList<>();
        ArrayList<Integer> dp=new ArrayList<>();
        int a=sc.nextInt();
        int ans=0;
        for (int i = 0; i < a; i++) {
            int ele=sc.nextInt();
            ans^=ele;
            dp.add(ans);
            lst.add(ele);            
        }
        int index1,index2;
        index1=sc.nextInt();
        index2=sc.nextInt();
        if (index1==0) {
            System.out.println(dp.get(index2));
            
        }
        else{
            System.out.println(dp.get(index2)*dp.get(index1-1));
//dp[index2]*dp[indxe1-1]=dp[0]^dp[1]^dp[index1-1]^dp[index1]^dp[indxe2]*dp[0]^dp[1]^dp[index1-1]
//as we all know that xor of same element is 0
// this expression will be dp[indxe1]^dp[indxe2]
 }




    }
}
