public class print_subset {
    // if you want all unique then store in map and check every time
    public static void subset(String ip,String op) {
        if (ip.length()==0)
        {
            System.out.println(op); //at leaf node we can get all permutation
            return;
        }
        String op1=op; // we are not including char
        String op2=op;
        op2=op2+'_'+ip.charAt(0);  // we are including char
        ip=ip.substring(1);  // we are removing 1 char from input
        subset(ip, op1);   
        subset(ip, op2);
    }
    public static void main(String[] args) {
        subset("ello", "h");
    }
    
}
