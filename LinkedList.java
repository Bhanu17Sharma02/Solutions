class LinkedList {

  
  Node head;

  
  static class Node {
    int value;

   
    Node next;

    Node(int d) {
      value = d;
      next = null;
    }
  }
  
  public void reverse (Node prev,Node current)
	{
		if(current!=null)
		{
		  reverse(current,current.next);
		  current.next=prev;
		}
		else
			head=prev;
  

  }
  public static void main(String[] args) {

    // create an object of LinkedList
    LinkedList linkedList = new LinkedList();

    // assign values to each linked list node
    linkedList.head = new Node(1);
    Node second = new Node(2);
    Node third = new Node(3);

    // connect each node of linked list to next node
    linkedList.head.next = second;
    second.next = third;
     linkedList.reverse(null,linkedList.head);
    // printing node-value
    System.out.print("LinkedList: ");
    while (linkedList.head != null) {
      System.out.print(linkedList.head.value + " ");
      linkedList.head = linkedList.head.next;
    }
  }
}
