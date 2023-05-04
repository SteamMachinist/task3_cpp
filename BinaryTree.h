#ifndef TASK3_CPP_BINARYTREE_H
#define TASK3_CPP_BINARYTREE_H

#include "Node.h"
#include "TreeIterator.h"

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

    BinaryTree();
    BinaryTree(T data);
    ~BinaryTree();

    int size();
    bool empty();

    void setRoot(T data);
    Node<T> *find(T data);
    void insert(T data, Node<T> *parent, Place place);
    void insert(T data, T parentData, Place place);
    void remove(T data);

    TraversalType getTraversalType();
    void setTraversalType(TraversalType traversalType);
    TreeIterator<T> begin();
    TreeIterator<T> end();

private:
    Node<T> *findParent(T data, Node<T> *current);
    Node<T> *find(T data, Node<T> *current);
    friend class TreeIterator<T>;
    Node<T> *root = nullptr;
    int nodes = 0;
    TraversalType traversalType = TraversalType::Preorder;
};

template<typename T>
Node<T> *BinaryTree<T>::findParent(T data, Node<T> *current) {
    if (current == nullptr || current->left == nullptr || current->right == nullptr)
    {
        return nullptr;
    }
    if (current->left->data == data || current->right->data == data)
    {
        return current;
    }

    Node<T> *found = nullptr;

    Node<T> *left = findParent(data, current->left);
    if (left != nullptr)
    {
        found = left;
    }

    Node<T> *right = findParent(data, current->right);
    if (right != nullptr)
    {
        found = right;
    }

    return found;
}

template<typename T>
void BinaryTree<T>::remove(T data) {
    Node<T> *parent = findParent(data, this->root);
    if (parent == nullptr)
    {
        return;
    }
    Node<T> *toDelete;
    if (parent->left->data == data)
    {
        toDelete = parent->left;
        parent->left = nullptr;
    }
    else
    {
        toDelete = parent->right;
        parent->right = nullptr;
    }
    delete toDelete;
    nodes--;
}

template<typename T>
Node<T> *BinaryTree<T>::find(T data) {
    return find(data, this->root);
}

template<typename T>
Node<T> *BinaryTree<T>::find(T data, Node<T> *current) {
    if (current == nullptr)
    {
        return nullptr;
    }
    if (current->data == data)
    {
        return current;
    }

    Node<T> *found = nullptr;

    Node<T> *left = find(data, current->left);
    if (left != nullptr)
    {
        found = left;
    }

    Node<T> *right = find(data, current->right);
    if (right != nullptr)
    {
        found = right;
    }

    return found;
}

template<typename T>
void BinaryTree<T>::insert(T data, T parentData, Place place) {
    this->insert(data, this->find(parentData), place);
}

template<typename T>
void BinaryTree<T>::insert(T data, Node<T> *parent, Place place) {
    if (parent == nullptr)
    {
        return;
    }
    Node<T> *newNode = new Node<T>(data);
    if (place == Place::Left)
    {
        parent->left = newNode;
    }
    if (place == Place::Right)
    {
        parent->right = newNode;
    }
    nodes++;
}

template<typename T>
BinaryTree<T>::BinaryTree(T data) {
    setRoot(data);
}

template<typename T>
void BinaryTree<T>::setRoot(T data) {
    if (this->root == nullptr)
    {
        this->root = new Node(data);
    }
    else
    {
        this->root->data = data;
    }
}

template<typename T>
BinaryTree<T>::TraversalType BinaryTree<T>::getTraversalType()
{
    return this->traversalType;
}

template<typename T>
void BinaryTree<T>::setTraversalType(TraversalType traversalType)
{
    this->traversalType = traversalType;
}

template<typename T>
TreeIterator<T> BinaryTree<T>::begin()
{
    return TreeIterator<T>(this->root, this->traversalType);
}

template<typename T>
TreeIterator<T> BinaryTree<T>::end()
{
    return TreeIterator<T>(nullptr, this->traversalType);
}

template<typename T>
BinaryTree<T>::BinaryTree()
{}

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