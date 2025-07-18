#ifndef STACK_H
#define STACK_H
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
struct STACK{
    Node* head = NULL;
    void push(int val){
        if(head == NULL){
            head = new Node(val);
            return;
        }
        Node* nn = new Node(val);
        nn->next = head;
        head = nn;
        return;
    }
    void pop(){
        if(head == NULL){
            cout << "ERROR! ACCESSING NULL POINTER" << endl;
            return;
        }
        head = head->next;
        return;
    }
    void display(){
        Node* temp = head;
        while(temp){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};


#endif
