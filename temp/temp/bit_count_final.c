#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#define COUNT 1

#if 1
#define DEBUG_PRINT {printf("\n\n\n\tERROR: 0x%08X\n\n\n", bits.B4);}
#else
#define DEBUG_PRINT
#endif

typedef struct Register {
    unsigned int a : 8;
    unsigned int b : 8;
    unsigned int c : 8;
    unsigned int d : 8;
}T;

typedef union {
    unsigned int B4;
    unsigned short B2[2];
    unsigned char B1[4];
    T struct_B4;
}byte_4;

unsigned int set_bits(unsigned int src, unsigned int area, int loc);

int main(void) {
    unsigned __int64 start;
    unsigned __int64 end;
    int i;
    unsigned int* pint;
    byte_4 bits;
    unsigned int* bits_pointer = &bits;
    unsigned int target_value;

    target_value = 0xFF000000;
    printf("1. 0x%08X \n", target_value);
    printf("1-1. 4Byte 단위 \n");
    start = GetTickCount64();
    for (i = 0; i < COUNT; i++) {
        bits.B4 = 0;// 초기화
        bits.B4 = 0xFF000000;
        if (target_value != bits.B4) {  // 목표값과 결과가 다르게 나올 경우
            DEBUG_PRINT;
        }
    }
    end = GetTickCount64();
    printf("%ums\n", end - start);

    printf("1-2. 2Byte 단위 \n");
    start = GetTickCount64();
    for (i = 0; i < COUNT; i++) {
        bits.B4 = 0;
        bits.B2[1] = 0xFF00;
        if (target_value != bits.B4) {  // 목표값과 결과가 다르게 나올 경우
            DEBUG_PRINT;
        }
    }
    end = GetTickCount64();
    printf("%ums\n", end - start);

    printf("1-3. 1Byte 단위 \n");
    start = GetTickCount64();
    for (i = 0; i < COUNT; i++) {
        bits.B4 = 0;
        bits.B1[3] = 0xFF;
        if (target_value != bits.B4) {  // 목표값과 결과가 다르게 나올 경우
            DEBUG_PRINT;
        }
    }
    end = GetTickCount64();
    printf("%ums\n", end - start);

    printf("1-4. set bits \n");
    start = GetTickCount64();
    for (i = 0; i < COUNT; i++) {
        bits.B4 = 0;
        *bits_pointer = set_bits(bits.B4, 0xFF, 24);
        if (target_value != bits.B4) {  // 목표값과 결과가 다르게 나올 경우
            DEBUG_PRINT;
        }
    }
    end = GetTickCount64();
    printf("%ums\n", end - start);
    printf("\n");



    target_value = 0xFFFF0000;
    printf("2. 0x%08X \n", target_value);
    printf("2-1. 4Byte 단위 \n");
    start = GetTickCount64();
    for (i = 0; i < COUNT; i++) {
        bits.B4 = 0;// 초기화
        bits.B2[1] = 0xFFFF;
        if (target_value != bits.B4) {  // 목표값과 결과가 다르게 나올 경우
            DEBUG_PRINT;
        }
    }
    end = GetTickCount64();
    printf("%ums\n", end - start);

    printf("2-2. 2Byte 단위 \n");
    start = GetTickCount64();
    for (i = 0; i < COUNT; i++) {
        bits.B4 = 0;
        bits.B2[1] = 0xFFFF;
        if (target_value != bits.B4) {  // 목표값과 결과가 다르게 나올 경우
            DEBUG_PRINT;
        }
    }
    end = GetTickCount64();
    printf("%ums\n", end - start);

    printf("2-3. 1Byte 단위 \n");
    start = GetTickCount64();
    for (i = 0; i < COUNT; i++) {
        bits.B4 = 0;
        bits.B1[2] = 0xFF;
        bits.B1[3] = 0xFF;
        if (target_value != bits.B4) {  // 목표값과 결과가 다르게 나올 경우
            DEBUG_PRINT;
        }
    }
    end = GetTickCount64();
    printf("%ums\n", end - start);

    printf("2-4. set bits \n");
    start = GetTickCount64();
    for (i = 0; i < COUNT; i++) {
        bits.B4 = 0;
        *bits_pointer = set_bits(bits.B4, 0xFFFF, 16);
        if (target_value != bits.B4) {  // 목표값과 결과가 다르게 나올 경우
            DEBUG_PRINT;
        }
    }
    end = GetTickCount64();
    printf("%ums\n", end - start);
    printf("\n");



    target_value = 0xFFFFFF00;
    printf("3. 0x%08X \n", target_value);
    printf("3-1. 4Byte 단위 \n");
    start = GetTickCount64();
    for (i = 0; i < COUNT; i++) {
        bits.B4 = 0;// 초기화
        bits.B4 = 0xFFFFFF00;
        if (target_value != bits.B4) {  // 목표값과 결과가 다르게 나올 경우
            DEBUG_PRINT;
        }
    }
    end = GetTickCount64();
    printf("%ums\n", end - start);

    printf("3-2. 2Byte 단위 \n");
    start = GetTickCount64();
    for (i = 0; i < COUNT; i++) {
        bits.B4 = 0;
        bits.B2[0] = 0xFF00;
        bits.B2[1] = 0xFFFF;
        if (target_value != bits.B4) {  // 목표값과 결과가 다르게 나올 경우
            DEBUG_PRINT;
        }
    }
    end = GetTickCount64();
    printf("%ums\n", end - start);

    printf("3-3. 1Byte 단위 \n");
    start = GetTickCount64();
    for (i = 0; i < COUNT; i++) {
        bits.B4 = 0;
        bits.B1[1] = 0xFF;
        bits.B1[2] = 0xFF;
        bits.B1[3] = 0xFF;
        if (target_value != bits.B4) {  // 목표값과 결과가 다르게 나올 경우
            DEBUG_PRINT;
        }
    }
    end = GetTickCount64();
    printf("%ums\n", end - start);

    printf("3-4. set bits \n");
    start = GetTickCount64();
    for (i = 0; i < COUNT; i++) {
        bits.B4 = 0;
        *bits_pointer = set_bits(bits.B4, 0xFFFFFF, 8);
        if (target_value != bits.B4) {  // 목표값과 결과가 다르게 나올 경우
            DEBUG_PRINT;
        }
    }
    end = GetTickCount64();
    printf("%ums\n", end - start);
    printf("\n");



    target_value = 0xFFFFFFFF;
    printf("4. 0x%08X \n", target_value);
    printf("4-1. 4Byte 단위 \n");
    start = GetTickCount64();
    for (i = 0; i < COUNT; i++) {
        bits.B4 = 0;
        bits.B4 = 0xFFFFFFFF;
        if (target_value != bits.B4) {  // 목표값과 결과가 다르게 나올 경우
            DEBUG_PRINT;
        }
    }
    end = GetTickCount64();
    printf("%ums\n", end - start);

    printf("4-2. 2Byte 단위 \n");
    start = GetTickCount64();
    for (i = 0; i < COUNT; i++) {
        bits.B4 = 0;
        bits.B2[0] = 0xFFFF;
        bits.B2[1] = 0xFFFF;
        if (target_value != bits.B4) {  // 목표값과 결과가 다르게 나올 경우
            DEBUG_PRINT;
        }
    }
    end = GetTickCount64();
    printf("%ums\n", end - start);

    printf("4-3. 1Byte 단위 \n");
    start = GetTickCount64();
    for (i = 0; i < COUNT; i++) {
        bits.B4 = 0;
        bits.B1[0] = 0xFF;
        bits.B1[1] = 0xFF;
        bits.B1[2] = 0xFF;
        bits.B1[3] = 0xFF;
        if (target_value != bits.B4) {  // 목표값과 결과가 다르게 나올 경우
            DEBUG_PRINT;
        }
    }
    end = GetTickCount64();
    printf("%ums\n", end - start);

    printf("4-4. set bits \n");
    start = GetTickCount64();
    for (i = 0; i < COUNT; i++) {
        bits.B4 = 0;
        *bits_pointer = set_bits(bits.B4, 0xFFFFFFFF, 0);
        if (target_value != bits.B4) {  // 목표값과 결과가 다르게 나올 경우
            DEBUG_PRINT;
        }
    }
    end = GetTickCount64();
    printf("%ums\n", end - start);
    printf("\n");
}

unsigned int set_bits(unsigned int src, unsigned int area, int loc) {
    unsigned int number;
    number = (src & ~(area << loc)) | (area << loc);
    //DEBUG_PRINT("%08X\n", number);
    return number;
}
