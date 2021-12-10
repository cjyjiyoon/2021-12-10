/*
    개발 환경 : Visual Studio Code 
    버전: 1.62.3 (user setup)
    커밋: ccbaa2d27e38e5afa3e5c21c1c7bef4657064247
    날짜: 2021-11-17T08:11:14.551Z
    Electron: 13.5.2
    Chrome: 91.0.4472.164
    Node.js: 14.16.0
    V8: 9.1.269.39-electron.0
    OS: Windows_NT x64 10.0.19043
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "main.h"
#include "classification.c"
#include "print.c"


int main(void)
{
    int get;

    struct data myData = {0};

    //데이터의 도메인 선택.
    //두 지역의 환경이 다르기 때문에 두 지역의 데이터를 구분해 별개의 데이터셋으로 계산.
    printf("새로운 데이터의 지역을 선택하세요. 1 : bejaia / 2 : bel-abbes\n");
    scanf("%d", &get);

    //데이터 입력
    printf("일을 입력하세요. (1~31) : ");
    scanf("%d", &myData.day);
    printf("월을 입력하세요. (6~9) : ");
    scanf("%d", &myData.month);
    printf("당일 정오의 최대 온도(temperatue)를 입력하세요. (22도~42도) : ");
    scanf("%lf", &myData.temperature);
    printf("상대 습도(RH)를 입력하세요. (21~90) : ");
    scanf("%lf", &myData.rh);
    printf("풍속(WS)를 입력하세요. (6~29) : ");
    scanf("%lf", &myData.ws);
    printf("일일 강우량(Rain)을 입력하세요. (0~16.8) : ");
    scanf("%lf", &myData.rain);
    printf("미세연료수분지수(FFMC)를 입력하세요. (28.6~92.5) : ");
    scanf("%lf", &myData.ffmc);
    printf("임내 표층 연료층의 습도 예측 지수(DMC)를 입력하세요. (1.1~65.9) : ");
    scanf("%lf", &myData.dmc);
    printf("가뭄 지수(DC)를 입력하세요. (7~220.4) : ");
    scanf("%lf", &myData.dc);
    printf("초기 확산 지수(ISI)를 입력하세요. (0~18.5) : ");
    scanf("%lf", &myData.isi);
    printf("BUI(Build Up Index) 지수를 입력하세요. (1.1~68) : ");
    scanf("%lf", &myData.bui);
    printf("산불기상지수(FWI)를 입력하세요. (0~31.1) : ");
    scanf("%lf", &myData.fwi);

    //결과값 출력
    printResult(&myData, get);

    return 0;
}
