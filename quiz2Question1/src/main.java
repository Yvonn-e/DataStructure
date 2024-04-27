public class main {
    public static void main(String[] args) {
    // Create the linked list of example 1
    ListNode head = new ListNode(3);
    ListNode second = new ListNode(2);
    ListNode third = new ListNode(0);
    ListNode fourth = new ListNode(-4);

    head.next = second;
    second.next = third;
    third.next = fourth;
    // Create the cycle. point the last node to the second node
    fourth.next = second;

    LinkedListCycle solution = new LinkedListCycle();
    boolean hasCycle = solution.hasCycle(head);
    System.out.println("Output: " + hasCycle);
}
}
