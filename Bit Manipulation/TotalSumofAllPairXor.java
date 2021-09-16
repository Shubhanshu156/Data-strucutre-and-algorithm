import java.util.ArrayList;
import java.util.Scanner;

// import javax.swing.text.StyledEditorKit.StyledTextAction;

public class TotalSumofAllPairXor {
    public static void main(String[] args) {    
        Scanner foo = new Scanner(System.in);
        int n=foo.nextInt();
        ArrayList<Integer> lst=new ArrayList<>();
        for (int i = 0; i < n; i++) {
            lst.add(foo.nextInt());
        }                          
        int ans=0;
        for (int i = 0; i < 31; i++) {
            int count0=0;
            int count1=0;
            for (int j = 0; j < n; j++) {
                if ((lst.get(j)&(1<<i))!=0) {
                //    System.out.println(lst.get(j));
                    count1+=1;
                    
                }
                else{
                    count0+=1;
                }

                
                
            }
            ans+=(1<<i)*(count0*count1);
        }             
    System.out.println(ans);
    }
    
}
