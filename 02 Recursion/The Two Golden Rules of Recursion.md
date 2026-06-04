Recursion is often described as a "mirror looking into a mirror." In programming, it’s simply a function that **calls itself** to solve a smaller version of the same problem.

### The Two Golden Rules of Recursion

To avoid a "Stack Overflow" (where your program runs forever and crashes), every recursive function needs:

1. **The Base Case:** The simplest possible version of the problem where you stop and return a value (the "exit door").
2. **The Recursive Step:** Where the function calls itself with a slightly smaller input, moving closer to the base case.

---
