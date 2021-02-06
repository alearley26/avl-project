#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Node{

};

class AvlTree {
    
public:
    bool insert(Node*, string, int);
    bool search(Node*, string);
    bool search(Node*, int);
    string traversePreorder(Node* root);
    string traverseInorder(Node* root);
    string traversePostorder(Node* root);
    int countLevels(Node*);
};
  
// functions to do some required tasks
// flesh these out with correct code
bool AvlTree::insert(Node* root, string name, int id){
    return false;
}

bool AvlTree::search(Node* root, string name){
    return false;
}

bool AvlTree::search(Node* root, int id){
    return false;
}

string AvlTree::traversePreorder(Node* root){
    return "Not implemented yet!";
}

string AvlTree::traverseInorder(Node* root){
    return "Not implemented yet!";
}

string AvlTree::traversePostorder(Node* root){
    return "Not implemented yet!";
}

int AvlTree::countLevels(Node* root){
    return -1;
}

// we comment out main to use catch2 testing
/*
int main(){

}
*/