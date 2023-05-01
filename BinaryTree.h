#ifndef TASK3_CPP_BINARYTREE_H
#define TASK3_CPP_BINARYTREE_H

template<typename T>
class BinaryTree
{
public:
    enum class TraversalType
    {
        Preorder, Inorder, Postorder, Levelorder
    };

public:
    class Node
    {
    public:
        Node(T data, Node *left);
        Node(T data, Node *left, Node *right);
        ~Node();
        T data;
        Node *left;
        Node *right;
        Node(T data);
    };

    Node *root;
    int nodes;
    TraversalType traversalType = TraversalType::Preorder;

public:
    class Iterator
    {
    public:
        using iterator_category = std::forward_iterator_tag;
        using difference_type = std::ptrdiff_t;
        using type_ptr = T *;
        using type_ref = T &;
        using pointer = Node *;
        using reference = Node &;

        pointer ptr;
        Iterator(pointer ptr): ptr(ptr) {}

        Iterator operator++()
        {
            ptr = ptr->left;
            return *this;
        }

        Iterator operator++(int)
        {
            Iterator stash = *this;
            ptr = ptr->left;
            return stash;
        }

        type_ref operator*() const
        {
            return ptr->data;
        }

        type_ptr operator->()
        {
            return &(ptr->data);
        }

        bool operator==(const Iterator &other)
        {
            return ptr == other.ptr;
        }

        bool operator!=(const Iterator &other)
        {
            return ptr != other.ptr;
        }
    };

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
    BinaryTree<T>::Iterator begin();
    BinaryTree<T>::Iterator end();


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
BinaryTree<T>::Node::Node(T data)
{
    this->data = data;
    this->left = nullptr;
    this->right = nullptr;
}

template<typename T>
BinaryTree<T>::Node::Node(T data, BinaryTree::Node *left)
{
    this->data = data;
    this->left = left;
    this->right = nullptr;
}

template<typename T>
BinaryTree<T>::Node::Node(T data, BinaryTree::Node *left, BinaryTree::Node *right)
{
    this->data = data;
    this->left = left;
    this->right = right;
}

template<typename T>
BinaryTree<T>::Node::~Node()
{
    delete this->data;
}

template<typename T>
BinaryTree<T>::Iterator BinaryTree<T>::begin()
{
    return Iterator(this->root);
}

template<typename T>
BinaryTree<T>::Iterator BinaryTree<T>::end()
{
    return Iterator(nullptr);
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
