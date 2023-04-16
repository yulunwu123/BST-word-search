#include "BinarySearchTree.h"

#include <iostream>
using namespace std;

int main()
{
    BinarySearchTree bst;
    
    /*
        The program takes input via command line, 
        with the first word being the command ('I' - insert, 'R' - remove, 'L' - look up)
        and the second word being each tree node value.

        It prints out the path to the looked-up word and the number of nodes took to find it.
        
        The programs runs indefinitely until error in the input stream, or ^D, 
        or being terminated by ^C.
    */
    while (cin.good())
    {
        string instr, word;
        cin >> instr;
        cin >> word;
        if (instr == "I")
        {
            bst.insert(word);
        }
        else if (instr == "R")
        {
            bst.remove(word);
        }
        else if (instr == "L")
        {
            cout << endl << "BST path: " << bst.pathTo(word) << endl;
            cout << "BST numNodes: " << bst.numNodes() << endl << endl;
        }
    }
    
}