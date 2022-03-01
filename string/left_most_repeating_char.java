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
        System.out.println(method1("geek"));
        System.out.println(method2("geek"));
    
     
        }
     

     public static int method1(String a) {
        int[] fIndex=new int[256];
        Arrays.fill(fIndex, -1);
        int res=Integer.MAX_VALUE;
        for (int i = 0; i < a.length(); i++) {
            int fi=fIndex[a.charAt(i)];
            if (fi==-1) {
                fIndex[a.charAt(i)]=i;                
            }
            else{
                res=Math.min(res, fi);
            }
            
        }
            
            return (res==Integer.MAX_VALUE?-1:res);


         
     }   
     public static int method2(String a) {
         boolean[] visited=new boolean[256];
         int res=-1;
         for (int i = a.length()-1; i >=0; i--) {
             if (visited[a.charAt(i)]) {
                 res=i;

             }
             else{
                 visited[a.charAt(i)]=true;
             }
             
         }
        return res;
         
     }   
    
    
    
    }
  
