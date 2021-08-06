#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(){}
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

Node* getNewNode (Node *p, int x){
    Node *temp = new Node();
    temp->data = x;
    temp->next = NULL;

    if(p == NULL){
        p = temp;
        return p;
    }
    Node *t = p;
    while(t->next != NULL){
        t = t->next;
    }

    t->next = temp;
    return p;
}
Node* input(){
    cout << "Enter the size of linked list : ";
    int n;
    cin >> n;
    Node *p = NULL;
    
    cout << "Enter data in nodes : ";
    for(int i =0; i < n; i++){
        int x;
        cin >> x;
        p = getNewNode(p, x);
    }
    return p;
}

void print(Node *p){
    while(p != NULL){
        cout << p->data << " ";
        p = p->next;
    }
}