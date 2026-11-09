struct List { struct List *next; // ... };

void free_list(struct List *head) {
  for (; head != NULL; head = head->next) {  // Undefined Behavior
    free(head);
  }
}
