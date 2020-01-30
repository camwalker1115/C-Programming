// // // // // // // // // // // // // // // // // // // //
//  Complex.cpp                                          //
//  과제2_20180848_ParkSuyeon                             //
// // // // // // // // // // // // // // // // // // // //
//  Created by Cameron Park on 2019/12/12.               //
//  Copyright © 2019 Cameron Park. All rights reserved.  //
// // // // // // // // // // // // // // // // // // // //

#include "Complex.h"

int Complex::numberOfComplex = 0; // (복소수의 개수) 정적 멤버변수 초기화

Complex::Complex() // 기본 생성자
{
    real = 0;
    image = 0;
    numberOfComplex++; // 객체가 하나 생성될 때마다 복소수의 개수 증가(기본 생성자)
}

Complex::Complex(int real, int image) // 매개변수 생성자
{
    this->real = real;
    this->image = image;
    numberOfComplex++; // 객체가 하나 생성될 때마다 복소수의 개수 증가(매개변수 생성자)
}

Complex::~Complex() // 소멸자
{
    numberOfComplex--; // 소멸자가 불리면 복소수의 개수 감소
}

int Complex::getReal() const // 객체의 실수부(real 값) 돌려줌
{
    return real;
}

int Complex::getImage() const // 객체의 허수부(image 값) 돌려줌
{
    return image;
}

void Complex::showComplex() const // 객체의 현재 복소수 값을 a+bi 형태로 출력함
{
    cout << real << "+" << image << "i" << endl;
}

int Complex::getNumberOfComplex() // 생성된 복소수의 개수를 리턴함
{
    return numberOfComplex;
}
