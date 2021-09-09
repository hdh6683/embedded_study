#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#define COUNT 10

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

void set_bits(int area, int loc);

int main(void) {
    unsigned __int64 start;
    unsigned __int64 end;
    int i;
    unsigned int* pint;
    byte_4 bits;
    byte_4* bits_pointer = &bits;

    printf("1. 0xFF000000 \n");
    printf("1-1. 4Byte 단위 \n");
    start = GetTickCount64();
    for (i = 0; i < COUNT; i++) {
        bits.B4 = 0;// 초기화
        bits.B4 = 0xFF000000;
        //printf("%08X\n", bits.B4);
    }
    end = GetTickCount64();
    printf("%ums\n", end - start);

    printf("1-2. 2Byte 단위 \n");
    start = GetTickCount64();
    for (i = 0; i < COUNT; i++) {
        bits.B4 = 0;
        bits.B2[1] = 0xFF;
        //printf("%08X\n", bits.B4);
    }
    end = GetTickCount64();
    printf("%ums\n", end - start);

    printf("1-3. 1Byte 단위 \n");
    start = GetTickCount64();
    for (i = 0; i < COUNT; i++) {
        bits.B4 = 0;
        bits.B1[3] = 0xFF;
        //printf("%08X\n", bits.B4);
    }
    end = GetTickCount64();
    printf("%ums\n", end - start);

    printf("1-4. set bits \n");
    start = GetTickCount64();
    for (i = 0; i < COUNT; i++) {
        set_bits(0xFF, 24);
        //printf("%08X\n", bits.B4);
    }
    end = GetTickCount64();
    printf("%ums\n", end - start);
    printf("\n");



    printf("2. 0xFFFF0000 \n");
    printf("2-1. 4Byte 단위 \n");
    start = GetTickCount64();
    for (i = 0; i < COUNT; i++) {
        bits.B4 = 0;// 초기화
        bits.B2[1] = 0xFFFF;
        /*printf("%u\n", bits.B4);*/
    }
    end = GetTickCount64();
    printf("%ums\n", end - start);

    printf("2-2. 2Byte 단위 \n");
    start = GetTickCount64();
    for (i = 0; i < COUNT; i++) {
        bits.B4 = 0;
        bits.B2[1] = 0xFFFF;
        /*printf("%u\n", bits.B4);*/
    }
    end = GetTickCount64();
    printf("%ums\n", end - start);

    printf("2-3. 1Byte 단위 \n");
    start = GetTickCount64();
    for (i = 0; i < COUNT; i++) {
        bits.B4 = 0;
        bits.B1[2] = 0xFF;
        bits.B1[3] = 0xFF;
        /*printf("%u\n", bits.B4);*/
    }
    end = GetTickCount64();
    printf("%ums\n", end - start);

    printf("2-4. set bits \n");
    start = GetTickCount64();
    for (i = 0; i < COUNT; i++) {
        set_bits(0xFFFF, 16);
        /*printf("%u\n", bits.B4);*/
    }
    end = GetTickCount64();
    printf("%ums\n", end - start);
    printf("\n");



    printf("3. 0xFFFFFF00 \n");
    printf("3-1. 4Byte 단위 \n");
    start = GetTickCount64();
    for (i = 0; i < COUNT; i++) {
        bits.B4 = 0;// 초기화
        bits.B4 = 0xFFFFFF00;
        /*printf("%u\n", bits.B4);*/
    }
    end = GetTickCount64();
    printf("%ums\n", end - start);

    printf("3-2. 2Byte 단위 \n");
    start = GetTickCount64();
    for (i = 0; i < COUNT; i++) {
        bits.B4 = 0;
        bits.B2[0] = 0xFF00;
        bits.B2[1] = 0xFFFF;
        /*printf("%u\n", bits.B4);*/
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
        /*printf("%u\n", bits.B4);*/
    }
    end = GetTickCount64();
    printf("%ums\n", end - start);

    printf("3-4. set bits \n");
    start = GetTickCount64();
    for (i = 0; i < COUNT; i++) {
        set_bits(0xFFFFFF, 8);
        /*printf("%u\n", bits.B4);*/
    }
    end = GetTickCount64();
    printf("%ums\n", end - start);
    printf("\n");



    printf("4. 0xFFFFFFFF \n");
    printf("4-1. 4Byte 단위 \n");
    start = GetTickCount64();
    for (i = 0; i < COUNT; i++) {
        bits.B4 = 0;
        bits.B4 = 0xFFFFFFFF;
        /*printf("%u\n", bits.B4);*/
    }
    end = GetTickCount64();
    printf("%ums\n", end - start);

    printf("4-2. 2Byte 단위 \n");
    start = GetTickCount64();
    for (i = 0; i < COUNT; i++) {
        bits.B4 = 0;
        bits.B2[0] = 0xFFFF;
        bits.B2[1] = 0xFFFF;
        /*printf("%u\n", bits.B4);*/
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
        /*printf("%u\n", bits.B4);*/
    }
    end = GetTickCount64();
    printf("%ums\n", end - start);

    printf("4-4. set bits \n");
    start = GetTickCount64();
    for (i = 0; i < COUNT; i++) {
        set_bits(0xFFFFFFFF, 0);
        /*printf("%u\n", bits.B4);*/
    }
    end = GetTickCount64();
    printf("%ums\n", end - start);
    printf("\n");
}

void set_bits(int area, int loc) {
    unsigned int number = 0;
    number = (number) | (area << loc);
    //printf("%08X\n", number);
}