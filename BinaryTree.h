#ifndef TASK3_CPP_BINARYTREE_H
#define TASK3_CPP_BINARYTREE_H

template<typename T>
class BinaryTree
{
private:
    class Node
    {
        Node(T t);
        Node(T t, Node *left);
        Node(T t, Node *left, Node *right);
        ~Node();
        T t;
        Node *left;
        Node *right;
    };

    Node *root;
    int nodes;

public:
    enum class TraversalType
    {
        Preorder, Inorder, Postorder, Levelorder
    };

    class Iterator
    {
    };

    BinaryTree();
    ~BinaryTree();

    int size();
    bool empty();

    T *find(T t);
    void insert(T t);
    T *remove(T t);
    BinaryTree::Iterator traverse(TraversalType type);
};

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
