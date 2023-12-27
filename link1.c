void deletepos(int pos) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct node *prev = NULL;
    struct node *curr = head;

    // Handle deletion at the beginning (pos == 1)
    if (pos == 1) {
        head = curr->link;
        free(curr);
        return;
    }

    // Traverse to the node at position pos
    int i;
    for (i = 1; i < pos && curr != NULL; i++) {
        prev = curr;
        curr = curr->link;
    }

    // Check if pos is out of bounds
    if (curr == NULL) {
        printf("Position %d is out of bounds.\n", pos);
        return;
    }

    // Delete the node at position pos
    prev->link = curr->link;
    free(curr);
}
