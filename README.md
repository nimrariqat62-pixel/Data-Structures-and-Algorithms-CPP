
🚀 Data Structures & Algorithms (DSA) in C++
An optimized, production-ready repository of core computer science algorithms and data structures implemented in clean C++.
Developed with a strong focus on algorithmic efficiency, memory management, and time/space complexity analysis to meet rigorous academic and research standards.
📌 Overview
This repository demonstrates rigorous problem-solving skills, computational thinking, and deep understanding of memory architectures. Key focus areas include:
 * Object-Oriented Design: Clean encapsulation, modular code structure, and abstraction.
 * Resource Management: Efficient use of pointers, dynamic memory allocation, and avoiding memory leaks.
 * Complexity Analysis: Comprehensive Big-O asymptotic analysis (\mathcal{O}(1) to \mathcal{O}(N!)) for every implementation.
📂 Repository Structure
├── 01-Linear-Data-Structures/
│   ├── Arrays/
│   ├── Linked-Lists/       # Singly, Doubly, & Circular Linked Lists
│   ├── Stacks-and-Queues/
│   └── Vector-Implementations/
├── 02-Non-Linear-Data-Structures/
│   ├── Binary-Trees/       # Traversal, Balancing, BST
│   ├── Heaps/              # Min-Heap, Max-Heap, Priority Queues
│   └── Graphs/             # Adjacency List/Matrix, BFS, DFS
├── 03-Algorithms/
│   ├── Sorting/            # Quick Sort, Merge Sort, Heap Sort
│   ├── Searching/          # Binary Search, Ternary Search
│   └── Graph-Algorithms/   # Dijkstra, Prim's, Kruskal's
├── 04-Problem-Solving/
│   └── LeetCode-Solutions/ # Optimized solutions with complexity analysis
└── README.md

⚡ Featured Implementations & Benchmarks
| Data Structure / Algorithm | Time Complexity (Best) | Time Complexity (Worst) | Space Complexity | Focus Area |
|---|---|---|---|---|
| Quick Sort | \mathcal{O}(N \log N) | \mathcal{O}(N^2) | \mathcal{O}(\log N) | In-place partitioning |
| Merge Sort | \mathcal{O}(N \log N) | \mathcal{O}(N \log N) | \mathcal{O}(N) | Divide and Conquer |
| Binary Search Tree | \mathcal{O}(1) | \mathcal{O}(N) | \mathcal{O}(N) | Dynamic Set Operations |
| Dijkstra's Algorithm | \mathcal{O}((V + E) \log V) | \mathcal{O}((V + E) \log V) | \mathcal{O}(V) | Shortest Path Optimization |
🛠️ Code Sample Example
Custom Doubly Linked List Node (C++)
#include <iostream>

template <typename T>
class Node {
public:
    T data;
    Node* next;
    Node* prev;

    // Constructor
    Node(T val) : data(val), next(nullptr), prev(nullptr) {}
};

⚙️ How to Compile and Run
Ensure you have a C++17 compatible compiler (g++ or clang++).
# Clone the repository
git clone https://github.com/your-username/DSA-CPP-Practice.git

# Navigate to the project directory
cd DSA-CPP-Practice/01-Linear-Data-Structures/Arrays

# Compile using g++
g++ -std=c++17 main.cpp -o output

# Run executable
./output

🎯 Target Goals & Academic Ambitions
 * [x] Complete fundamentals of linear and non-linear data structures.
 * [x] Implement standard graph algorithms for complex network analysis.
 * [ ] Solve 300+ competitive programming challenges on LeetCode/Codeforces.
 * [ ] Apply algorithmic optimization to AI & Machine Learning applications in future research studies.
🛠️ Tech Stack & Tools
 * Language: C++17 / C++20
 * Build System: CMake / Makefiles
 * Environment: Linux (Ubuntu) / Visual Studio Code
 * Version Control: Git & GitHub
💬 Contact Information
 * Name: Nimra riqat
 * Email: nimrariqat62@gmail.com
 * Portfolio: nimrariqat62-pixel 
💡 Tips for South Korean Professors:
 * Academic Precision: Highlight Big-O notation (\mathcal{O}) clearly. Korean CS labs highly value strong mathematical and efficiency fundamentals.
 * Clean Markdown: Keep commit messages clear (e.g., feat: implement Dijkstra graph algorithm).
 * Visual Appeal: Maintain clean tables, clear tree structures, and concise badges at the top if desired.


