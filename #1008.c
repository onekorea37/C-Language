#include <stdio.h>

int main(void) {

double A,B;
scanf("%lf %lf", &A, &B);
printf("%.9lf\n", A/B);
return 0;
}


-------------------
#include <stdio.h>

int main(void) {
    
    float A,B;
    scanf("%f %f", &A, &B);
    printf("%.9f", A/B);

    return 0;
}

// 위 코드는 맞고 밑에 코드는 틀렸다. double과 float의 차이는 무엇일까?
// https://www.acmicpc.net/problem/1008
