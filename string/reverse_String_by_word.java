public class answer {
    public static void main(String[] args) {
        //logic is first reverse each word
        //then reverse entire string
        StringBuffer a=new StringBuffer();
        a.append("welcome to vscode");
        reverse_words(a);
        System.out.println(a);

    }
    public  static StringBuffer reverse_words(StringBuffer str) {
        int start=0;
        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i)==' ' || i==str.length()-1) {
    
                int end=i;
                if (i==str.length()-1) {
                    end=i+1;
                    
                }
                // System.out.println(str);
                reverse_string(str,start,end);
                start=end+1;
            }
            
        }
        str.reverse();
        return str;
        
    }
    public static void reverse_string(StringBuffer a,int start,int end) {
        while(start<end) {

            char temp=a.charAt(start);
            // System.out.println(a+" "+temp);
            a.replace(start, start+1, String.valueOf(a.charAt(end-1)));
            a.replace(end-1, end, String.valueOf(temp));
            start++;
            end--;
        }
        // System.out.println("stringis "+start+end);

        
    }
   
}
