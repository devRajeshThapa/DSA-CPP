#include <iostream>

struct Node{
  int data;
  struct Node* next;
};

struct Node* head = NULL;

void Insert(int new_data){
    struct Node* node_ptr = new struct Node;
    node_ptr->data = new_data;
    node_ptr->next = head;
    head = node_ptr;
}

void Display(){
    while(head != NULL){
        std::cout << head->data << " ";
        head = head->next;
    }
}



int main(){
    
    int i,num_of_node, new_data;
    
    std::cout << "Enter the number of nodes: ";
    std::cin >> num_of_node;
    
    for(i=0; i<num_of_node; i++){
        std::cout << "Enter the data in " << i+1 << " node: ";
        std::cin >> new_data;
        
        Insert(new_data);
    }
    
    Display();
    
    return 0;
}
