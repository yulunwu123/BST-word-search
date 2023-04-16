a.out: BinarySearchTree.o BinaryNode.o BSTPathTest.o
	clang++ BinarySearchTree.o BinaryNode.o BSTPathTest.o -o a.out

BinarySearchTree.o: BinarySearchTree.h BinarySearchTree.cpp
	clang++ -c -Wall -O2 BinarySearchTree.cpp

BinaryNode.o: BinaryNode.h BinaryNode.cpp
	clang++ -c -Wall -O2 BinaryNode.cpp

BSTPathTest.o: BSTPathTest.cpp
	clang++ -c -Wall -O2 BSTPathTest.cpp

clean:
		rm *.o a.out