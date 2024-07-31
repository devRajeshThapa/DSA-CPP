#include <iostream>

struct Node{
  int data;
  struct Node* next;
};

struct Node* head = NULL;

void Insert(int new_data, int position){
    struct Node* node_ptr = new struct Node;
    node_ptr->data = new_data;
    node_ptr->next = NULL;
    if(position = 1){
        node_ptr->next = head;
        head = node_ptr;
        return;
    }
    
    for(int i=0; i<position-2; i++){
        head = head->next;
    }
    node_ptr->next = head->next;
    head->next = node_ptr;
}

void Display(){
    while(head != NULL){
        std::cout << head->data << " ";
        head = head->next;
    }
}



int main(){
    
    Insert(5, 1);
    Insert(4, 2);
    Insert(2, 2);
    Insert(3, 3);
    Insert(1,4);
    
    Display();
    
    return 0;
}
