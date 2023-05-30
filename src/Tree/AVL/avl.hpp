#ifndef AVL_HPP
#define AVL_HPP

#include <iostream>

namespace tavl {
template <typename T>
struct Node {
    T value;
    Node* left;
    Node* right;
    int height;

    Node<T>(T value) {
        this->value = value;
        this->left = nullptr;
        this->right = nullptr;
        this->height = 1;
    }
};

template <typename T>
struct AVL {
    Node<T>* root;

    AVL() {
        this->root = nullptr;
    }
};
}
#endif