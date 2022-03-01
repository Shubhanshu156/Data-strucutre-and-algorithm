import java.lang.annotation.Target;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;

// import javax.print.event.PrintEvent;

public class answer {
    public static void main(String[] args) {
        System.out.println(left_most_nonrepepating("wweello"));

    }

    public static int left_most_nonrepepating(String a) {

        // first create a array with -1 value
        // then -1 mean no value with ascii value i in string
        // -2 mean appear more than 1 time
        // else mean first and last appear at ith index
        int[] cnt = new int[256];
        Arrays.fill(cnt, -1);
        int res = Integer.MAX_VALUE;
        for (int i = 0; i < a.length(); i++) {
            if (cnt[a.charAt(i)] == -1) {
                // System.out.println(a.charAt(i));
                cnt[a.charAt(i)] = i;

            } else {
                cnt[a.charAt(i)] = -2;
            }
        }
        for (int i = 0; i < cnt.length; i++) {
            if (cnt[i]>=0) {
               
                res = Math.min(res, cnt[i]);
            }

        }
        return res==Integer.MAX_VALUE?-1:res;
    }
}
