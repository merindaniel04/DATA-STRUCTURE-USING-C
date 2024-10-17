#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
};
typedef struct node NODE;
NODE *header = NULL, *newptr = NULL, *ptr, *ptr1;
void traverse();
void insertfront();
void insertend();
void insertany();
void deletefront();
void deleteend();
void deleteany();
void display();  
void main() {
    int no;
    char c;
    header = (NODE*)malloc(sizeof(NODE));  
    header->link = NULL;
    do {
        printf("ENTER YOUR CHOICE\n");
        printf("1.TRAVERSE\t  ");
printf("\n2.INSERT AT FRONT\t   3.INSERT AT END\t    4.INSERT AT ANY POSITION\t ");
printf("\n5.DELETE FROM FRONT\t 6.DELETE FROM END\t  7.DELETE FROM ANY POSITION\t");
printf("\n8.DISPLAY LIST\t       9.EXIT\n");
        scanf("%d", &no);
        if (no == 9)
            break;
        else {
            switch(no) {
                case 1: traverse(); break;
                case 2: insertfront(); break;
                case 3: insertend(); break;
                case 4: insertany(); break;
                case 5: deletefront(); break;
                case 6: deleteend(); break;
                case 7: deleteany(); break;
                case 8: display(); break;  
                default: printf("INVALID ENTRY\n"); break;
             }     
            }
    } while(no!=9);
}
void insertfront() 
  {
    newptr = (NODE*)malloc(sizeof(NODE));
    if (newptr == NULL) 
    {
        printf("Insufficient memory\n");
        return;
    }
    printf("Enter the element: ");
    scanf("%d", &newptr->data);
    newptr->link = NULL;
    newptr->link = header->link;  
    header->link = newptr;  
}
void insertend() {
    newptr = (NODE*)malloc(sizeof(NODE));
    if (newptr == NULL) {
        printf("\t\tInsufficient memory\n");
        return;
    }
    printf("Enter the element: ");
    scanf("%d", &newptr->data);
    newptr->link = NULL;
    ptr = header;
    while (ptr->link != NULL) {
        ptr = ptr->link;
    }
    ptr->link = newptr;  
}
void insertany() {
    int key;
    newptr = (NODE*)malloc(sizeof(NODE));
    if (newptr == NULL) {
        printf("Insufficient memory\n");
        return;
    }
    printf("Enter the key after which to insert: ");
    scanf("%d", &key);
    printf("Enter the element: ");
    scanf("%d", &newptr->data);
    ptr = header->link;
    while (ptr != NULL && ptr->data != key) {
        ptr = ptr->link;
    }
    if (ptr == NULL)
        printf("Key not found\n");
    else {
        newptr->link = ptr->link;  
        ptr->link = newptr;
    }
}
void deletefront() {
    if (header->link == NULL) {
        printf("Empty list\n");
        return;
    }
    ptr = header->link;
    header->link = ptr->link;  
    printf("Deleted element is %d\n", ptr->data);
    free(ptr); 
}
void deleteend() {
    if (header->link == NULL) {
        printf("Empty list\n");
        return;
    }
    ptr = header;
    ptr1 = header->link;
    if (ptr1->link == NULL) {  // Only one node present
        header->link = NULL;
        printf("Deleted element is %d\n", ptr1->data);
        free(ptr1);
        return;
    }

    while (ptr1->link != NULL) {
        ptr = ptr1;
        ptr1 = ptr1->link;
    }
    ptr->link = NULL;  
    printf("Deleted element is %d\n", ptr1->data);
    free(ptr1);
}
void deleteany() {
    int key;
    if (header->link == NULL) {
        printf("Empty list\n");
        return;
    }
    printf("Enter the key to delete: ");
    scanf("%d", &key);
    ptr = header;
    ptr1 = header->link;
    while (ptr1 != NULL && ptr1->data != key) {
        ptr = ptr1;
        ptr1 = ptr1->link;
    }
    if (ptr1 == NULL)
        printf("Key not found\n");
    else {
        ptr->link = ptr1->link;  
        printf("Deleted element is %d\n", ptr1->data);
        free(ptr1);
    }
}
void traverse() {
    if (header->link == NULL) {
        printf("List is empty\n");
        return;
    }
    printf("Elements are:\n\t\t");
    ptr = header->link;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
}

void display() {  
    if (header->link == NULL) {
        printf("List is empty\n");
        return;
    }

    printf("Displaying the linked list:\n\t\t");
    ptr = header->link;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
}
