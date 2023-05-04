#ifndef TASK3_CPP_NODE_H
#define TASK3_CPP_NODE_H

template<typename T>
class BinaryTree;

template<typename T>
class TreeIterator;

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

    T getData();
    Node *getLeft();
    Node *getRight();

    friend class BinaryTree<T>;
    friend class TreeIterator<T>;
};

template<typename T>
T Node<T>::getData() {
    return data;
}

template<typename T>
Node<T> *Node<T>::getLeft() {
    return left;
}

template<typename T>
Node<T> *Node<T>::getRight() {
    return right;
}

template<typename T>
Node<T>::~Node() {
    //delete data;
    delete left;
    delete right;
}

#endif //TASK3_CPP_NODE_H