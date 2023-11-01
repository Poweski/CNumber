#pragma once
#include <string>

class CNumber
{
private:

    int* digits;

    int size;

    void decreaseSize(CNumber& object);
    
public:
   
    CNumber();

    ~CNumber();

    void operator=(const int value);

    void operator=(const CNumber& other);

    CNumber operator+(const CNumber& other);

    CNumber operator-(const CNumber& other);

    CNumber operator*(CNumber& other);

    CNumber operator/(CNumber& other);

    int compareTo(const CNumber& other);

    std::string toStr();
};

const int minimalSize = 2;
const int divider = 10;

const char plusSign = '+';
const char minusSign = '-';
const char charZero = '0';

const std::string stringZero = "0";
const std::string divisionErrorMessage = "Error! Division by 0!";
