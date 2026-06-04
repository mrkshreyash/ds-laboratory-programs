# 📚 Data Structure Laboratory (UHSPC0224) Program Repository

A comprehensive collection of **C implementations** for fundamental data structures and algorithms. This repository is designed for students to understand core computer science concepts through practical, well-organized code examples.

> **Goal:** Master data structures and algorithms through hands-on C programming with real-world use cases.

---

**📌 Course Information:**

- **Subject:** Data Structure (UHSPC0224)
- **Author:** Shreyash A. Kamble
- **Repository:** [ds-laboratory-programs](https://github.com/mrkshreyash/ds-laboratory-programs.git)
- **Type:** Laboratory Programs & Academic Reference

---

## 📋 Table of Contents

1. [Prerequisites](#prerequisites)
2. [Getting Started](#getting-started)
3. [Repository Structure](#repository-structure)
4. [Topics Overview](#topics-overview)
   - [Arrays](#1-arrays)
   - [Recursion](#2-recursion)
   - [Structures](#3-structures)
   - [Stack](#4-stack)
   - [Queue](#5-queue)
   - [Linked Lists](#6-linked-lists)
   - [Linear Search](#7-linear-search)
   - [Binary Search](#8-binary-search)
   - [Bubble Sort](#9-bubble-sort)
   - [Selection Sort](#10-selection-sort)
   - [Insertion Sort](#11-insertion-sort)
5. [Learning Path](#learning-path)
6. [How to Compile & Run](#how-to-compile--run)
7. [Contributing](#contributing)
8. [Resources](#resources)

---

## Prerequisites

- **C Compiler**: GCC, Clang, or any C99-compliant compiler
- **Basic C Knowledge**: Variables, loops, functions, pointers
- **Code Editor**: VS Code, Sublime Text, or any text editor
- **Terminal/Command Prompt**: For compiling and running programs

### Installation

**On Ubuntu/Debian:**

```bash
sudo apt-get install build-essential
```

**On macOS:**

```bash
brew install gcc
```

**On Windows:**

- Install [MinGW](http://www.mingw.org/) or use [Dev C++](https://www.bloodshed.net/devcpp.html)

---

## Getting Started

1. **Clone the Repository:**

   ```bash
   git clone https://github.com/mrkshreyash/ds-laboratory-programs.git
   cd ds-laboratory-programs
   ```

2. **Navigate to a Topic:**

   ```bash
   cd "01 Arrays"
   ```

3. **Compile a Program:**

   ```bash
   gcc -o program_name filename.c
   ```

4. **Run the Program:**
   ```bash
   ./program_name
   ```

---

## Topics Overview

### 1. Arrays

**What You'll Learn:**

- Basic array operations (addition, subtraction, multiplication)
- Dynamic memory allocation for arrays
- Array traversal and manipulation

| Program              | File                                                   | Concept                        |
| -------------------- | ------------------------------------------------------ | ------------------------------ |
| Array Addition       | [01_Addition.c](01%20Arrays/01_Addition.c)             | Adding two arrays element-wise |
| Array Subtraction    | [02_Subtraction.C](01%20Arrays/02_Subtraction.C)       | Subtracting arrays             |
| Array Multiplication | [03_Multiplication.c](01%20Arrays/03_Multiplication.c) | Element-wise multiplication    |
| Dynamic Array        | [04_Dynamic_Array.c](01%20Arrays/04_Dynamic_Array.c)   | Runtime memory allocation      |

**Time Complexity:** O(n) for most operations

**Key Takeaway:** Understand array fundamentals and memory management.

---

### 2. Recursion

**What You'll Learn:**

- Recursive function calls and base cases
- Stack overflow prevention
- Converting problems into recursive solutions
- The two golden rules of recursion

| Program                | File                                                                                                  | Concept                                  |
| ---------------------- | ----------------------------------------------------------------------------------------------------- | ---------------------------------------- |
| Decimal to Binary      | [01_Decimal_to_Binary.c](02%20Recursion/01_Decimal_to_Binary.c)                                       | Number system conversion using recursion |
| Sum of First N Numbers | [02_Sum_of_first_n_numbers.c](02%20Recursion/02_Sum_of_first_n_numbers.c)                             | Mathematical series calculation          |
| Factorial              | [03_Factorial.c](02%20Recursion/03_Factorial.c)                                                       | Classic recursive example                |
| Fibonacci Sequence     | [04_Fibonacci.c](02%20Recursion/04_Fibonacci.c)                                                       | Exponential time complexity issue        |
| Golden Rules           | [The Two Golden Rules of Recursion.md](02%20Recursion/The%20Two%20Golden%20Rules%20of%20Recursion.md) | Essential recursion principles           |

**Time Complexity:** Varies (Factorial: O(n), Fibonacci: O(2ⁿ) without memoization)

**Key Takeaway:** Every recursive function needs a base case and must move toward it.

---

### 3. Structures

**What You'll Learn:**

- User-defined data types
- Pointer-to-structure usage
- Memory layout of structures

| Program               | File                                                                    | Concept                                   |
| --------------------- | ----------------------------------------------------------------------- | ----------------------------------------- |
| Non-Pointer Structure | [01_Non_pointer_structure.c](03%20Structure/01_Non_pointer_structure.c) | Direct structure usage                    |
| Pointer Structure     | [02_Pointer_structure.c](03%20Structure/02_Pointer_structure.c)         | Structure pointers and dynamic allocation |

**Time Complexity:** O(1) for structure access

**Key Takeaway:** Structures form the foundation for complex data structures like stacks and queues.

---

### 4. Stack

**What You'll Learn:**

- LIFO (Last-In-First-Out) principle
- Stack operations: push, pop, peek
- Static vs. dynamic implementation
- Stack applications (expression evaluation, backtracking)

| Program                 | File                                                                    | Concept                      | Time Complexity |
| ----------------------- | ----------------------------------------------------------------------- | ---------------------------- | --------------- |
| Static Stack            | [01_Static_Stack.c](04%20Stack/01_Static_Stack.c)                       | Fixed-size array-based stack | O(1)            |
| Dynamic Stack           | [02_Dynamic_Stack.c](04%20Stack/02_Dynamic_Stack.c)                     | Growing array implementation | O(1) amortized  |
| Stack using Linked List | [03_Stack_using_linked_list.c](04%20Stack/03_Stack_using_linked_list.c) | Node-based stack             | O(1)            |

**Use Cases:**

- Browser back/forward navigation
- Undo/Redo functionality
- Expression evaluation (infix to postfix)
- Depth-First Search (DFS)

**Key Takeaway:** Stacks enforce order; perfect for "remember and revert" scenarios.

---

### 5. Queue

**What You'll Learn:**

- FIFO (First-In-First-Out) principle
- Queue operations: enqueue, dequeue, peek
- Circular queue implementation (avoids wasted space)
- Queue applications

| Program                 | File                                                                    | Concept                      | Time Complexity |
| ----------------------- | ----------------------------------------------------------------------- | ---------------------------- | --------------- |
| Static Queue            | [01_Static_Queue.c](05%20Queue/01_Static_Queue.c)                       | Fixed-size array-based queue | O(1)            |
| Circular Queue          | [02_Circular_Queue.c](05%20Queue/02_Circular_Queue.c)                   | Optimized space utilization  | O(1)            |
| Queue using Linked List | [03_Queue_using_linked_list.c](05%20Queue/03_Queue_using_linked_list.c) | Node-based queue             | O(1)            |

**Use Cases:**

- Printer job scheduling
- Customer service systems
- Breadth-First Search (BFS)
- Task scheduling in operating systems

**Key Takeaway:** Queues ensure fair ordering; essential for task management systems.

---

### 6. 🔗 Linked Lists

**What You'll Learn:**

- Node-based data structure
- Pointer manipulation
- Different linked list variations
- Advantages over arrays (dynamic size, efficient insertion/deletion)

| Program              | File                                                                                    | Concept                   | Operations                 |
| -------------------- | --------------------------------------------------------------------------------------- | ------------------------- | -------------------------- |
| Singly Linked List   | [01_Singly_linked_list.c](06%20Linked%20LIst/01_Singly_linked_list.c)                   | Forward traversal only    | Insert: O(n), Delete: O(n) |
| Doubly Linked List   | [02_Doubly_linked_list.c](06%20Linked%20LIst/02_Doubly_linked_list.c)                   | Bidirectional traversal   | Insert: O(n), Delete: O(n) |
| Singly Circular List | [03_Singly_circular_linked_list.c](06%20Linked%20LIst/03_Singly_circular_linked_list.c) | Last node points to first | Insert: O(n), Delete: O(n) |
| Doubly Circular List | [04_Doubly_circular_linked_list.c](06%20Linked%20LIst/04_Doubly_circular_linked_list.c) | Circular + bidirectional  | Insert: O(n), Delete: O(n) |

**When to Use:**

- Unknown size at compile time
- Frequent insertions/deletions in the middle
- Memory-efficient operations

**Key Takeaway:** Linked lists sacrifice random access for flexible size and efficient modifications.

---

### 7. Linear Search

**What You'll Learn:**

- Sequential search technique
- Suitable for unsorted data
- Real-world applications

| Program               | File                                                                    | Concept                         | Time Complexity |
| --------------------- | ----------------------------------------------------------------------- | ------------------------------- | --------------- |
| Linear Search         | [Linear_Search.c](07%20Linear%20Search/Linear_Search.c)                 | Basic sequential search         | O(n)            |
| Finding Highest Sales | [Finding_highest_sales.c](07%20Linear%20Search/Finding_highest_sales.c) | Real-world business application | O(n)            |

**Use Cases:**

- Searching in unsorted arrays
- Small datasets where sorting overhead isn't justified
- Finding maximum/minimum values

**Best For:** Small datasets or unsorted data

**Key Takeaway:** Simple but slow; acceptable for small datasets.

---

### 8. Binary Search

**What You'll Learn:**

- Divide-and-conquer approach
- Requirements: sorted data
- Significantly faster than linear search
- Real-world applications

| Program           | File                                                            | Concept                         | Time Complexity |
| ----------------- | --------------------------------------------------------------- | ------------------------------- | --------------- |
| Binary Search     | [Binary_Search.c](08%20Binary%20Search/Binary_Search.c)         | Classic binary search algorithm | O(log n)        |
| Square Root       | [Sqaure_root.c](08%20Binary%20Search/Sqaure_root.c)             | Finding perfect square roots    | O(log n)        |
| Student ID Lookup | [Student_ID_Lookup.c](08%20Binary%20Search/Student_ID_Lookup.c) | Practical database lookup       | O(log n)        |

**Comparison:** For 1 million elements:

- Linear Search: ~500,000 comparisons (average)
- Binary Search: ~20 comparisons

**Prerequisites:** Data must be sorted

**Key Takeaway:** If data is sorted, binary search is exponentially faster.

---

### 9. Bubble Sort

**What You'll Learn:**

- Comparison-based sorting
- Simple but inefficient algorithm
- Understanding sorting fundamentals

| Program                  | File                                                              | Concept                        | Time Complexity |
| ------------------------ | ----------------------------------------------------------------- | ------------------------------ | --------------- |
| Bubble Sort (Ascending)  | [Bubble_Sort_asc.c](09%20Bubble%20Sort/Bubble_Sort_asc.c)         | Sorting in ascending order     | O(n²)           |
| Bubble Sort (Descending) | [Bubble_sort_desc.c](09%20Bubble%20Sort/Bubble_sort_desc.c)       | Sorting in descending order    | O(n²)           |
| Leaderboard Ranking      | [Leaderboard_ranking.c](09%20Bubble%20Sort/Leaderboard_ranking.c) | Real-world sorting application | O(n²)           |

**How It Works:**

- Compare adjacent elements
- Swap if in wrong order
- Repeat until no swaps needed

**When to Use:** Small datasets or nearly sorted data

**Key Takeaway:** Easy to understand but inefficient for large datasets.

---

### 10. Selection Sort

**What You'll Learn:**

- Dividing array into sorted and unsorted portions
- Two approaches: min and max methods
- Practical sorting scenarios

| Program                     | File                                                                             | Concept                             | Time Complexity |
| --------------------------- | -------------------------------------------------------------------------------- | ----------------------------------- | --------------- |
| Selection Sort (Min Method) | [Selection_sort_min_method.c](10%20Selection%20Sort/Selection_sort_min_method.c) | Find minimum and place at beginning | O(n²)           |
| Selection Sort (Max Method) | [Selection_sort_max_method.c](10%20Selection%20Sort/Selection_sort_max_method.c) | Find maximum and place at end       | O(n²)           |
| Sort Inventory by Price     | [Sort_inventory_by_price.c](10%20Selection%20Sort/Sort_inventory_by_price.c)     | E-commerce sorting use case         | O(n²)           |

**Advantage Over Bubble Sort:**

- Fewer writes to memory
- Better for datasets with expensive write operations

**Key Takeaway:** Better than bubble sort but still O(n²).

---

### 11. Insertion Sort

**What You'll Learn:**

- Sorting by inserting elements into sorted position
- Efficient for small datasets
- Online sorting (can sort while receiving data)

| Program               | File                                                                     | Concept                        | Time Complexity          |
| --------------------- | ------------------------------------------------------------------------ | ------------------------------ | ------------------------ |
| Insertion Sort        | [Insertion_sort.c](11%20Insertion%20Sort/Insertion_sort.c)               | Basic insertion sort algorithm | O(n²) average, O(n) best |
| Sort Live Stream Data | [Sort_live_stream_data.c](11%20Insertion%20Sort/Sort_live_stream_data.c) | Real-time data sorting         | O(n²)                    |

**When Insertion Sort Shines:**

- Nearly sorted data (O(n) complexity)
- Online sorting
- Small datasets
- Used as sub-algorithm in hybrid sorts (Timsort)

**Key Takeaway:** Good for small or nearly sorted datasets.

---

## Learning Path

### **Beginner Path** (Start here!)

1. **Arrays** - Understand basic data structure
2. **Structures** - Learn custom data types
3. **Linear Search** - Understand basic algorithm
4. **Bubble Sort** - Learn sorting concepts

### **Intermediate Path**

5. **Recursion** - Master recursive thinking
6. **Stack** - Learn LIFO principle
7. **Queue** - Learn FIFO principle
8. **Selection Sort** - Efficient sorting
9. **Binary Search** - Advanced searching

### **Advanced Path**

10. **Linked Lists** - Complex pointer operations
11. **Insertion Sort** - Fine-tuned sorting
12. **Algorithm Analysis** - Compare and optimize

---

## Tips for Learning

**Do's:**

- Write code from scratch; don't just copy-paste
- Trace through code execution manually
- Modify programs and observe behavior changes
- Test with edge cases (empty array, single element, etc.)
- Understand time and space complexity

**Don'ts:**

- Skip understanding the algorithms
- Only read without implementing
- Ignore compilation warnings
- Forget about memory management in dynamic programs

---

## Common Errors & Solutions

| Error                           | Cause                        | Solution                          |
| ------------------------------- | ---------------------------- | --------------------------------- |
| `undefined reference to 'main'` | Missing main function        | Ensure `int main()` exists        |
| `Segmentation fault`            | Invalid memory access        | Check array bounds and pointers   |
| `Buffer overflow`               | Writing beyond array limits  | Validate array indices            |
| `Memory leak`                   | Not freeing allocated memory | Use `free()` for every `malloc()` |

---

## Contributing

Want to improve this repository? Contributions are welcome!

1. **Fork the repository**
2. **Create a feature branch:** `git checkout -b feature/add-merge-sort`
3. **Add well-commented code**
4. **Update relevant documentation**
5. **Commit with clear messages:** `git commit -m "Add merge sort implementation"`
6. **Push to branch:** `git push origin feature/add-merge-sort`
7. **Submit a Pull Request**

### Contribution Guidelines:

- Code must compile without warnings
- Include comments explaining complex logic
- Add example programs or test cases
- Update README with new additions
- Follow existing code style

---

## Resources

### Books

- **"Introduction to Algorithms"** by CLRS
- **"The C Programming Language"** by Kernighan & Ritchie

### Online Resources

- [GeeksforGeeks - Data Structures](https://www.geeksforgeeks.org/data-structures/)
- [Visualgo.net](https://visualgo.net/) - Algorithm visualizations
- [LeetCode](https://leetcode.com/) - Practice coding problems
- [HackerRank](https://www.hackerrank.com/) - Coding challenges

### Video Tutorials

- [MIT OpenCourseWare - Introduction to Algorithms](https://ocw.mit.edu/)

### Development Tools

- **VS Code Extensions:** C/C++ by Microsoft, Code Runner
- **Online Compilers:** [Online-C.com](https://www.online-c.com/), [Replit](https://replit.com/)
- **Debugging Tools:** GDB, Valgrind (memory leak detection)

---

## Time Complexity Quick Reference

| Structure/Algorithm | Operation       | Complexity |
| ------------------- | --------------- | ---------- |
| Array               | Access          | O(1)       |
| Array               | Search          | O(n)       |
| Array               | Insert          | O(n)       |
| Array               | Delete          | O(n)       |
| Stack               | Push/Pop/Peek   | O(1)       |
| Queue               | Enqueue/Dequeue | O(1)       |
| Linked List         | Access          | O(n)       |
| Linked List         | Insert/Delete   | O(1)\*     |
| Linear Search       | Search          | O(n)       |
| Binary Search       | Search          | O(log n)   |
| Bubble Sort         | Sort            | O(n²)      |
| Selection Sort      | Sort            | O(n²)      |
| Insertion Sort      | Sort            | O(n²)      |

\*O(1) if position is known, O(n) otherwise

---

## License

This repository is open-source and available for educational purposes. It is part of the Data Structure (UHSPC0224) laboratory program curriculum.

---

## Support

If you find this repository helpful:

- ⭐ **Star the repository** on GitHub
- 🔗 **Share it** with other students
- 💬 **Contribute** improvements

---

## Contact & Feedback

Have questions, suggestions, or found an issue? Feel free to:

- Open an issue on GitHub
- Submit a pull request with improvements
- Share your feedback

---

**Happy Learning!**

---

## 📖 Course & Author Details

| Property         | Details                                                                  |
| ---------------- | ------------------------------------------------------------------------ |
| **Subject Code** | UHSPC0224                                                                |
| **Subject Name** | Data Structure                                                           |
| **Author**       | Shreyash A. Kamble                                                       |
| **Repository**   | [GitHub Link](https://github.com/mrkshreyash/ds-laboratory-programs.git) |
| **Type**         | Laboratory Programs                                                      |
| **Language**     | C                                                                        |
| **Last Updated** | 2026                                                                     |

_Maintained by [Shreyash A. Kamble](https://github.com/mrkshreyash) for academic and learning purposes._

---

### Quick Navigation

- [Arrays 📊](01%20Arrays/)
- [Recursion 🔄](02%20Recursion/)
- [Structures 🏗️](03%20Structure/)
- [Stack 📦](04%20Stack/)
- [Queue 🔁](05%20Queue/)
- [Linked Lists 🔗](06%20Linked%20LIst/)
- [Linear Search 🔍](07%20Linear%20Search/)
- [Binary Search 🎯](08%20Binary%20Search/)
- [Bubble Sort 🔄](09%20Bubble%20Sort/)
- [Selection Sort ⚙️](10%20Selection%20Sort/)
- [Insertion Sort 📈](11%20Insertion%20Sort/)
