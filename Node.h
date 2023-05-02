#ifndef TASK3_CPP_NODE_H
#define TASK3_CPP_NODE_H

template<typename T>
class BinaryTree;

template<typename T>
class Iterator;

template<typename T>
class Node {
private:
    T data;
    Node *left;
    Node *right;
public:
    Node(T data) : data(data), left(nullptr), right(nullptr) {}
    Node(T data, Node *left) : data(data), left(left), right(nullptr) {}
    Node(T data, Node *left, Node *right) : data(data), left(left), right(right) {}
    ~Node();

    friend class BinaryTree<T>;
    friend class Iterator<T>;
};

template<typename T>
Node<T>::~Node() {
    delete this->data;
}

#endif //TASK3_CPP_NODE_H