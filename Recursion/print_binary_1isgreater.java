public class print_binary_1isgreater {
    public static void printnumber(int one,int zero,int n,char[] ans,int pos) {
        if (n==0) {
            System.out.println(ans);
            return;
            
            
        }
        
            if (one>zero) {
                ans[pos]='0';
                printnumber(one, zero+1, n-1, ans,pos+1);
            }
                ans[pos]='1';
                printnumber(one+1, zero, n-1, ans,pos+1);
            
        }
    
    public static void main(String[] args) {
        char[] ans={'1','1','1'};
        int pos=0;
        printnumber(0, 0, 3, ans,0);
    }
    
}
