#include<cstdlib>
#include<iostream>

#include"list.h"

using namespace std;

list::list(){
    head = NULL;
    temp = NULL;
    curr = NULL;
}

void list::AddNode(int add_data){
    node_ptr n = new node;
    n->next = NULL;
    n->data = add_data;

    if(head != NULL){
        curr = head;
        while(curr->next != NULL){
            curr = curr->next;
        }
        curr->next = n;
    }else{
        head = n;
    }
}

void list::DeleteNode(int del_data){
    node_ptr delPtr = NULL;
    temp = head;
    curr = head;
    while(curr != NULL && curr->data != del_data){
        temp = curr;
        curr = curr->next;
    }
    if(curr == NULL){
        cout<<"NO SUCH DATA FOUND"<<endl;
        delete delPtr;
    }else{
        delPtr = curr;
        curr = curr->next;
        temp->next = curr;
        delete delPtr;
        cout<<"THE VALUE WAS DELETED"<<endl;
    }
}

void list::PrintList(){
    curr = head;
    while(curr != NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    cout<<endl;
}
