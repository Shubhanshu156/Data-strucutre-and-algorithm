public class check_set_bit {
    public static void main(String[] args) {
        // we are taking 1(0000001) and left shifting it i time so 1 will come on ith bit 
        // then we are adding and operator to n and left shifted bit if ans is 0(as for and both should be 0)
        // ith bit is 0 else ith bit is 1

        int n=32;//check if 5th bit is 0 or 1
        int i=5;

        int a=1; // making 00001 
        a=a<<i;  // left shifting it i times
        // int z=a
        System.out.println(n&a);
    }
    
}
