#include <iostream>
#include <string>
using namespace std;

class Node{
    //Put implementation here
};

class AvlTree {
    //Incomplete implementation
    
public:
    bool insert(string, long);
    long search(string);
    string search(long);
    string traversePreorder();
    string traverseInorder();
    string traversePostorder();
    int countLevels();
};
  
/* README
 * 
 * Functions to do some required tasks. Flesh these out with correct and
 * complete code as part of your implementation for the project if you want.
 * Feel free to change these functions' return types, input types, and behavior
 * - just know that you may have to tweak the Catch2 tests to accurately
 * reflect the changes you make.
 * 
 * Using and extending the Catch2 tests is optional, of course. As long as your
 * code gets full marks on Stepik, you are eligible for full points. We provide
 * this as a courtesy so you have somewhere to start if you want to try for the
 * five "makeup" Catch2 points.
 */

// Insert node containing name and id (and maybe more) into tree
// Return true if insertion successful
bool AvlTree::insert(string name, long id){
    return false;
}

// Search for student by name
// Return id if found, or -1 if not found
long AvlTree::search(string name){
    return -1;
}

// Search for student by id
// Return name if found, or "Not found!"
string AvlTree::search(long id){
    return "Not found!";
}

// Return comma-separated string of preorder traversal
string AvlTree::traversePreorder(){
    return "Not implemented yet!";
}

// Return comma-separated string of inorder traversal
string AvlTree::traverseInorder(){
    return "Not implemented yet!";
}

// Return comma-separated string of postorder traversal
string AvlTree::traversePostorder(){
    return "Not implemented yet!";
}

// Return number of levels in current AVL tree
int AvlTree::countLevels(){
    return -1;
}

// Comment out main to use Catch2 testing
// main handles input parsing, printing, etc.
/*
int main(){

}
*/
