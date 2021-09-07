#ifndef MACRO_H
#define MACRO_H
// 한 비트 클리어
#define clear_bit(data,loc)((data)&=~(0x1<<(loc)))
// 연속된 여러 비트 클리어
#define clear_bits(data,area,loc)((data)&=~((area)<<(loc)))

// 한 비트 설정
#define set_bit(data,loc)((data|=(0x1<<(loc)))
// 연속된 여러 비트 설정
#define set_bits(data,area,loc)((data)|=((area)<<(loc)))

// 한 비트 반전
#define invert_bit(data,loc)((data)^=(0x1<<(loc)))
// 연속된 여러 비트 반전
#define invert_bits(data,area,loc)((data)^=((area)<<(loc)))

// 비트 검사
#define check_bit(data,loc)((data)&(0x1<<(loc)))

// 비트 추출
#define extract_bits(data,area,loc)(((data)>>(loc))&(area))
#endif