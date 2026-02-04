# 🔗 Linked List in C++ (Data Structure)

A **Linked List** is a linear data structure where elements (called **nodes**) are stored in **non-contiguous memory**.  
Each node contains:
1. **Data** (the value)
2. **Next pointer** (address of the next node)

Linked Lists are useful when you need **dynamic memory allocation** and frequent **insertions/deletions**.

---

## ✅ Types of Linked Lists

### 1) Singly Linked List
- Each node points to the next node only.
- Traversal is forward only.

### 2) Doubly Linked List
- Each node points to both next and previous nodes.
- Traversal is forward and backward.

### 3) Circular Linked List
- Last node points back to the first node.

---

## ⭐ Advantages of Linked List
- Dynamic size (can grow or shrink during runtime)
- Easy insertion and deletion (no shifting like arrays)
- Efficient memory usage for unknown size data

---

## ❌ Disadvantages of Linked List
- Uses extra memory for pointers
- No direct access (like array index) — must traverse
- Searching is slower compared to arrays

---
---

## 🔧 Common Operations
✅ 1. Insert at Beginning

-Add a new node at the start.

✅ 2. Insert at End

-Add a new node at the end.

✅ 3. Delete a Node

-Remove a node by value.

✅ 4. Display List

-Print all nodes.

✅ 5. Search

-Find if a value exists in the list.



## 🧠 Node Structure (Singly Linked List)

```cpp
struct Node {
    int data;
    Node* next;
};



