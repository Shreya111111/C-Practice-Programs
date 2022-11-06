
#include <stdio.h>
#include <stdlib.h>
struct node {
 int data;
 struct node *next;
};
struct node *insert_beg(struct node *head) {
 int num;
 struct node *new_node, *ptr;
 printf("Enter number to be inserted:\n");
 scanf("%d", &num);
 new_node = (struct node*) malloc(sizeof(struct node));
 new_node->data = num;
 ptr = head;
 while(ptr->next != head) {
 ptr = ptr->next;
 }
 ptr->next = new_node;
 new_node->next = head;
 head = new_node;
 return head;
}
struct node *insert_end(struct node *head) {
 int num;
 struct node *new_node, *ptr;
 printf("Enter number to be inserted:\n");
 scanf("%d", &num);
 new_node = (struct node*) malloc(sizeof(struct node));
 new_node->data = num;
 ptr = head;
 while(ptr->next != head) {
 ptr = ptr->next;
 }
 ptr->next = new_node;
 new_node->next = head;
 return head;
}
struct node *delete_beg(struct node *head) {
 struct node *ptr;
 ptr = head;
 while(ptr->next != head) {
 ptr = ptr->next;
 }
 ptr->next = head->next;
 free(head);
 head = ptr->next;
 return head;
}
struct node *delete_end(struct node *head) {
 struct node *ptr, *temp;
 ptr = head;
 while(ptr->next != head) {
 temp = ptr;
 ptr = ptr->next;
 }
 temp->next = ptr->next;
 free(ptr);
 return head;
}
struct node *delete_after(struct node *head) {
 struct node *ptr, *temp;
 ptr = head;
 int val;
 printf("Enter number after which node to be deleted\n");
 scanf("%d", &val);
 while(temp->data != val) {
 temp = ptr;
 ptr = ptr->next;
 }
 temp->next = ptr->next;
 if(ptr == head) {
 head = temp->next;
 }
 free(ptr);
 return head;
}
struct node *display(struct node *head) {
 struct node *ptr;
 ptr = head;
 while(ptr->next != head) {
 printf("%d\t", ptr->data);
 ptr = ptr->next;
 }
 printf("%d\t", ptr->data);
 return head;
}
int main() {
 struct node *head;
 struct node *second;
 struct node *third;
 struct node *fourth;
 // Allocate memory for nodes in the linked list in Heap
 head = (struct node *)malloc(sizeof(struct node));
 second = (struct node *)malloc(sizeof(struct node));
 third = (struct node *)malloc(sizeof(struct node));
 fourth = (struct node *)malloc(sizeof(struct node));
 head->data = 4;
 head->next = second;
 second->data = 3;
 second->next = third;
 third->data = 6;
 third->next = fourth;
 fourth->data = 1;
 fourth->next = head;

 int option;
 do {
 printf("\n1-> insert at begning\n2-> insert at end\n3-> delete at begning\n4-> delete at end\n5-> delete
after a node\n6-> display\n");
 printf("Enter option:\n");
 scanf("%d", &option);

 switch(option) {
 case 1:
 head = insert_beg(head);
 break;
 case 2:
 head = insert_end(head);
 break;
 case 3:
 head = delete_beg(head);
 break;
 case 4:
 head = delete_end(head);
 break;
 case 5:
 head = delete_after(head);
 break;
 case 6:
 head = display(head);
 break;
 }
 } while(option!=7);
 return 0;

}
