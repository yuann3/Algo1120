#include <iostream>
#include "ListNode.hpp"

template<typename T>
class Solution
{
public:
    ListNode<T> *reverseList(ListNode<T> *head)
    {
        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode<T> *prev = nullptr;
        ListNode<T> *curr = head;

        while (curr != nullptr)
        {
            ListNode<T> *temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
};

int main() {
    // Create a linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode<int> *head = new ListNode<int>(1);
    head->next = new ListNode<int>(2);
    head->next->next = new ListNode<int>(3);
    head->next->next->next = new ListNode<int>(4);
    head->next->next->next->next = new ListNode<int>(5);

    // Print the original linked list
    std::cout << "Original linked list: ";
    ListNode<int> *curr = head;
    while (curr != nullptr) {
        std::cout << curr->val << " ";
        curr = curr->next;
    }
    std::cout << std::endl;

    // Create a Solution object
    Solution<int> solution;

    // Reverse the linked list
    ListNode<int> *reversed = solution.reverseList(head);

    // Print the reversed linked list
    std::cout << "Reversed linked list: ";
    curr = reversed;
    while (curr != nullptr) {
        std::cout << curr->val << " ";
        curr = curr->next;
    }
    std::cout << std::endl;

    // Clean up the memory
    while (reversed != nullptr) {
        ListNode<int> *temp = reversed;
        reversed = reversed->next;
        delete temp;
    }

    return 0;
}
