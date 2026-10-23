#include "base_aritmethic.h"

int len(const char *str)
{
    int count = 0;

    while (*str)
    {
        count++;
        str++;
    }

    return count;
}

int pow_it(int base, int exp)
{
    int result = 1;

    while (exp > 0)
    {
        result *= base;
        exp--;
    }

    return result;
}

int pow_rec(int base, int exp)
{
    if (exp == 0)
    {
        return 1;
    }
    else
    {
        exp--;
        return base * pow_rec(base, exp);
    }
}

int binStr2Int(char *strBinValue)
{
    int value = 0;
    int power = len(strBinValue) - 1;

    while (*strBinValue)
    {
        if (*strBinValue == '1')
        {
            value += pow_it(2, power);
        }

        power--;
        strBinValue++;
    }

    return value;
}

int str2int(const char *str)
{
    int result = 0;
    while (*str)
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return result;
}

int countBits(unsigned int value)
{
    int numOfBits = 0;

    while (value)
    {
        numOfBits += value & 1;
        value >>= 1;
    }

    return numOfBits;
}

void displayBits(unsigned int value, char *binary, unsigned int size)
{
    unsigned int mask = 1 << (size - 2);

    for (long unsigned int i = 0; i < size; i++)
    {
        binary[i] = (value & mask) ? '1' : '0';
        mask >>= 1;
    }

    binary[size - 1] = '\0';
}

int hexStr2Int(char *strHexValue)
{
    int hexDigit = 0;
    int result = 0;
    int power = len(strHexValue) - 1;

    while (*strHexValue)
    {
        switch (*strHexValue)
        {
        case '0':
            hexDigit = 0;
            break;
        case '1':
            hexDigit = 1;
            break;
        case '2':
            hexDigit = 2;
            break;
        case '3':
            hexDigit = 3;
            break;
        case '4':
            hexDigit = 4;
            break;
        case '5':
            hexDigit = 5;
            break;
        case '6':
            hexDigit = 6;
            break;
        case '7':
            hexDigit = 7;
            break;
        case '8':
            hexDigit = 8;
            break;
        case '9':
            hexDigit = 9;
            break;
        case 'A':
        case 'a':
            hexDigit = 10;
            break;
        case 'B':
        case 'b':
            hexDigit = 11;
            break;
        case 'C':
        case 'c':
            hexDigit = 12;
            break;
        case 'D':
        case 'd':
            hexDigit = 13;
            break;
        case 'E':
        case 'e':
            hexDigit = 14;
            break;
        case 'F':
        case 'f':
            hexDigit = 15;
            break;

        default:
            break;
        }

        result += hexDigit * pow_it(16, power);
        power--;
        strHexValue++;
    }

    return result;
}

char *revString(char *str)
{
    int length = len(str);
    int index = 0;
    char reversed[11];

    for (int i = length - 1; i >= 0; i--)
    {
        reversed[index] = str[i];
    }

    reversed[index] = '\0';
    return reversed;
}

char *dec2bin(int value)
{
    int remainder = 0;
    int index = 0;
    char binary[64];

    while (value)
    {
        remainder = value % 2;
        if (remainder == 0)
        {
            binary[index] = '0';
        }
        else if (remainder == 1)
        {
            binary[index] = '1';
        }

        index++;
        value /= 2;
    }

    binary[index] = '\0';
}