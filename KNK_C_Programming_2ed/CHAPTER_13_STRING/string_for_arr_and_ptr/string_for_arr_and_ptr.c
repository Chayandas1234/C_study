#include <stdio.h>
#include <stdlib.h>

int main() {
	char str[] = "Hello";
	char* ptr = str;

	*ptr = 'A';	// ptr points to array, so it's legal to access elements in string 

	printf("%s", str);	//Aello\0
	}

