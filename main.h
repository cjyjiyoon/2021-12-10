#pragma once

//각 항목의 속성을 정의
struct data
{
    //attributes
    int day;            //attribute : 날짜(1~31)
    int month;          //attribute : 월(6~9)
    double temperature; //attribute : 그날 정오의 최대 온도(22~42)
    double rh;          //attribute : 상대 습도(21~90)
    double ws;          //attribute : 풍속(6~29)
    double rain;        //attribute : 일일 강우량(0~16.8)
    double ffmc;        //attribute : 미세연료수분지수(28.6~92.5)
    double dmc;         //attribute : 임내 표층 연료층의 습도 예측 지수(1.1~65.9)
    double dc;          //attribute : 가뭄 지수(7~220.4)
    double isi;         //attribute : 초기 확산 지수(0~18.5)
    double bui;         //attribute : BUI(build up index)지수(1.1~68)
    double fwi;         //attribute : 산불기상지수(0~31.1)

    //class
    bool fire; //class : 산불 발생 유무. fire=true, not fire=false.
};

void belabbesJ48(struct data *myData);
void bejaiaJ48(struct data *myData);
void printResult(struct data *myData, int get);
