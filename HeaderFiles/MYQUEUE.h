#ifndef MY_QUEUE_H
#define MY_QUEUE_H

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
struct MY_QUEUE {
    Node* head = NULL;
    Node* tail = NULL;
    void push(int val){
        if(head == NULL){
            head = new Node(val);
            tail = head;
            return;
        }
        Node* nn = new Node(val);
        tail->next = nn;
        tail = nn;
        return;
    }
    void pop(){
        if(head == NULL){
            cout << "ERROR!" << endl;
            return;
        }
        head = head->next;
        if(head == NULL){
            tail = NULL;
        }
        return;
    }
    int front(){
        if(head == NULL){
            cout << "ERROR! ACCESSING NULL POINTER" << endl;
            return -1;
        }
        return head->data;
    }
    void display(){
        Node* temp = head;
        while(temp){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
        return;
    }

};

#endif
