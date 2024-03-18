#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "data.h"

void test_readRTS() {
    struct RTS_Packet rts;
    FILE *file = fopen("test_data.txt", "r");
    if (file == NULL) {
        printf("Failed to open test_data.txt\n");
        return;
    }

    // Test case 1: Valid input
    fprintf(file, "RTS,12345,67890\n");
    rewind(file);
    readRTS(&rts, file);

    

    if (*(rts.addr1) != 12345 || *(rts.addr2) != 67890) {
        printf("Test case 1 failed\n");
    } else {
        printf("Test case 1 passed\n");
    }

    // Test case 2: Invalid input
    fprintf(file, "Invalid,abc,def\n");
    rewind(file);
    readRTS(&rts, file);
    if (*(rts.addr1) != 0 || *(rts.addr2) != 0) {
        printf("Test case 2 failed\n");
    } else {
        printf("Test case 2 passed\n");
    }

    fclose(file);
}

int main() {
    test_readRTS();
    return 0;
}