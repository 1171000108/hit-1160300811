#include <stdio.h>

int main(int argc, char const *argv[]) {
	/*
	   feel free to change the code
	 */
    printf("Please input your name:\n");
    char name[100];
    scanf("%s",name);
    sscanf(name,"%[a-zA-Z]",name);
	printf("%sI'm %s!\n", "Hello World!",name);
	return 0;
}
