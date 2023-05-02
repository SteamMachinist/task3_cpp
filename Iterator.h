#ifndef TASK3_CPP_ITERATOR_H
#define TASK3_CPP_ITERATOR_H

template<typename T>
class Node;

template<typename T>
class Iterator
{
public:
    using iterator_category = std::forward_iterator_tag;
    using difference_type = std::ptrdiff_t;
    using type_ptr = T *;
    using type_ref = T &;
    using pointer = Node<T> *;
    using reference = Node<T> &;

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


#endif //TASK3_CPP_ITERATOR_H
