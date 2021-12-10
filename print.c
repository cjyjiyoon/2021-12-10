#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "main.h"

//결과값 출력
void printResult(struct data *myData, int get)
{

    //지역에 따라 다른 학습 결과 사용
    switch (get)
    {
    case 1:
        bejaiaJ48(myData);
        break;

    case 2:
        belabbesJ48(myData);
        break;
    }
    printf("결과 : ");
    printf(myData->fire ? "fire" : "not fire");
}