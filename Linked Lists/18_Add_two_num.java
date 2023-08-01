/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
      
        return helper(l1, l2, 0);
        
    }
    
    private ListNode helper(ListNode l1, ListNode l2, int carry){
        
        if(l1 == null && l2 == null && carry == 0)
            return null;
        ListNode list = new ListNode();
        
        int a = l1 == null ? 0 : l1.val;
        int b = l2 == null ? 0 : l2.val;
        
        int sum = carry + a + b;
        
        list.val = sum%10;
        carry = sum/10;
        
        l1 = l1 == null ? l1 : l1.next;
        l2 = l2 == null ? l2 : l2.next;
        
        list.next = helper(l1, l2, carry);
        return list;
    }
}