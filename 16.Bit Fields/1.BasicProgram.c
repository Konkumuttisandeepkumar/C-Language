#include <stdio.h>
#pragma pack(1)

// Without using bitfields
struct WithoutBitfield {
    unsigned int flag1;   // 4 bytes (assuming int is 4 bytes)
    unsigned int flag2;   // 4 bytes
    unsigned int flag3;   // 4 bytes
};

// Using bitfields
struct WithBitfield {
    unsigned int flag1 : 1;  // 1 bit
    unsigned int flag2 : 1;  // 1 bit
    unsigned int flag3 : 1;  // 1 bit
};

int main() {
    // Without bitfields
    struct WithoutBitfield noBitfield = {1,0,1};
    // With bitfields
    struct WithBitfield withBitfield = {1,0,1};

    // Checking sizes
    printf("Size without bitfields: %lu bytes\n", sizeof(noBitfield));
    printf("Size with bitfields: %lu bytes\n", sizeof(withBitfield));
    printf("\n");
	
    return 0;
}
