#include <stdio.h>

int main() {
    printf("-------------------------\nVALUE and POINTERS\n");
    int var = 5;
    printf("var's value: %d\n", var);
    printf("Address-to - using & address-to operator, we can get the address of any given variable");
    printf("var's address with %%p specifier: %p\n", &var);
    // %i and %d are equivalent in the case of `printf`
    // they are different if we want to get input from user with `scanf`
    // both %i and %d will generate a warning because &var is a pointer type.
    printf("(compiler warning) var's ddress with %%i or %%d specifier: %i\n", &var);

    // we can also make a variable of pointer type with `*`
    int *var_ptr = &var;
    // `&` is referred to as the `address-of` operator.
    printf("(no compiler warning) var's address with %%p specifier: %p\n", var_ptr);

    // pointer declarations
    printf("-------------------------\nPOINTER DECLARATIONS\n");
    int *ptr_a, ptr_b;
    printf("ptr_a is a pointer type: %p\n", ptr_a);
    printf("ptr_b is an integer type: %d\n", ptr_b);

    int ptr_c, *ptr_d;
    printf("ptr_c is an integer type: %d\n", ptr_c);
    printf("ptr_d is a pointer type: %p\n", ptr_d);

    int *ptr_e, *ptr_f;
    printf("Both are pointer types now: %p and %p\n", ptr_e, ptr_f);

    // dereferencing
    printf("-------------------------\nDEREFERENCING\n");
    int bar = *var_ptr;
    printf("Dereferencing - using * dereference operator var_ptr, we get back the integer value at that address and assign it to a new variable `bar`: %d\n", bar);
    printf("bar's address is %p\n", &bar);
    printf("var's address is %p\n", &var);
    printf("bar's value is %d\n", bar);
    printf("var's value is %d\n", var);
    printf("This is called a 'store' operation: *var_ptr = 10\n");
    *var_ptr = 10;  // sets var to 10
    printf("Assigning to var with deference expression, var is now: %d\n", var);

    printf("-------------------------\nARRAYS\n");
    int array[] = {45, 67, 89};
    printf("Arrays decay implicitly to the first element's (pointer) address.\n");
    printf("%p\n", array);  // array implicitly decays to &array[0]
    printf("%p\n", &array);
    printf("%p\n", &array[0]);
    printf("Address of 2nd element: %p\n", &array[1]);
    printf("Address of 3rd element: %p\n", &array[2]);
    printf("Access first element %d\n", array[0]);
    printf("Access second element %d\n", array[1]);
    printf("Access third element %d\n", array[2]);

    printf("-------------------------\nPOINTER ARITHMETIC\n");
    int *array_ptr = array;
    // using postfix increment
    printf("Access from pointer, first element %d\n", *(array_ptr++));
    printf("Access from pointer, second element %d\n", *(array_ptr++));
    printf("Access from pointer, third element %d\n", *array_ptr);

    // more decaying
    // array[1] refers to 67, &array[1] dereferences to {67, 89}
    int *array_ptr2 = &array[1];
    printf("%i\n", array_ptr2[1]);

    return 0;
}
