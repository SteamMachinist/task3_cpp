#ifndef TASK3_CPP_BINARYTREE_H
#define TASK3_CPP_BINARYTREE_H

template<typename T>
class BinaryTree
{
public:
    enum class TraversalType {Preorder, Inorder, Postorder};
    class iterator {};

    BinaryTree();
    ~BinaryTree();

    int size();

    T* find(T key);
    void insert(T key);
    T* remove(T key);
    BinaryTree::iterator traverse(TraversalType type);
};


#endif //TASK3_CPP_BINARYTREE_H
