class ListNode {
    int val;
    ListNode next;
    ListNode(int x) {
        val = x;
        next = null;
    }
}

public class LinkedListCycleStart {
    public ListNode detectCycle(ListNode head) {
        ListNode slow = head;
        ListNode fast = head;
        boolean hasCycle = false;

        // Check if there's a cycle
        while (fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;
            if (slow == fast) {
                hasCycle = true;
                break;
            }
        }

        // If there's no cycle, return null
        if (!hasCycle) {
            return null;
        }

        // Find the start of the cycle
        slow = head;
        while (slow != fast) {
            slow = slow.next;
            fast = fast.next;
        }

        return slow;
    }

    public static void main(String[] args) {
        LinkedListCycleStart solution = new LinkedListCycleStart();

        // Example 1
        ListNode head = new ListNode(3);
        head.next = new ListNode(1);
        head.next.next = new ListNode(0);
        head.next.next.next = new ListNode(-4);
        head.next.next.next.next = head.next; // Creating a cycle

        ListNode cycleStart = solution.detectCycle(head);
        if (cycleStart != null) {
            System.out.println("tail connects to node index : " + cycleStart.val);
        } else {
            System.out.println("No cycle found.");
        }
    }
}
