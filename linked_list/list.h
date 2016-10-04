#ifndef LIST_H
#define LIST_H

class list{
private:
    struct node{
        int data;
        node* next;
    };
    typedef struct node* node_ptr;
    node_ptr head;
    node_ptr curr;
    node_ptr temp;

public:
    list();
    void AddNode(int add_data);
    void DeleteNode(int del_data);
    void PrintList();

};
#endif // LIST_H
