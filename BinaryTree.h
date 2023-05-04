#ifndef TASK3_CPP_BINARYTREE_H
#define TASK3_CPP_BINARYTREE_H

#include "Node.h"
#include "Iterator.h"

template<typename T>
class BinaryTree
{
public:
    enum class TraversalType
    {
        Preorder, Inorder, Postorder, Levelorder
    };
    friend class Iterator<T>;
    Node<T> *root;
    int nodes;
    TraversalType traversalType = TraversalType::Preorder;

public:
    BinaryTree();
    ~BinaryTree();

    int size();
    bool empty();

    bool find(T data);
    void insert(T data);
    void remove(T data);

    TraversalType getTraversalType();
    void setTraversalType(TraversalType traversalType);
    Iterator<T> begin();
    Iterator<T> end();
};

template<typename T>
BinaryTree<T>::TraversalType BinaryTree<T>::getTraversalType()
{
    return this->traversalType;
}

template<typename T>
void BinaryTree<T>::setTraversalType(BinaryTree::TraversalType traversalType)
{
    this->traversalType = traversalType;
}

template<typename T>
Iterator<T> BinaryTree<T>::begin()
{
    return Iterator<T>(this->root);
}

template<typename T>
Iterator<T> BinaryTree<T>::end()
{
    return Iterator<T>(nullptr);
}

template<typename T>
BinaryTree<T>::BinaryTree()
{
    root = new Node(10);
    root->left = new Node(20);
}

template<typename T>
BinaryTree<T>::~BinaryTree()
{}

template<typename T>
int BinaryTree<T>::size()
{
    return nodes;
}

template<typename T>
bool BinaryTree<T>::empty()
{
    return !nodes;
}

#endif //TASK3_CPP_BINARYTREE_H