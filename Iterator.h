#ifndef TASK3_CPP_ITERATOR_H
#define TASK3_CPP_ITERATOR_H

#include <list>

template<typename T>
class Node;

template<typename T>
class Iterator
{
public:
    using iterator_category = std::forward_iterator_tag;
    using difference_type = std::ptrdiff_t;
    using data_pointer = T *;
    using data_reference = T &;
    using node_pointer = Node<T> *;
    using node_reference = Node<T> &;

    node_pointer current;
    std::list<Node<T> *> traversal;

    Iterator(node_pointer ptr, BinaryTree<T>::TraversalType type) : current(ptr)
    {
        switch (type)
        {
            case (BinaryTree<T>::TraversalType::Preorder):
                break;

            case (BinaryTree<T>::TraversalType::Inorder):
                break;

            case (BinaryTree<T>::TraversalType::Postorder):
                break;

            case (BinaryTree<T>::TraversalType::Preorder):
                break;
        }
    }


    Iterator operator++()
    {
        current = current->left;
        return *this;
    }

    Iterator operator++(int)
    {
        Iterator stash = *this;
        current = current->left;
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
};


#endif //TASK3_CPP_ITERATOR_H
