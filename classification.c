#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "main.h"



//J48을 사용하여 값을 분석
void bejaiaJ48(struct data *myData)
{
    //가장 정확도가 높은 속성인 ISI로 우선 분류
    if (myData->isi <= 2.7)
    {
        myData->fire = false;
    }
    //그 다음으로 정확도가 높은 속성인 FWI로 분류
    else
    {
        if (myData->fwi > 3.4)
        {
            myData->fire = true;
        }
        else
        {
            //다음으로 정확도가 높은 속성인 temperature로 분류
            if (myData->temperature <= 32)
            {
                myData->fire = true;
            }
            else
            {
                myData->fire = false;
            }
        }
    }
}

//J48을 사용하여 값을 분석
void belabbesJ48(struct data *myData)
{
    //가장 정확도가 높은 속성인 FFMC로 분류
    if (myData->ffmc <= 80)
    {
        myData->fire = false;
    }
    else
    {
        myData->fire = true;
    }
}


