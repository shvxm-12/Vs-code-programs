#include <stdio.h>
#include <stdlib.h>

// Define node structure
struct Node {
    int coeff;          // coefficient
    int exp;            // exponent
    struct Node* next;  // pointer to next term
};

// Function to create a new node
struct Node* createNode(int coeff, int exp) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->coeff = coeff;
    newNode->exp = exp;
    newNode->next = NULL;
    return newNode;
}

// Insert term at the end
void insertTerm(struct Node** head, int coeff, int exp) {
    struct Node* newNode = createNode(coeff, exp);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Display polynomial
void displayPolynomial(struct Node* head) {
    if (head == NULL) {
        printf("Polynomial is empty.\n");
        return;
    }
    while (head != NULL) {
        printf("%dx^%d", head->coeff, head->exp);
        head = head->next;
        if (head != NULL)
            printf(" + ");
    }
    printf("\n");
}

int main() {
    struct Node* poly = NULL;
    int n, coeff, exp;

    printf("Enter number of terms in polynomial: ");
    scanf("%d", &n);

    printf("Enter each term as coefficient and exponent:\n");
    for (int i = 0; i < n; i++) {
        printf("Term %d: ", i + 1);
        scanf("%d %d", &coeff, &exp);
        insertTerm(&poly, coeff, exp);
    }

    printf("\nPolynomial Representation:\n");
    displayPolynomial(poly);

    return 0;
}
