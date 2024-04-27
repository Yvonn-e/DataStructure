public class example3 {    public static void main(String[] args) {

        ListNode head = new ListNode(1);

        head.next = null;

    LinkedListCycle solution = new LinkedListCycle();
    boolean hasCycle = solution.hasCycle(head);
    System.out.println("Output: " + hasCycle);
}
}
