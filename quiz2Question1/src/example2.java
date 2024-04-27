public class example2 {
    public static void main(String[] args) {

        ListNode head = new ListNode(1);
        ListNode second = new ListNode(2);

        head.next = second;
        second.next = head;

    LinkedListCycle solution = new LinkedListCycle();
    boolean hasCycle = solution.hasCycle(head);
    System.out.println("Output: " + hasCycle);
}
}
