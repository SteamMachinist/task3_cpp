#ifndef TASK3_CPP_ITERATOR_H
#define TASK3_CPP_ITERATOR_H

#include <list>

using namespace std;

template<typename T>
class Node;

template<typename T>
class Iterator
{
public:
    using iterator_category = std::forward_iterator_tag;
    using difference_type = std::ptrdiff_t;
    using type_node = Node<T>;
    using data_pointer = T *;
    using data_reference = T &;
    using node_pointer = Node<T> *;
    using node_reference = Node<T> &;

    node_pointer current;
    list<Node<T> *> traversal = *new list<Node<T> *>();


    Iterator(node_pointer pointer, BinaryTree<T>::TraversalType type) : current(pointer)
    {
        switch (type)
        {
            case (BinaryTree<T>::TraversalType::Preorder):
                traversePreorder(pointer);
                break;

            case (BinaryTree<T>::TraversalType::Inorder):
                traverseInorder(pointer);
                break;

            case (BinaryTree<T>::TraversalType::Postorder):
                traversePostorder(pointer);
                break;

            case (BinaryTree<T>::TraversalType::Levelorder):
                traverseLevelorder(pointer);
                break;
        }
    }

    void traversePreorder(Node<T> *node)
    {
        if (node == nullptr)
            return;
        traversal.push_back(node);
        traversePreorder(node->left);
        traversePreorder(node->right);
    }

    void traverseInorder(Node<T> *node)
    {
        if (node == nullptr)
            return;
        traverseInorder(node->left);
        traversal.push_back(node);
        traverseInorder(node->right);
    }

    void traversePostorder(Node<T> *node)
    {
        if (node == nullptr)
            return;
        traversePostorder(node->left);
        traversePostorder(node->right);
        traversal.push_back(node);
    }

    void traverseLevelorder(Node<T> *root)
    {
        for (int i = 1; i <= height(root); i++)
        {
            traverseCurrentLevel(root, i);
        }
    }

    void traverseCurrentLevel(Node<T> *node, int level)
    {
        if (node == nullptr)
        {
            return;
        }
        if (level == 1)
        {
            traversal.push_back(node);
        }
        else if (level > 1)
        {
            traverseCurrentLevel(node->left, level - 1);
            traverseCurrentLevel(node->right, level - 1);
        }
    }

    int height(Node<T> *node)
    {
        if (node == nullptr)
            return 0;
        else
        {
            int lheight = height(node->left);
            int rheight = height(node->right);

            if (lheight > rheight)
            {
                return (lheight + 1);
            } else
            {
                return (rheight + 1);
            }
        }
    }

    Iterator<T> &operator++()
    {
        if (traversal.empty())
        {
            current = nullptr;
        }
        else
        {
            traversal.pop_front();
            current = traversal.front();
        }
        return *this;
    }

    Iterator<T> operator++(int)
    {
        Iterator<T> stash = *this;
        if (traversal.empty())
        {
            current = nullptr;
        }
        else
        {
            traversal.pop_front();
            current = traversal.front();
        }
        return stash;
    }

    data_reference operator*() const
    {
        return current->data;
    }

    data_pointer operator->()
    {
        return &(current->data);
    }

    bool operator==(const Iterator &other)
    {
        return current == other.current;
    }

    bool operator!=(const Iterator &other)
    {
        return current != other.current;
    }

    ~Iterator()
    {}
};


#endif //TASK3_CPP_ITERATOR_H
