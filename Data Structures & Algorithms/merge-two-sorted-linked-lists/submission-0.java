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
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        
        ListNode list3;
        if(list1==null)
        {
            list3=list2;
            return list3;
        }
        else if(list2==null)
        {
            list3=list1;
            return list3;
        }


        if(list1.val<list2.val)
        {
            list3=list1;
            list1=list1.next;
        }
        else
        {
            list3=list2;
            list2=list2.next;
        }

        ListNode current = list3;
        while(list1 != null || list2 != null)
        {
            if(list1 == null)
            {
                current.next = list2;break;
            }
            if(list2 == null)
            {
                current.next = list1;break;
            }

            if(list1.val<list2.val)
            {
                current.next=list1;
                list1=list1.next;
            }
            else
            {
                current.next=list2;
                list2=list2.next;
            }
            current=current.next;
        }

        return list3;
    }
}