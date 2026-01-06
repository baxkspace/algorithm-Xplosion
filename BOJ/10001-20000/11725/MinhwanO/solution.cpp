#include <iostream>
using namespace std;


typedef struct node{
    int num;
    struct node* left;
    struct node* right;
}node;

typedef node* nodelink;

nodelink root = new node;
nodelink curnode = NULL;

void finding(int num, nodelink cur){
    if (cur == NULL)
        return;
    if (cur->num == num){
        curnode = cur;
        return;
    }
    finding(num, cur->left);
    finding(num, cur->right);
}
void finding2(int num, nodelink cur){
    if (cur == NULL)
        return;
    if (cur->left != NULL){
        if (cur->left->num == num){
            cout << cur->num << "\n";
            return;
        }
        else{
            finding2(num, cur->left);
        }
    }
    if (cur->right != NULL){
        if (cur->right->num == num){
            cout << cur->num << "\n";
            return;
        }
        else{
            finding2(num, cur->right);
        }
    }
}

int main(){
    int N;
    cin >> N;
    root->num = 1;
    root->left = NULL;
    root->right = NULL;
    for (int i = 0; i < N-1; i++){
        curnode = NULL;
        int num1;
        cin >> num1;
        int num2;
        cin >> num2;
        finding(num1, root);
        if (curnode != NULL){
            nodelink temp2 = new node;
            temp2->left = NULL;
            temp2->right = NULL;
            temp2->num = num2;
            if (curnode->left == NULL)
                curnode->left = temp2;
            else{
                curnode->right = temp2;
            }
        }
        else{
            finding(num2, root);
            nodelink temp2 = new node;
            temp2->left = NULL;
            temp2->right = NULL;
            temp2->num = num1;
            if (curnode->left == NULL)
                curnode->left = temp2;
            else{
                curnode->right = temp2;
            }
        }
    }
    for (int i = 2; i <= N; i++){
        finding2(i, root);
    }

    return 0;
}