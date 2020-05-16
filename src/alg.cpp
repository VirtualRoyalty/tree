#include  "bst.h"
#include  <iostream>
#include  <fstream>
#include  <locale>

BST<std::string> makeTree(char* filename)
{
    BST<string> tree;
    char buf[256];
    int i=0;
    ifstream file(filename);
    while(!file.eof())
    {
        int ch=file.get();
        if(isalpha(ch))
        {
            buf[i++]=tolower(ch);
            continue;
        }
        else if(i>0)
        {
            buf[i]=0;
            string word(buf);
            tree.add(word);
        }
        i=0;
    }
    return tree;
}