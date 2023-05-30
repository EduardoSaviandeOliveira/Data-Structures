#ifndef BINARY_HPP
#define BINARY_HPP

#include "../../List/Linked/linked.hpp"

#include <iostream>

namespace tbn {

template <typename T>
struct Node {
    T value;
    Node<T>* left;
    Node<T>* right;

    Node<T>(T value) {
        this->value = value;
        this->left = nullptr;
        this->right = nullptr;
    }

    void insert(T value) {

    }

    void remove(T value) {

    }

    void print() {
    }
};

template <typename T>
struct Binary {
    Node<int>* root;
    llk::List<int> pre;
    llk::List<int> in;
    llk::List<int> post;

    Binary() {
        this->root = nullptr;
        this->in = llk::List<int>();
        this->pre = llk::List<int>();
        this->post = llk::List<int>();
    }
};
}

#endif