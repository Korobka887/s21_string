#ifndef SRC_S21_STRING_H_
#define SRC_S21_STRING_H_

#define s21_NULL ((void *)0)

#define S21_TEXTMAX 2048

typedef long unsigned s21_size_t;

void *s21_memchr(const void *str, int c, s21_size_t n);
void *s21_memset(void *str, int c, s21_size_t n);
char *s21_strncat(char *dest, const char *src, s21_size_t n);
char *s21_strncpy(char *dest, const char *src, s21_size_t n);
char *s21_strstr(const char *haystack, const char *needle);
char *s21_strtok(char *str, const char *delim);
char *s21_strerror(int errnum);
void *s21_memcpy(void *dest, const void *src, s21_size_t n);
int s21_strncmp(const char *str1, const char *str2, s21_size_t n);
int s21_memcmp(const void *str1, const void *str2, s21_size_t n);
s21_size_t s21_strlen(const char *str);
char *s21_strchr(const char *str, int c);
char *s21_strpbrk(const char *s1, const char *s2);
char *s21_strrchr(const char *str, int c);

#endif
