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
    enum class Place
    {
        Left, Right
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
    return Iterator<T>(this->root, this->traversalType);
}

template<typename T>
Iterator<T> BinaryTree<T>::end()
{
    return Iterator<T>(nullptr, this->traversalType);
}

template<typename T>
BinaryTree<T>::BinaryTree()
{
    root = new Node(0);
    root->left = new Node(20);
    root->right = new Node(25);
    root->left->left = new Node(30);
    root->left->right = new Node(35);
    root->right->left = new Node(40);
    root->right->right = new Node(45);
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