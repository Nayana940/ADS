#include <stdlib.h>
#include<stdio.h>
struct Node {
    int data;
    struct Node* next;
};
void main() {
    struct Node* head = NULL;
    struct Node* temp;
    int data, choice, insertAfterData, searchValue,x;

    while (1) {
        printf("\n1. Create a new node");
        printf("\n2. Insert a new node at the beginning");
        printf("\n3. Insert an element after a particular node");
        printf("\n4. Delete from the beginning");
        printf("\n5. Delete from the end");
        printf("\n6. Search for an element");
        printf("\n7. Display the linked list");
        printf("\n8. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data for the new node: ");
                scanf("%d", &data);
                temp = (struct Node*)malloc(sizeof(struct Node));
                temp->data = data;
                temp->next = head;
                head = temp;
                printf("New node created.\n");
                break;

            case 2:
                printf("Enter data for the new node: ");
                scanf("%d", &data);
                temp = (struct Node*)malloc(sizeof(struct Node));
                temp->data = data;
                temp->next = head;
                head = temp;
                printf("New node inserted at the beginning.\n");
                break;

            case 3:
                printf("Enter data for the new node: ");
                scanf("%d", &data);
                printf("Enter data of the node after which to insert: ");
                scanf("%d", &insertAfterData);
                temp = head;
                while (temp != NULL) {
                    if (temp->data == insertAfterData) {
                        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
                        newNode->data = data;
                        newNode->next = temp->next;
                        temp->next = newNode;
                        printf("New node inserted after the specified node.\n");
                        break;
                    }
                    temp = temp->next;
                }
                if (temp == NULL) {
                    printf("Node with specified data not found.\n");
                }
                break;

            case 4:
                if (head == NULL) {
                    printf("List is empty.\n");
                } else {
                    temp = head;
                    head = head->next;
                    free(temp);
                    printf("Node deleted from the beginning.\n");
                }
                break;

            case 5:
                if (head == NULL) {
                    printf("List is empty.\n");
                } else if (head->next == NULL) {
                    free(head);
                    head = NULL;
                    printf("Node deleted from the end.\n");
                } else {
                    temp = head;
                    while (temp->next->next != NULL) {
                        temp = temp->next;
                    }
                    free(temp->next);
                    temp->next = NULL;
                    printf("Node deleted from the end.\n");
                }
                break;

            case 6:
                printf("Enter the value to search for: ");
                scanf("%d", &searchValue);
                temp = head;
                int found = 0;
                while (temp != NULL) {
                    if (temp->data == searchValue) {
                        found = 1;
                        break;
                    }
                    temp = temp->next;
                }
                if (found) {
                    printf("Element found in the list.\n");
                } else {
                    printf("Element not found in the list.\n");
                }
                break;

            case 7:
                temp = head;
                printf("Linked List: ");
                while (temp != NULL) {
                    printf("%d -> ", temp->data);
                    temp = temp->next;
                }
                printf("NULL\n");
                break;

            case 8:
               
                while (head != NULL) {
                    temp = head;
                    head = head->next;
                    free(temp);
                }
                exit(0);
                break;

            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    }

   
}
