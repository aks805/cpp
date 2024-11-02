#include <iostream>

using namespace std;

struct Node {
  int data;
  Node *left;
  Node *right;

  Node(int _data) : data(_data), left(nullptr), right(nullptr) {};
  Node() : data(), left(nullptr), right(nullptr) {};

  ~Node() {
    delete this->left;
    delete this->right;
  };
};

class BST {

  Node *root;

  Node *insertHelper(Node *root, Node *node) {
    // base case
    int &data = node->data;
    if (root == nullptr) {
      root = node;
      return root;
    }
    // no pre case
    // recursive case
    else if (data < root->data) {
      root->left = insertHelper(root->left, node);
    } else {
      root->right = insertHelper(root->right, node);
    }
    // post case
    return root;
  }

  void displayHelper(Node *root) {
    // inorder traversal
    if (root != nullptr) {
      displayHelper(root->left);
      cout << root->data << endl;
      displayHelper(root->right);
    }
  }
  //
  // bool searchHelper(Node root, Node node) {}
  //
  // Node removeHelper(Node root, Node node) {}
  //
  // Node successorHelper(Node root) {}

public:
  void insert(Node *node) { root = insertHelper(root, node); }

  BST() : root(nullptr) {};
  ~BST() { delete root; };

  void display() { displayHelper(root); }
  // bool search(int data) {}
  // void remove(int data) {}
  // int successor(Node root) {}
};

int main() {
  BST bst;

  bst.insert(new Node(10));
  bst.insert(new Node(0));
  bst.insert(new Node(8));
  bst.insert(new Node(4));
  bst.insert(new Node(8));
  bst.insert(new Node(20));

  bst.display();
}
