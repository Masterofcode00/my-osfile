4 prg
#include<stdio.h> 
#include<stdlib.h> 
int main() { 
FILE *file; 
char filename[]=”data.txt”; 
char input[100]; 
file=fopen(filename, “w”); 
if (file ==NULL) { 
printf(“Error opening file!\n”); 
exit(1); 
} 
printf(“Enter text to write to the file:\n”); 
fgets(input,sizeof(input),stdin); 
fprintf(file, “%s”, input); 
fclose(file); 
file=fopen(filename, “r”); 
if (file ==NULL) { 
printf(“Error opening file:\n”); 
while (fgets(input, sizeof(input), file)) { 
printf(“%s”, input); 
} 
fclose(file); 
return 0; 
} 