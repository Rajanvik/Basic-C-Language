// C program for addition of two polynomials
// using Linked Lists
#include<stdio.h>
#include <stdlib.h>

// Node structure containing power and coefficient of
// variable
struct Node {
	int coeff;
	int pow;
	struct Node* next;
};

// Function to create new node
void create_node(int x, int y, struct Node** temp)
{
	struct Node *r, *z;
	z = *temp;
	if (z == NULL) {
		r = (struct Node*)malloc(sizeof(struct Node));
		r->coeff = x;
		r->pow = y;
		*temp = r;
		r->next = (struct Node*)malloc(sizeof(struct Node));
		r = r->next;
		r->next = NULL;
	}
	else {
		r->coeff = x;
		r->pow = y;
		r->next = (struct Node*)malloc(sizeof(struct Node));
		r = r->next;
		r->next = NULL;
	}
}

// Function Adding two polynomial numbers Algorithem.
void polyadd(struct Node* poly1, struct Node* poly2,
			struct Node* poly)
{
	while (poly1->next && poly2->next) {
		// If power of 1st polynomial is greater then 2nd,
		// then store 1st as it is and move its pointer

        // Example :- poly1 = 3x^5
        //            poly2 = 5x^4
        //            poly  = 3x^5
		if (poly1->pow > poly2->pow) {
			poly->pow = poly1->pow;
			poly->coeff = poly1->coeff;
			poly1 = poly1->next;
		}

		// If power of 2nd polynomial is greater then 1st,
		// then store 2nd as it is and move its pointer

        // Example :- poly1 = 6x^3
        //            poly2 = 2x^4
        //            poly  = 2x^4
		else if (poly1->pow < poly2->pow) {
			poly->pow = poly2->pow;
			poly->coeff = poly2->coeff;
			poly2 = poly2->next;
		}

		// If power of both polynomial numbers is same then
		// add their coefficients

        // Example :- poly1 = 6x^3
        //            poly2 = 2x^3
        //            poly  = 8x^3 (6x^3 + 2x^3)
		else {
			poly->pow = poly1->pow;
			poly->coeff = poly1->coeff + poly2->coeff;
			poly1 = poly1->next;
			poly2 = poly2->next;
		}

		// Dynamically create new node
        // Every time the link field will be new poly will contain a new node.
		poly->next = (struct Node*)malloc(sizeof(struct Node));
		poly = poly->next;
		poly->next = NULL;
	}
    // poly ka link list yaha se generate hoga.
	while (poly1->next || poly2->next) {
		if (poly1->next) {
			poly->pow = poly1->pow;
			poly->coeff = poly1->coeff;
			poly1 = poly1->next;
		}
		if (poly2->next) {
			poly->pow = poly2->pow;
			poly->coeff = poly2->coeff;
			poly2 = poly2->next;
		}
		poly->next = (struct Node*)malloc(sizeof(struct Node));
		poly = poly->next;
		poly->next = NULL;
	}
}

// Display Linked list
void show(struct Node* node)
{
	while (node->next != NULL) {
		printf("%dx^%d", node->coeff, node->pow);
		node = node->next;
		if (node->coeff >= 0) {
			if (node->next != NULL)
				printf("+");
		}
	}
}

// Driver code
int main()
{
	struct Node *poly1 = NULL, *poly2 = NULL, *poly = NULL;

	// Create first list of 3x^5 + 5x^4
	create_node(3, 5, &poly1);
	create_node(5, 4, &poly1);

	// Create second list of 5x^4 + 10x^3 + 6x^2 + 1
	create_node(5,  4, &poly2);
	create_node(10, 3, &poly2);
    create_node(6,  2, &poly2);
    create_node(1,  0, &poly2);

	printf("1st Number: ");
	show(poly1);

	printf("\n2nd Number: ");
	show(poly2);

	poly = (struct Node*)malloc(sizeof(struct Node));

	// Function add two polynomial numbers
	polyadd(poly1, poly2, poly);

	// Display resultant List
	printf("\nAdded polynomial: ");
	show(poly);

	return 0;
}
