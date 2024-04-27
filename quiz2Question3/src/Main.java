// QUIZ 2 Question 3
class ListNode {
    int val;
    ListNode next;
    ListNode prev;

    ListNode(int x) {
        val = x;
        next = null;
        prev = null;
    }
}
public class Main {

    public ListNode reverseList(ListNode head) {
        ListNode prev = null;
        ListNode curr = head;
        ListNode next = null;

        while (curr != null) {
            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

}