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
        display(reverse(head));

    }
    public static void display(Node head) {
        while (head!=null) {
            System.out.println(head.data);
            head=head.next;
            
        }
        
    }
    public static Node reverse(Node header) {
        if (header==null || header.next==null) {
            return header;
            
        }
        Node curr=header;Node prev=null;
        while (curr!=null) {
            prev=curr.prev;
            curr.prev=curr.next;
            curr.next=prev;
            curr=curr.prev;// imp here as we have swapped so to get next node use node.prev
        }
        return prev.prev;    // as prev will store second last element so to get last element use prev.prev bcs swappnig

        
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