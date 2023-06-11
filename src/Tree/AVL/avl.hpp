#ifndef AVL_HPP
#define AVL_HPP

#include <iostream>

namespace tavl {
template <typename T>
struct Node {
    T value;
    int height;
    Node* left;
    Node* right;

};

template <typename T>
struct AVL {
    Node<T>* root;

};
}

#endif