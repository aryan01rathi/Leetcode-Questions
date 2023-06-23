ListNode *rotateRight(ListNode *head, int k)
{
    if (head == NULL || head->next == NULL)
        return head;
    int count = 0;
    ListNode *tmp = head;
    while (tmp != NULL)
    {
        tmp = tmp->next;
        count++;
    }
    if (k % count == 0)
        return head;
    else
    {
        k = k % count;
        for (int i = 0; i < k; i++)
        {
            ListNode *tmp1 = head;
            ListNode *tmp2 = head;
            while (tmp1->next != NULL)
            {
                tmp2 = tmp1;
                tmp1 = tmp1->next;
            }
            tmp2->next = tmp1->next;
            tmp1->next = head;
            head = tmp1;
        }
    } // O(n)+O(k*n)

    // try solving it by converting LL to Circular LL
}