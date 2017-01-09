#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
	size_t len = my_strlen("hello World");
	printf("Length is %lu\n", len );
	return 0;
}
	//implementing my own version of size_t strlen() function
	//size_t is an unsigned integral type: The length of a string cannot be negative
	// my_strlen() function returns the size of any given string


size_t my_strlen(const char* str) {
	if(str == NULL) { //check is the string is empty
		return 0;
	}

	int length = 0;
const char *ch = str; 
while (*ch != '\0') {
	length ++;
	ch++;
	}
return length;
}

//implementing strchr() function to check a character in a string
//Things to remember: Chars are integers at heart
//function should handle nulls, and return null if a char is not found in the strign

char* my_strchr(const char* str, int ch) {
	if(str == NULL) {
		return NULL;
	}

	while (*str != '\0') {
		if(*str == ch) {
			return (char*) str;//cast a const char* to char*
		}
		str++;
	}

	return NULL;
}

//implementing strstr() function
//a function to check for a string in a string
//returns a pointer to where the string needle is present in the string haystack

char* my_strstr(const char* haystack, const char* needle) {
	if(haystack == NULL || needle == NULL) {
		return NULL;
	}

	while (*haystack != '\0') {
		if(*haystack == *needle) {
			const char* h = haystack;
			const char* n = needle;
			while(*n != '\0' && *h == *n) {
				h++;
				n++;
			}
			if (*n == '\0') {
				return (char*) haystack;
			}
		}
		haystack ++;
	}
	return NULL;
}


//implementing strcmp() from scratch
//Compares two strings' length
int my_strcmp(const char* str1, const char* str2) {
    if (str1 == NULL && str2 == NULL) { // handle null input corner cases
        return 0;
    }
    if (str1 == NULL) {
        return 0 - *str2;//if str1 is NULL, then consider it smaller than str2
    }
    if (str2 == NULL ) {
        return *str1;//if str2 is NULL then consider it smaller than str1
    }
    
    const char* ch1 = str1;
    const char* ch2 = str2;
    
    while(*ch1 != '\0' && *ch2 != '\0') {
        if(*ch1 != *ch2) {//simply subtract the ASCII codes of the letters at which the mismatch occurs.
            return *ch1 - *ch2;
        }
        ch1 ++;//increament both pointers
        ch2++;
    }
    if (*ch1 == '\0' && *ch2 != '\0') {
        return 0 - *ch2;
    }
    if (*ch1 != '\0' && *ch2 == '\0') {
        return *ch1;
    }
    return 0;
}









