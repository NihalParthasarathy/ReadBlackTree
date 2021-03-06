#include "node.h"
#include <iostream>

using namespace std;

Node::Node(int newdata) {//Constructer
  left = NULL;
  right = NULL;
  color = true;
  data = newdata;
}

void Node::setRight(Node* newright) {//Sets the right
  right = newright;
}
void Node::setLeft(Node* newleft) {//Sets the left
  left = newleft;
}
Node* Node::getLeft() {//Returns left
  return left;
}
Node* Node::getRight() {//Returns right
  return right;
}
Node* Node::getParent() {//Return parent
  return parent;
}
int Node::getData() {//Returns data
  return data;
}
void Node::setParent(Node* newparent) {
  parent = newparent;
}

bool Node::getColor() {
  return color;
}
