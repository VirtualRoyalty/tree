#include "gtest/gtest.h"
#include <string>

#include "bst.h"
BST<std::string> makeTree(char* filename);

TEST(lab6,test1_1)
{
    char* filename="war_peace.txt";
    BST<std::string> tree=makeTree(filename);
    int depth=tree.depth();
    EXPECT_EQ(depth,35);
}

