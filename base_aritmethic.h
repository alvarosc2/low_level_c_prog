#ifndef BASE_ARITHMETIC_H
#define BASE_ARITHMETIC_H

int len(const char *str);
int pow_it(int base, int exp);
int pow_rec(int base, int exp);
int str2int(const char *str);
int countBits(unsigned int value);
void displayBits(unsigned int value, char *binary, unsigned int size);

#endif