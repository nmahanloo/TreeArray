#include <iostream>
using namespace std;

struct tree
{
    char data = '\0';
    tree* left = nullptr;
    tree* right = nullptr;
};

/*void abt (tree* (&leaf), string postfix, int i)
{
    leaf->data = postfix[i];
    cout << leaf->data << endl;
    if ((((2*i)+1) < postfix.size()))
    {
        leaf->left = new tree;
        pushPostfix(leaf->left, postfix, ((2*i)+1));
    }
    if ((((2*i)+2) < postfix.size()))
    {
        leaf->right = new tree;
        pushPostfix(leaf->right, postfix, ((2*i)+2));
    }
}*/

void postfixToBST (tree* (&leaf), string invertPost, int i)
{
    if ()
    {
        leaf->right = new tree;

    }
    leaf->data = invertPost[i];
    i++;
}

void printInfix (tree* leaf, char* (&outfix), int i)
{
    if (leaf->left)
        printInfix (leaf->left, outfix, i);
    cout << leaf->data;
    //outfix[i] = leaf->data;
    i++;
    if (leaf->right)
        printInfix (leaf->right, outfix, i);
}

int main()
{
    tree* root = new tree;
    tree* leaf = root;
    string postfix;
    string prefix;
    char* outfix = (char*)malloc(sizeof(char));
    cout << "Please enter a postfix expression > ";
    cin >> postfix;
    for (int i = 0; i < postfix.size(); i++)
    {
        prefix[i] = postfix[postfix.size()-(i+1)];
    }
    pushPostfix(leaf, prefix, 0);
    printInfix(leaf, outfix, 0);
    //cout << outfix << endl;
    return 0;
}
