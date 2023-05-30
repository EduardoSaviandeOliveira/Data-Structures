#ifndef LINKED_HPP
#define LINKED_HPP

#include <iostream>

namespace llk {
    template <typename T>
    struct Node {
        T value;
        Node<T>* next;
        Node<T>* prev;
        Node<T>(T value) {
            this->value = value;
            this->next = nullptr;
            this->prev = nullptr;
        }
    };

    template <typename T>
    struct List {
        int size;
        Node<T>* head;
        Node<T>* tail;

        List() {
            this->size = 0;
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert(T value) {
            Node<T>* node = new Node<T>(value);
            if(this->head == nullptr) {
                this->head = node;
                this->tail = node;
            } else {
                this->tail->next = node;
                node->prev = this->tail;
                this->tail = node;
            }
            this->size++;
        }

        void remove(int index) {
            if(index < 0 || index >= this->size) {
                std::cout << "Index out of range" << std::endl;
                return;
            }

            Node<T>* node = this->head;
            for(int i = 0; i < index; i++) node = node->next;

            if(node->prev != nullptr) node->prev->next = node->next;
            else this->head = node->next;

            if(node->next != nullptr) node->next->prev = node->prev;
            else this->tail = node->prev;

            delete node;
            this->size--;
        }

        void print() {
            Node<T>* node = this->head;
            while(node != nullptr) {
                std::cout << node->value << std::endl;
                node = node->next;
            }
        }
    };
}

#endif