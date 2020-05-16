#include  "bst.h"
#include  <iostream>
#include  <fstream>
#include  <locale>

BST<std::string> makeTree(char* filename)
{
    BST<std::string> tree;
    char buf[256];
    int i=0;
    std::ifstream file(filename);
    while(!file.eof())
    {
        int ch=file.get();
        if(std::isalpha(ch))
        {
            buf[i++]=std::tolower(ch);
            continue;
        }
        else if(i>0)
        {
            buf[i]=0;
            std::string word(buf);
            tree.add(word);
        }
        i=0;
    }
    return tree;
}