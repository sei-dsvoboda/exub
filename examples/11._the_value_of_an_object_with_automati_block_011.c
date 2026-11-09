int is_vowel(unsigned char c) {
  return strchr("aeiouy", c) != NULL;
}

int has_vowels(size_t max, unsigned char str[max]) {
  unsigned char c;
  for (size_t i = 0; i < max; i++) {
    if (is_vowel(c)) { // oops, should use str[i]!
      return 1;
    }
  }
  return 0;
}
