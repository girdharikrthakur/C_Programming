In C, **strings** are represented as arrays of characters, ending with a null terminator (`'\0'`). The standard library `<string.h>` provides a variety of string functions for manipulating and working with these character arrays.

Here are some of the most commonly used string functions in C:

### 1. **`strlen`**: Find the length of a string
```c
size_t strlen(const char *str);
```
- **Description**: Returns the number of characters in the string `str`, excluding the null terminator (`'\0'`).
- **Example**:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    printf("Length of string: %lu\n", strlen(str)); // Output: 13
    return 0;
}
```

### 2. **`strcpy`**: Copy one string to another
```c
char *strcpy(char *dest, const char *src);
```
- **Description**: Copies the string `src` (source) to `dest` (destination), including the null terminator.
- **Example**:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello";
    char dest[20];
    
    strcpy(dest, src);
    printf("Copied string: %s\n", dest); // Output: Hello
    return 0;
}
```

### 3. **`strcat`**: Concatenate (append) one string to another
```c
char *strcat(char *dest, const char *src);
```
- **Description**: Appends the string `src` to the end of the string `dest`. The terminating null character of `dest` is overwritten, and a new null character is appended to the concatenated string.
- **Example**:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello, ";
    char str2[] = "World!";
    
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1); // Output: Hello, World!
    return 0;
}
```

### 4. **`strcmp`**: Compare two strings
```c
int strcmp(const char *str1, const char *str2);
```
- **Description**: Compares two strings `str1` and `str2`.
  - Returns 0 if the strings are equal.
  - Returns a positive value if `str1` is greater than `str2`.
  - Returns a negative value if `str1` is less than `str2`.
- **Example**:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "apple";
    char str2[] = "banana";
    
    int result = strcmp(str1, str2);
    if (result == 0)
        printf("Strings are equal.\n");
    else if (result < 0)
        printf("str1 is less than str2.\n");
    else
        printf("str1 is greater than str2.\n");

    return 0;
}
```

### 5. **`strncpy`**: Copy a specified number of characters from one string to another
```c
char *strncpy(char *dest, const char *src, size_t n);
```
- **Description**: Copies up to `n` characters from `src` to `dest`. If `src` is less than `n` characters long, the remainder of `dest` is filled with null characters.
- **Example**:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello";
    char dest[10];
    
    strncpy(dest, src, 3);
    dest[3] = '\0';  // Ensure the destination string is null-terminated
    printf("Copied string: %s\n", dest); // Output: Hel
    return 0;
}
```

### 6. **`strncat`**: Concatenate a specified number of characters
```c
char *strncat(char *dest, const char *src, size_t n);
```
- **Description**: Appends up to `n` characters from `src` to the string `dest`.
- **Example**:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello, ";
    char str2[] = "World!";
    
    strncat(str1, str2, 3); // Append only the first 3 characters of str2
    printf("Concatenated string: %s\n", str1); // Output: Hello, Wor
    return 0;
}
```

### 7. **`strncmp`**: Compare two strings up to a specified number of characters
```c
int strncmp(const char *str1, const char *str2, size_t n);
```
- **Description**: Compares up to `n` characters of `str1` and `str2`.
- **Example**:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "apple";
    char str2[] = "applesauce";
    
    int result = strncmp(str1, str2, 5); // Compare only the first 5 characters
    if (result == 0)
        printf("The first 5 characters are equal.\n");
    else
        printf("The first 5 characters are not equal.\n");

    return 0;
}
```

### 8. **`strchr`**: Locate the first occurrence of a character in a string
```c
char *strchr(const char *str, int ch);
```
- **Description**: Returns a pointer to the first occurrence of the character `ch` in the string `str`. If the character is not found, it returns `NULL`.
- **Example**:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char *ptr = strchr(str, 'W');
    
    if (ptr)
        printf("Found 'W' at position: %ld\n", ptr - str);
    else
        printf("'W' not found.\n");

    return 0;
}
```

### 9. **`strrchr`**: Locate the last occurrence of a character in a string
```c
char *strrchr(const char *str, int ch);
```
- **Description**: Returns a pointer to the last occurrence of the character `ch` in the string `str`. If the character is not found, it returns `NULL`.

### 10. **`strstr`**: Find the first occurrence of a substring
```c
char *strstr(const char *haystack, const char *needle);
```
- **Description**: Finds the first occurrence of the substring `needle` in the string `haystack`. Returns a pointer to the beginning of the substring if found, or `NULL` if not found.

### Summary
These are some of the most commonly used string functions in C for string manipulation, searching, and comparison. All of these functions are defined in the `<string.h>` header file, so make sure to include it in your program when using these functions.