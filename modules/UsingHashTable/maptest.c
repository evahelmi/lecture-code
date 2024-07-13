#include <stdio.h>
#include "ADTMap.h"
#include <string.h>

int compare_strings(Pointer a, Pointer b) {
    // Μετατροπή των Pointer σε char*
    char* str1 = (char*)a;
    char* str2 = (char*)b;
    
    // Χρήση της strcmp για σύγκριση
    return strcmp(str1, str2);
}

int main(){
    Map map = map_create(compare_strings, NULL, NULL);
    map_insert(map, "one", *(int*)1);
    
}