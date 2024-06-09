#ifndef LISTNODE_HPP
#define LISTNODE_HPP

template<typename T>
class ListNode {
public:
  T val;                  // The value stored in the node
  ListNode<T> *next;      // Pointer to the next node in the linked list

  // Default constructor
  ListNode() : val(0), next(nullptr) {}

  // Constructor with a value parameter
  ListNode(T x) : val(x), next(nullptr) {}

  // Constructor with a value parameter and a pointer to the next node
  ListNode(T x, ListNode<T> *next) : val(x), next(next) {}
};

#endif
