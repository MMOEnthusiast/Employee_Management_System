#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define Employee struct emp
void add(FILE * fp);
void * del(FILE * fp);
void modify(FILE * fp);
void display_whole_list(FILE * fp);
void searchRecord(FILE * fp);
void printChar(FILE * fp);
void printHead();