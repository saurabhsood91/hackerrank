#include <stdio.h>
#include <stdlib.h>

struct array {
  struct sequence *sequences;
};

struct sequence {
  int *data;
  size_t used;
  size_t size;
  int no_of_elements;
};

void init(struct array *arr, int N, int initialSize) {
  //Initialize sequences array
  arr->sequences = (struct sequence*) malloc(N * sizeof(struct sequence));
  // Initialize the data attribute of individual sequences
  for(int i = 0; i < N; i++) {
    arr->sequences[i].data = (int*) malloc(initialSize * sizeof(int));
    arr->sequences[i].used = -1;
    arr->sequences[i].no_of_elements = 0;
    arr->sequences[i].size = initialSize;
  }
}

void print_sequence(struct sequence *seq) {
  for(int i = 0; i <= seq->used; i++) {
    printf("%d\t", seq->data[i]);
  }
  printf("\n");
}

void insert_array(struct sequence *seq, int element) {
  if(seq->used == seq->size - 1) {
    // Double the size of the array
    seq->size *= 2;
    seq->data = (int*) realloc(seq->data, seq->size * sizeof(int));
  }
  seq->data[++(seq->used)] = element;
  seq->no_of_elements++;
}

int main() {
  int N;
  int Q;
  struct array* list;
  // Read the first line
  scanf("%d %d", &N, &Q);

  // Initialize list
  init(list, N, 5);
  int lastans = 0;
  for(int i = 0; i < Q; i++) {
    // Read Query
    int x, y, t;
    scanf("%d %d %d", &t, &x, &y);
    if(t == 1) {
      // Insert operation
      // Insert y into (x xor lastans mod-n)th sequence
      int index = (x ^ lastans) % N;
      struct sequence *seq = &(list->sequences[index]);
      insert_array(seq, y);
    } else if(t == 2) {
      // Get sequence
      int index = (x ^ lastans) % N;
      struct sequence *seq = &(list->sequences[index]);
      // Get (y mod size)th element
      int element = seq->data[y % seq->no_of_elements];
      lastans = element;
      printf("%d\n", element);
    }
  }
  return 0;
}
