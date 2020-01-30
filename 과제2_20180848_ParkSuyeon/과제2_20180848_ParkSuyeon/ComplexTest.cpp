// // // // // // // // // // // // // // // // // // // //
//  ComplexTest.cpp                                      //
//  과제2_20180848_ParkSuyeon                             //
// // // // // // // // // // // // // // // // // // // //
//  Created by Cameron Park on 2019/12/12.               //
//  Copyright © 2019 Cameron Park. All rights reserved.  //
// // // // // // // // // // // // // // // // // // // //

#include "Complex.h"

void printComplex(const Complex* pComplexList, const int size); // 각 객체의 복소수값을 출력하는 일반함수

int main()
{
    // step1 테스트 코드
    Complex c1(10, 20);
    Complex c2(30, 40);
    Complex c3;
    c1.showComplex();
    c2.showComplex();
    c3.showComplex();
    
    c3.setReal(7);
    c3.setImage(6);
    c3.showComplex();
    cout << "real number of c1 = " << c1.getReal() << endl;
    cout << "imaginary number of c1 = " << c1.getImage() << endl;
    cout << endl; // step1에서 생성된 객체 수: 3개, 현재까지 생성된 객체 수: 3개
    
    // step2 테스트 코드
    const int SIZE = 4;
    Complex complexArray[SIZE] = { Complex(1,2), Complex(3,7), Complex(11,27), Complex(1,12) };
    printComplex(complexArray, SIZE); // 일반함수 호출
    // step2에서 생성된 객체 수: 4개, 현재까지 생성된 객체 수: 7개
    
    // step3 테스트 코드
    Complex* Complex1 = new Complex(3, 4);
    Complex1->showComplex();
    Complex* Complex2 = new Complex(6, 10);
    Complex2->showComplex();
    cout << endl;
    Complex* cp = new Complex[10];
    for (int i = 0; i < 10; i++)
    {
        cp[i].setReal(i + 1);
        cp[i].setImage(i + 2);
    }
    printComplex(cp, 10); // 생성된 객체 수: 12개, 현재까지 생성된 객체 수: 19개
    cout << "Complex 개수: " << Complex::getNumberOfComplex() << endl; // 19개 출력
    delete Complex2;
    Complex2 = NULL;
    cout << "Complex 개수: " << Complex::getNumberOfComplex() << endl; // 18개 출력
    delete[] cp;
    cp = NULL;
    cout << "Complex 개수: " << Complex::getNumberOfComplex() << endl; // 8개 출력
    
    return 0;
}

void printComplex(const Complex* pComplexList, const int size) // 각 객체의 복소수값을 출력하는 일반함수
{
    for (int i = 0; i < size; i++)
    {
        pComplexList[i].showComplex();
    }
    cout << endl;
}
