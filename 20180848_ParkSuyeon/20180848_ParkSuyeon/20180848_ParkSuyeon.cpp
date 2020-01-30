// // // // // // // // // // // // // // // // // // // //
//  20180848_ParkSuyeon.cpp                           // //
//  1차원 배열을 통해 가맹점(1개)의 이번 주(월화수목금) 총매출을 구하고, //
//  2차원 배열을 통해 7개 가맹점의 이번 주(월화수목금) 총매출을 구한 후, //
//  3차원 배열을 통해 7개 가맹점의 4주 누적 매출을 구하는 프로그램이다.  //
//  Created by Suyeon Park on 2019/10/09.                //
//  Copyright © 2019 Suyeon Park. All rights reserved.   //
// // // // // // // // // // // // // // // // // // // //

#include <iostream>
using namespace std;

const int NUMBER_OF_DAYS = 5;
const int NUMBER_OF_STORES = 7;

void totalSales(int list[], int days);  // 가맹점1의 1주 매출과 총매출을 출력하는 함수 선언
void totalSales(int table[][NUMBER_OF_DAYS], int stores);  // 가맹점들의 1주 매출과 총매출을 출력하는 함수 선언
void totalSales(int matrix[][NUMBER_OF_STORES][NUMBER_OF_DAYS], int weeks);  // 가맹점들의 4주 누적매출과 총매출을 출력하는 함수 선언

int main()
{
    const int NUMBER_OF_WEEKS = 4;
    
    int weeklySales[NUMBER_OF_DAYS] = {5, 6, 5, 8, 7}; // 가맹점1의 1주 매출
    int storeWeeklySales[NUMBER_OF_STORES][NUMBER_OF_DAYS] = {
        {5, 6, 5, 8, 7}, {7, 6, 4, 5, 8}, {9, 8, 9, 10, 6}, {9, 7, 7, 7, 6},
        {3, 5, 4, 3, 2}, {1, 4, 4, 2, 3}, {10, 13, 8, 9, 12} };
    int storeMonthlySales[NUMBER_OF_WEEKS][NUMBER_OF_STORES][NUMBER_OF_DAYS] = {
        {{5, 6, 5, 8, 7}, {7, 6, 4, 5, 8}, {9, 8, 9, 10, 6}, {9, 7, 7, 7, 6},
        {3, 5, 4, 3, 2}, {1, 4, 4, 2, 3}, {10, 13, 8, 9, 12}}, // 1주
        {{2, 4, 8, 1, 5}, {3, 3, 4, 1, 1}, {9, 7, 8, 7, 9}, {2, 9, 3, 8, 10},
        {4, 3, 2, 5, 5}, {3, 9, 10, 9, 9}, {9, 10, 12, 9, 10}}, // 2주
        {{2, 9, 3, 10, 5}, {9, 2, 5, 8, 7}, {7, 9, 4, 7, 8}, {4, 3, 4, 7, 8},
        {3, 5, 4, 3, 6}, {3, 7, 4, 8, 3}, {6, 3, 5, 9, 2}}, // 3주
        {{4, 5, 3, 2, 5}, {7, 10, 4, 5, 3}, {5, 6, 4, 3, 3}, {9, 3, 4, 7, 3},
        {4, 5, 4, 3, 6}, {2, 7, 4, 8, 3}, {6, 3, 5, 9, 2}}}; // 4주
    
    totalSales(weeklySales, NUMBER_OF_DAYS); // 가맹점1의 1주 매출과 총매출을 출력하는 함수 호출
    totalSales(storeWeeklySales, NUMBER_OF_STORES);  // 가맹점들의 1주 매출과 총매출을 출력하는 함수 호출
    totalSales(storeMonthlySales, NUMBER_OF_WEEKS);  // 가맹점들의 4주 누적 매출과 총매출을 출력하는 함수 호출
    
    return 0;
}

void totalSales(int list[], int days)  // 가맹점1의 1주 매출과 총매출을 출력하는 함수
{
    cout << "********가맹점1의 이번 주 매출(단위:천만원)\n\n" << endl;
    cout << "\t\t\t월\t화\t수\t목\t금\t총매출" << endl;
    cout << "------------------------------------" << endl;
    cout << "가맹점1\t\t";
    
    for (int i = 0; i < days; i++)
    {
        cout << list[i] << "\t";  // 가맹점1의 한 주 동안의 하루 매출 출력
    }
    
    int sum = 0;
    for (int j = 0; j < days; j++)
    {
        sum += list[j];  // 가맹점1의 한 주 총매출 출력
    }
    cout << sum << "\n\n\n";
}

void totalSales(int table[][NUMBER_OF_DAYS], int stores)  // 가맹점들의 1주 매출과 총매출을 출력하는 함수
{
    cout << "********가맹점들의 이번 주 총매출(단위:천만원)\n\n" << endl;
    cout << "\t\t\t월\t화\t수\t목\t금\t총매출" << endl;
    cout << "------------------------------------" << endl;
    
    for (int j = 0; j < stores; j++)
    {
        cout << "가맹점" << j+1 << "\t\t";  // 가맹점들의 이름 출력
        int sum = 0;
        for (int k = 0; k < NUMBER_OF_DAYS; k++)
        {
            cout << table[j][k] << "\t";  // 가맹점들의 일당 매출 출력
            sum += table[j][k]; // 각 가맹점들의 한 주 동안의 총매출 출력
        }
        cout << sum << endl;
    }
    
    cout << "\n\n\n";
}

void totalSales(int matrix[][NUMBER_OF_STORES][NUMBER_OF_DAYS], int weeks)  // 가맹점들의 4주 누적매출과 총매출을 출력하는 함수
{
    cout << "********가맹점들의 4주누적 총매출(단위:천만원)\n\n" << endl;
    
    int totals[NUMBER_OF_STORES];  // 각 가맹점마다의 누적매출을 따져야 하기에 한 주의 계산값을 가맹점마다 저장할 일차원 배열이 새로 필요하다.
    for (int i = 0; i < NUMBER_OF_STORES; i++)
    {
        totals[i] = 0;  // 새 일차원 배열 초기화
    }
    
    for(int i = 0; i < weeks; i++)
    {
        cout << i+1 << "주차/\t\t월\t화\t수\t목\t금\t누적매출" << endl;
        cout << "------------------------------------" << endl;
        for (int j = 0; j < NUMBER_OF_STORES; j++)
        {
            cout << "가맹점" << j+1 << "\t\t";  // 가맹점들의 이름 출력
            int firstSum = 0;
            for (int k = 0; k < NUMBER_OF_DAYS; k++)
            {
                firstSum += matrix[i][j][k];
                cout << matrix[i][j][k] << "\t";  // 가맹점들의 일당 매출 출력
            }
            totals[j] += firstSum;
            cout << totals[j] << endl;  // 가맹점들의 누적매출 출력
        }
        cout << "\n\n";
    }
}
