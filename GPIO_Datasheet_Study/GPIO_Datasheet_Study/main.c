#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

typedef struct Register {
    unsigned int a : 1;
    unsigned int b : 2;
    unsigned int c : 3;
    unsigned int d : 4;
    unsigned int e : 5;
    unsigned int f : 6;
    unsigned int g : 7;
    unsigned int h : 4;
}reg;

void set_bits(int area,int loc);

int main(void) {
    unsigned __int64 start;
    unsigned __int64 end;
    int i;

    printf("Bit 연산을 이용한 프로그램을 시작합니다.\n");

    // Bit 연산을 이용한 경우
    start = GetTickCount64();
    for (i = 0; i < 10000000; i++) {
        set_bits(15, 28);
        set_bits(127, 21);
        set_bits(63, 15);
        set_bits(31, 10);
        set_bits(15, 6);
        set_bits(7, 3);
        set_bits(3, 1);
        set_bits(1, 0);
    }
    end = GetTickCount64();
    printf("%ums\n", end - start);


    printf("Bit 연산을 이용한 프로그램을 시작합니다.\n");

    reg regis;

    regis.a = 0; regis.b = 0; regis.c = 0; regis.d = 0; regis.e = 0; regis.f = 0; regis.g = 0; regis.h = 0;
    regis.h = 15;
    unsigned int* regp = &regis;
    printf("%u\n", *regp);

    start = GetTickCount64();
    for (i = 0; i < 10000000; i++) {
        int j;
        //regis.a = 0; regis.b = 0; regis.c = 0; regis.d = 0; regis.e = 0; regis.f = 0; regis.g = 0; regis.h = 0;
        *regp = 0;
        regis.h = 15;
        //regis.a = 0; regis.b = 0; regis.c = 0; regis.d = 0; regis.e = 0; regis.f = 0; regis.g = 0; regis.h = 0;
        *regp = 0;
        regis.g = 127;
        //regis.a = 0; regis.b = 0; regis.c = 0; regis.d = 0; regis.e = 0; regis.f = 0; regis.g = 0; regis.h = 0;
        *regp = 0;
        regis.f= 63;
        //regis.a = 0; regis.b = 0; regis.c = 0; regis.d = 0; regis.e = 0; regis.f = 0; regis.g = 0; regis.h = 0;
        *regp = 0;
        regis.e = 31;
        //regis.a = 0; regis.b = 0; regis.c = 0; regis.d = 0; regis.e = 0; regis.f = 0; regis.g = 0; regis.h = 0;
        *regp = 0;
        regis.d = 15;
        //regis.a = 0; regis.b = 0; regis.c = 0; regis.d = 0; regis.e = 0; regis.f = 0; regis.g = 0; regis.h = 0;
        *regp = 0;
        regis.c = 7;
        //regis.a = 0; regis.b = 0; regis.c = 0; regis.d = 0; regis.e = 0; regis.f = 0; regis.g = 0; regis.h = 0;
        *regp = 0;
        regis.b = 3;
        //regis.a = 0; regis.b = 0; regis.c = 0; regis.d = 0; regis.e = 0; regis.f = 0; regis.g = 0; regis.h = 0;
        *regp = 0;
        regis.a = 1;
    }
    end = GetTickCount64();
    printf("%ums\n", end - start);
}

void set_bits(int area, int loc) {
    unsigned int number = 0;
    number = (number) | (area << loc);
    /*printf("0x%X\n", number);*/
}