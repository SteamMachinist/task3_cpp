#include <iostream>
#include "BinaryTree.h"

int main()
{
    auto bt = new BinaryTree<int>(0);

    bt->insert(10, bt->find(0), BinaryTree<int>::Place::Left);
    bt->insert(11, bt->find(0), BinaryTree<int>::Place::Right);

    bt->insert(20, bt->find(10), BinaryTree<int>::Place::Left);
    bt->insert(21, bt->find(10), BinaryTree<int>::Place::Right);
    bt->insert(22, bt->find(11), BinaryTree<int>::Place::Left);
    bt->insert(23, bt->find(11), BinaryTree<int>::Place::Right);

    bt->insert(30, 20, BinaryTree<int>::Place::Left);
    bt->insert(31, 20, BinaryTree<int>::Place::Right);
    bt->insert(32, 21, BinaryTree<int>::Place::Left);
    bt->insert(33, 21, BinaryTree<int>::Place::Right);
    bt->insert(34, 22, BinaryTree<int>::Place::Left);
    bt->insert(35, 22, BinaryTree<int>::Place::Right);
    bt->insert(36, 23, BinaryTree<int>::Place::Left);
    bt->insert(37, 23, BinaryTree<int>::Place::Right);


    std::cout << "Preorder (node, left subtree, right subtree):" << std::endl;
    bt->setTraversalType(BinaryTree<int>::TraversalType::Preorder);
    for (auto num : *bt)
    {
        std::cout << num << std::endl;
    }
    std::cout << endl << endl;

    std::cout << "Inorder (left subtree, node, right subtree):" << std::endl;
    bt->setTraversalType(BinaryTree<int>::TraversalType::Inorder);
    for (auto num : *bt)
    {
        std::cout << num << std::endl;
    }
    std::cout << endl << endl;

    std::cout << "Postorder (left subtree, right subtree, node):" << std::endl;
    bt->setTraversalType(BinaryTree<int>::TraversalType::Postorder);
    for (auto num : *bt)
    {
        std::cout << num << std::endl;
    }
    std::cout << endl << endl;

    std::cout << "Levelorder (by level):" << std::endl;
    bt->setTraversalType(BinaryTree<int>::TraversalType::Levelorder);
    for (auto num : *bt)
    {
        std::cout << num << std::endl;
    }
    std::cout << endl << endl;

//    bt->remove(21);
//    for (auto num : *bt)
//    {
//        std::cout << num << std::endl;
//    }
    //std::cin.ignore();
    return 0;
}
