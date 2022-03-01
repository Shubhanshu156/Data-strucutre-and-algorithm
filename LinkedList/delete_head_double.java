import javax.swing.plaf.ColorUIResource;

/**
 * j
 */
public class j {    
    public static void main(String[] args) {
        Node head=new Node(10);
        Node temp1=new Node(20);
        Node temp2=new Node(30);
        head.next=temp1;
        temp1.prev=head;
        temp1.next=temp2;
        temp2.prev=temp1;
        
        // display(head);
        display(delete_head(head));

    }
    public static void display(Node head) {
        while (head!=null) {
            System.out.println(head.data);
            head=head.next;
            
        }
        
    }
    public static Node delete_head(Node header) {
        if (header==null || header.next==null) {
            return null;
            
        }
        header.next.prev=null;
        return header.next;
        
    }
}
class Node {
    int data;
    Node next;
    Node prev;
  Node(int dat) {
        data=dat;
        this.next=null;   
        this.prev=null;
    }    
}