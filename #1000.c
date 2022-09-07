#include <stdio.h>

int main(void) {
	
	int A, B;
	scanf_s("%d %d", &A, &B);
	printf("%d", A+B); 
	return 0;
}
	/*
	1. 입력을 어떻게 받는가 -> scanf 
	2. 출력은 어떻게 하는가-> printf
	3. %d는 4byte 정수값을 입력받는다.
	4. scanf 함수에 있는 & 의 의미 : 변수 앞에 & 를 붙히게 되면 해당 변수의 주소를 가리키게 된다. */
