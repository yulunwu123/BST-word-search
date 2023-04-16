# Binary Search Tree implementation in C++


## Overview

This is a C++ implementation of a binary search tree (BST) data structure using a recursive approach, where each node is treated as the root of a subtree.

The time complexity of searching for a word in the tree is expected to  be O(log n), where n is the number of nodes. In case of unbalanced tree, the runtime could be as bad as O(n).

## Usage
I have included some driver code ```BSTPathTest.cpp``` that utilizes this implementation to do word-searching. 

The provided testing program takes input via command line, with the first word being the command ('I' - insert, 'R' - remove, 'L' - look up), and the second word being each tree node value.
It prints out the path to the target word and the number of nodes took to find it.
It runs indefinitely until error in the input stream, or ^D, or being terminated by ^C.

### Example Compiling and Run
``` 
make

./a.out
I We
I can't
I solve
I problems
I by
I using
I the
I same
I kind
I of
I thinking
I we
I used
I when
I we
I created
I them
I -Albert
I Einstein
L created
```

The output would be: 
```
BST path: We can't solve problems kind created
BST numNodes: 18
```

There are three test files you can use as input (and their corresponding expected output): 
``` testfile1.txt testfile2.txt testfile3.txt ```

The driver code can easily be modified to be more graceful, but the current version has all the necessities to
test the implementation.





