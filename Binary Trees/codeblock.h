#include <bits/stdc++.h>
using namespace std;
TreeNode* create();

int inf = 1e5;
class TreeNode {
    public:
        int data;
        TreeNode *left;
        TreeNode *right;

        TreeNode(){
            data = 0;
            left = NULL;
            right = NULL;
        }
        TreeNode(int x){
            data = x;
            left = NULL;
            right = NULL;
        }
    public:
        TreeNode* create(){
            int data;
            cout << "Enter data or -1 for no node : ";
            cin >> data;
            if(data == -1)
                return 0;
            
            TreeNode *node = new TreeNode(data);
            cout << "Enter left Child of " << data << "node : ";
            node->left = create();

            cout << "Enter right Child of " << data << "node : ";
            node->right = create();
            
            return node;
        }
};
void print (vector <int> v){
    for(auto i : v){
        cout << i << " ";
    }
}

