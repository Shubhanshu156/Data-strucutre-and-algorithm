
/**
 * j
 */
public class j {
    public static void main(String[] args) {
        Node head=new Node(10);
        head.next=new Node(20);
        head.next.next=new Node(30);
        System.out.println((search(head,50)));
        // display(head);

    }
    
    
    public static void display(Node head) {
        if (head==null) {
            return;
            
        }
        System.out.println(head.data);
        display(head.next);
        
    }
    
public static int search(Node head,int data){
    int pos=0;
    Node temp=head;
    while (temp.next!=null) {
        if (temp.data==data) {
            return pos;
            
        }
        temp=temp.next;
        pos+=1;
    
        
    } 
return -1;
    
}
    



}
/**
 * Innerj
 */
class Node {
    int data;
    Node next;
  Node(int dat) {
        data=dat;
        this.next=null;   
    }

    

    
}