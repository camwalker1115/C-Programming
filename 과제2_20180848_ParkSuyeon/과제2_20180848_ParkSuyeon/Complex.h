// // // // // // // // // // // // // // // // // // // //
//  Complex.h                                            //
//  과제2_20180848_ParkSuyeon                             //
// // // // // // // // // // // // // // // // // // // //
//  Created by Cameron Park on 2019/12/12.               //
//  Copyright © 2019 Cameron Park. All rights reserved.  //
// // // // // // // // // // // // // // // // // // // //

#include <iostream>
using namespace std;
#ifndef Complex_H // 다중 포함 방지
#define Complex_H

class Complex
{
public:
    Complex(); // 기본 생성자
    Complex(int, int); // 매개변수 생성자
    ~Complex();  // 소멸자
    
    int getReal() const; // 객체의 실수부(real 값) 돌려줌
    int getImage() const; // 객체의 허수부(image 값) 돌려줌
    void setReal(int); // 객체의 real값을 매개변수로 받은 값으로 세팅함
    void setImage(int); // 객체의 image값을 매개변수로 받은 값으로 세팅함
    void showComplex() const; // 객체의 현재 복소수 값을 a+bi 형태로 출력함
    
    static int getNumberOfComplex(); // 생성된 복소수의 개수를 리턴함
    
private:
    int real; // 복소수의 실수부(reaL number)
    int image; // 복소수의 허수부(imaginary number)
    static int numberOfComplex; // 생성된 복소수의 개수
};

inline void Complex::setReal(int real) // 인라인 함수로 만들어진 첫 번째 set함수
{
    this->real = real;
}

inline void Complex::setImage(int image) // 인라인 함수로 만들어진 두 번째 set함수
{
    this->image = image;
}

#endif /* Complex_h */
