//
//  main.cpp
//  #226 ltc-invert_binary_tree
//
//  Created by Steven Chang on 7/1/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
//Accepted
using namespace std;
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) :val(x), left(NULL), right(NULL){}
};

TreeNode * invertTree(TreeNode* root)
{
    if (root == NULL)
    {
        return root;
    }
    if (!((*root).left == NULL && (*root).right == NULL))
    {
        //return root;
        TreeNode * temp = (*root).left;
        (*root).left = (*root).right;
        (*root).right = temp;
        invertTree((*root).left);
        invertTree((*root).right);
        return root;
    }
    else
        return root;
}

void printfff(TreeNode * root)
{
    if (root != NULL)
    {
        if (!((*root).left == NULL && (*root).right == NULL))
        {
            cout << "|" << (*(*root).left).val << "|" << (*(*root).right).val << endl;
            printfff((*root).left);
            //cout << "|";
            printfff((*root).right);
            //cout << endl;
        }
    }
}
int main(){
    TreeNode l21(9);
    TreeNode l22(6);
    TreeNode l23(3);
    TreeNode l24(1);
    TreeNode l11(7);
    TreeNode l12(2);
    TreeNode root(4);
    root.left = &l11;
    root.right = &l12;
    l11.left = &l21;
    l11.right = &l22;
    l12.left = &l23;
    l12.right = &l24;
    cout << root.val << endl;
    printfff(invertTree(&root
    ));
    //printfff(&root);
    int t;
    cin >> t;
}