//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

unsigned char state = 0;

void main(void) {
	unsigned char NS, EW, T3, T5;
	NS = EW = T3 = T5 = 0;
	char direction;
	unsigned char loc_state = state;
	while (1) {
		printf("자동차가 진행할 방향을 선택하십시오(동,서,남,북) : ");
		scanf("%c", &direction);
		if (direction == '동' || direction == '서') {
			EW = 1;
		}

		if ((EW && T5)) {
			state = 1;
		}
		else if(NS||!(EW)&&T3){
			state = 0;
		}
	}
}