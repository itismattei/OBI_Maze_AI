//==================================================================================================
#include "node.hpp"
//==================================================================================================

#include <string>

using namespace std;

//==================================================================================================

Node::Node(void) {
     this->root = NULL;

     this->parent[0] = NULL;
     this->parent[1] = NULL;
     this->parent[2] = NULL;

     this->child[0] = NULL;
     this->child[1] = NULL;
     this->child[2] = NULL;

     this->pos = NULL;
};

Node::Node(Node* root, Node* firstParent, Position* position) {
     this->root = root;

     this->parent[0] = NULL;
     this->parent[1] = firstParent;
     this->parent[2] = NULL;

     this->child[0] = NULL;
     this->child[1] = NULL;
     this->child[2] = NULL;

     this->pos = position;
};

Node::Node(Node* root) {
     this->root = root;

     this->parent[0] = NULL;
     this->parent[1] = NULL;
     this->parent[2] = NULL;

     this->child[0] = NULL;
     this->child[1] = NULL;
     this->child[2] = NULL;

     this->pos = NULL;
};

Node::Node(Node* root, Node* parent[]) {
     this->root = root;

     this->parent[0] = parent[0];
     this->parent[1] = parent[1];
     this->parent[2] = parent[2];

     this->child[0] = NULL;
     this->child[1] = NULL;
     this->child[2] = NULL;

     this->pos = NULL;
};

Node::Node(Node* root, Node* parent[], Node* child[]) {
     this->root = root;

     this->parent[0] = parent[0];
     this->parent[1] = parent[1];
     this->parent[2] = parent[2];

     this->child[0] = child[0];
     this->child[1] = child[1];
     this->child[2] = child[2];

     this->pos = NULL;
};

Node::Node(Node* root, Node* parent[], Node* child[], Position* position) {
     this->root = root;

     this->parent[0] = parent[0];
     this->parent[1] = parent[1];
     this->parent[2] = parent[2];

     this->child[0] = child[0];
     this->child[1] = child[1];
     this->child[2] = child[2];

     this->pos = position;
};

//==================================================================================================

void Node::setParentNode(Node* parent) {
     this->parent[1] = parent;
};

void Node::setParentNode(Node* parent, int pos) {
     this->parent[pos] = parent;
};

Node* Node::getParentNode(int pos) {
     return this->parent[pos];
};

//==================================================================================================

void Node::setChildNode(Node* child, int pos) {
     this->child[pos] = child;
};

Node* Node::getChildNode(int pos) {
     return this->child[pos];
};

//==================================================================================================

void Node::setPosition(Position* pos) {
     this->pos = pos;
};

Position* Node::getPosition(void) {
     return this->pos;
};


//==================================================================================================

Node* Node::getRoot(void) {
     return this->root;
};

////////////////////////////////////////////////////////////////////////////////////////////////////

void Node::setName(string name) {
     this->name = name;
};

string Node::getName(void) {
     return this->name;
};
