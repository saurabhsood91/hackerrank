#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct list {
  struct word* words;
  int number_of_words;
};

struct word {
  char *word;
};

void init(struct list* list, int N) {
  list->words = (struct word*) malloc(N * sizeof(struct word));
  list->number_of_words = -1;
}

void add_word_to_list(char *s, struct list *wordlist) {
  wordlist->words[++(wordlist->number_of_words)].word = (char*)malloc(20 * sizeof(char));
  strcpy(wordlist->words[wordlist->number_of_words].word, s);
}

int count_occurrences(char *s, struct list* wordlist) {
  int occurences = 0;
  for(int i = 0; i <= wordlist->number_of_words; i++) {
    if(strcmp(s, wordlist->words[i].word) == 0) {
      occurences++;
    }
  }
  return occurences;
}

int main() {
  int N;
  int Q;
  struct list word_list;
  int number_of_times = 0;
  scanf("%d", &N);
  init(&word_list, N);
  for(int i = 0; i < N; i++) {
    char s[20];
    scanf("%s", s);
    //Add to list
    add_word_to_list(s, &word_list);
  }
  scanf("%d", &Q);
  for(int i = 0; i < Q; i++) {
    char s[20];
    scanf("%s", s);
    // Count number of occurences;
    number_of_times = count_occurrences(s, &word_list);
    printf("%d\n", number_of_times);
  }
  return 0;
}
