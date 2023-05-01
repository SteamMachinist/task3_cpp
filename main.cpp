#include <iostream>
#include "BinaryTree.h"

int main()
{
    auto bt = new BinaryTree<int>();
    for (auto num : *bt)
    {
        std::cout << num << std::endl;
    }
    std::cin.ignore();
    return 0;
}
