#include <stdio.h>

void insertAtSecondPosition(int arr[], int *n, int newCard){
    if (*n >= 100) { 
        printf("Cannot insert the card. The array is full.\n");
        return;
    }
    for (int i = *n; i > 1; i--) {
        arr[i] = arr[i - 1];
    }
    arr[1] = newCard;
    (*n)++;
}

int main() {
    int cards[100];
    int n, newCard;
    printf("Enter the number of cards in the collection: ");
    scanf("%d", &n);
    printf("Enter the values of the cards:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &cards[i]);
    }
    printf("Enter the new card value to insert at the second position: ");
    scanf("%d", &newCard);
    insertAtSecondPosition(cards, &n, newCard);
    printf("Updated card collection:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", cards[i]);
    }
    printf("\n");
    return 0;
}