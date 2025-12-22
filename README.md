## 🧠📦 DSA_using_C

**DSA_using_C** is a systems-focused Data Structures & Algorithms repository written entirely in **pure C**.
All structures are implemented from scratch with explicit pointer manipulation, manual memory management, and invariant correctness.

The goal is not API usage, but **learning how data structures actually work in memory**, preparing for open-source C contributions, GSoC, and systems-oriented FAANG roles.

---

## ⚙️ Build & Run

From the `linkedlist_stack_queue` directory:

```bash

gcc ^
main.c ^
sll.c ^
dll.c ^
circular_queue.c ^
..\trees\binary_search_tree.c ^
..\expression_evaluation\infix_to_postfix.c ^
..\expression_evaluation\postfix_evaluation.c ^
..\expression_evaluation\stack.c ^
-I. ^
-I..\trees ^
-I..\expression_evaluation ^
-o main.exe

```

This project is intentionally compiled using **explicit multi-file compilation and linking** to reinforce understanding of translation units, include paths, and linker behavior.

---

## 🧩 Core Focus Areas

* Modular C design using `.h` / `.c` separation
* Pointer semantics and pointer-to-pointer usage
* Dynamic memory allocation (`malloc` / `free`)
* Ownership, lifetime, and NULL-safety reasoning
* Debugging compilation and linker errors

---

## 🧱 Implemented Data Structures

**Singly Linked List**
Full CRUD operations, pointer-based reversal, correct head manipulation, and edge-case handling.

**Doubly Linked List**
Bidirectional traversal with strict `prev` / `next` invariant maintenance and safe deletions.

**Stack (Linked List Based)**
Abstracted over a singly linked list with `push`, `pop`, `peek`, `isEmpty`, and `destroyStack`.

**Circular Queue (Array Based)**
Fixed-size implementation using modulo arithmetic, maintaining a one-empty-slot invariant to distinguish full vs empty states.

**Binary Search Tree (BST)**
Recursive insertion, in-order / pre-order / post-order traversals, and node counting.

---

## 🔢 Expression Parsing

* **Infix → Postfix conversion** using a stack
* **Postfix evaluation** with safe operand handling

Focus is on operator precedence, associativity, and stack discipline.

---

## 🧪 Testing Philosophy

All structures are tested via **console-based dispatcher programs**, with emphasis on:

* Empty and single-element cases
* Overflow / underflow behavior
* Pointer safety and memory cleanup

Reasoning precedes execution.

---

## 👤 Author

**Darshan Parekh**
B.Sc. Computer Science
Systems programming • Open-source • Cybersecurity 🚀