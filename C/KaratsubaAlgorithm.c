#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int KaratsubaAlgorithm(char* str1, char* str2){
    int i = 0, j = 0;
    int num1 = 0, num2 = 0;
    while (str1[i] != '\0')
    {
        num1 *= 2;
        if (str1[i] == '0' || str1[i] == '1') num1 += str1[i] - '0';
        else return -1;
        i++;
    }
    while (str2[j] != '\0')
    {
        num2 *= 2;
        if (str2[j] == '0' || str2[j] == '1') num2 += str2[j] - '0';
        else return -1;
        j++;
    }
    return num1 * num2;
}