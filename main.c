#include <stdio.h>

//  Hello World
int main(void) {
    printf("Hello World! 안녕!\n");
}

// 정수형 변수
int main(void) {
    int age = 12;
    printf("%d\n", age);
    age = 13;
    printf("%d\n", age);
}

// 실수형 변수
int main(void) {
    float f = 46.5f;
    printf("%.2f\n", f); 
    double d = 2.058;
    printf("%.2lf\n", d);
    return 0;
} 

// 상수 
 int main(void) {
    const YEAR = 2000;
    printf("태어난 년도 : %d\n", YEAR);
    // 상수로 정의한 변수는 다시 변경할 수 업습니다.
    YEAR = 1991;
}


// printf 로 알아보는 연산 
int main(void) {
    int add = 3 + 7;
    printf("3 + 7 = %d\n",  add);

    int multifly = 157 * 41;
    printf("157 * 41 = %d\n", multifly);

    printf("%d + %d = %d", 5, 15, 5+15);
} 


// scanf -> 키보드 입력을 받아서 저장 
int main(void) {
    int input; 
    printf("값을 입력하세요 : ");
    scanf_s("%d", &input);
    printf("입력값 : %d\n", input);
    return 0;

   int one, two, three;
    printf("세 가지 정수를 입력하세용 : ");
    scanf_s("%d %d %d", &one, &two, &three);
    printf("첫 번째 값은요 : %d\n", one); 
    printf("두 번째 값은여 : %d\n", two);
    printf("세 번째 값은용 : %d\n", three);
} 


// 문자(한 글자), 문자열(한 글자 이상의 글자들)
int main(void) {
    char c = 'A';
    printf("%c\n", c);
    char str[256];
    scanf_s("%s", str, sizeof(str));
    printf("%s\n", str);
} 



// 프로젝트 - 경찰소에서 조서 작성 
int main(void) {
char name[256];
printf("이름이 어떻게 되십니까? ");
scanf_s("%s", name, sizeof(name));

int age;
printf("올해 나이는요? ");
scanf_s("%d", &age);

float weight;
printf("몸무게는 몇kg 입니까? ");
scanf_s("%f", &weight);

double height;
printf("키는 몇cm 입니까? ");
scanf_s("%lf", &height);

char what[256];
printf("좋습니다. 자, 무슨 범죄를 저질렀죠? ");
scanf_s("%s", what, sizeof(what) );

// 조서 내용 출력 
printf("\n\n ---- 범죄자 정보 ---- \n\n");
printf("이름              : %s\n", name);
printf("나이              : %d\n", age);
printf("몸무게           : %.2f\n", weight);
printf("키                 : %.2lf\n", height);
printf("저지른 범죄   : %s\n", what);
}
