/**
 * permutation_with_spaces
 */
public class permutation_with_spaces  {
    // if you want all unique then store in map and check every time
    public static void subset(String ip,String op) {
        if (ip.length()==0)
        {
            System.out.println(op); //at leaf node we can get all permutation
            return;
        }
        String op1=op; 
        String op2=op;
        op1+=ip.charAt(0); // we arae not including spaces in this choice
        op2=op2+'_'+ip.charAt(0);  // we are including spaces in this choice
        ip=ip.substring(1);  // we are removing 1 char from input
        subset(ip, op1);   
        subset(ip, op2);
    }
    public static void main(String[] args) {
        subset("BC", "A");
    }
    
}
