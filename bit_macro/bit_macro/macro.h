#ifndef MACRO_H
#define MACRO_H
// �� ��Ʈ Ŭ����
#define clear_bit(data,loc)((data)&=~(0x1<<(loc)))
// ���ӵ� ���� ��Ʈ Ŭ����
#define clear_bits(data,area,loc)((data)&=~((area)<<(loc)))

// �� ��Ʈ ����
#define set_bit(data,loc)((data|=(0x1<<(loc)))
// ���ӵ� ���� ��Ʈ ����
#define set_bits(data,area,loc)((data)|=((area)<<(loc)))

// �� ��Ʈ ����
#define invert_bit(data,loc)((data)^=(0x1<<(loc)))
// ���ӵ� ���� ��Ʈ ����
#define invert_bits(data,area,loc)((data)^=((area)<<(loc)))

// ��Ʈ �˻�
#define check_bit(data,loc)((data)&(0x1<<(loc)))

// ��Ʈ ����
#define extract_bits(data,area,loc)(((data)>>(loc))&(area))
#endif