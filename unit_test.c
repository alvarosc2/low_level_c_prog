#include <criterion/criterion.h>
#include "base_aritmethic.h"

Test(len, cuenta_caracteres)
{
    cr_assert_eq(len("hola"), 4);
}

Test(len, cadena_vacia)
{
    cr_assert_eq(len(""), 0);
}

Test(pow_it, raise2power_iteratively)
{
    cr_assert_eq(pow_it(2, 0), 1);
    cr_assert_eq(pow_it(2, 3), 8);
}

Test(pow_rec, raise2power_recursively)
{
    cr_assert_eq(pow_rec(2, 0), 1);
    cr_assert_eq(pow_rec(2, 3), 8);
}

Test(str2int, converts_a_numeric_string_to_an_integer)
{
    char *provided = "1234";
    int expected = 1234;

    cr_assert_eq(str2int(provided), expected);
}

Test(countBits, count_the_number_of_bits_in_an_integer_value)
{
    unsigned int provided = 123;
    unsigned int expected = 6;

    cr_assert_eq(countBits(provided), expected);

    provided = 11;
    expected = 3;
    cr_assert_eq(countBits(provided), expected);
}

Test(displayBits, convert_an_integer_into_its_binary_representation)
{
    unsigned int provided = 123;
    char *expected = "00000000000000000000000001111011";

    cr_assert_eq(displayBits(provided, 32), expected);
}