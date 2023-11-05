  #include<bits/stdc++.h>  
    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    if(head== NULL|| head->next== NULL){
        return head;
    }
LinkedListNode<int> * curr= head;
LinkedListNode<int> * forward = NULL;
LinkedListNode<int> * prev = NULL;
while(curr != NULL){
    forward = curr->next;
    curr->next= prev;
    prev= curr;
    curr= forward;
}
head = prev;
return head;

}