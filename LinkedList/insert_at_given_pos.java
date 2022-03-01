
/**
 * j
 */
public class j {
    public static void main(String[] args) {
        Node head=new Node(10);
        head.next=new Node(20);
        head.next.next=new Node(30);
        display(insert(head,5,55));
        // display(head);

    }
    
    
    public static void display(Node head) {
        if (head==null) {
            return;
            
        }
        System.out.println(head.data);
        display(head.next);
        
    }
    
public static Node insert(Node head,int pos,int data){

    Node temp=head;
    if (pos==0) {
        Node temp2=new Node(data);
        temp2.next=head;
        return temp2;

        
    }
    pos-=1;
    int cnt=0;
    while (temp.next!=null) {
        if (cnt==pos) {
            Node temp2=new Node(data);
            temp2.next=temp.next;
            temp.next=temp2;
            break;
        }
        temp=temp.next;
        cnt+=1;


        
    }
    return head;

    
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