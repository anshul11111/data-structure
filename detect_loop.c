#include<stdio.h>
typedef struct Node {
    int data;
    struct Node* next;
    int flag;
} Node;
 
void push(struct Node** head_ref, int new_data)
{
    
    struct Node* new_node = (Node*)malloc(sizeof(Node));
 
    
    new_node->data = new_data;
 
    new_node->flag = 0;
 
    
    new_node->next = (*head_ref);
 
   
    (*head_ref) = new_node;
}
 

bool detectLoop(struct Node* h)
{
    while (h != NULL) {
        
        if (h->flag == 1)
            return true;
 
        
        h->flag = 1;
 
        h = h->next;
    }
 
    return false;
}
 

int main()
{
    
    struct Node* head = NULL;
 
    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 10);
 
    
    head->next->next->next->next = head;
 
    if (detectLoop(head))
        printf("Loop Found");
    else
        printf("No Loop");
 
    return 0;
}
 
