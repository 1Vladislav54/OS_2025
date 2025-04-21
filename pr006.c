#include <stdio.h>

int main(int argc, char*argv[], char* envp[]) {
        printf("Колличество аргументов, переданных программе:%d\n",argc);
	printf("\n");
	for (int i=0; i < argc; i++)
		printf("Аргумент [%d]: %s\n", i, argv[i]);
	printf("\n");
       	return 0;
}	
