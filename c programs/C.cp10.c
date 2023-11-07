#include<stdio.h>
void main()
{
    /*write a program  to check whether your input alphabet is vowel or consonant*/
    char ch,re,lowercase_alphabet,uppercase_alphabet;
    printf("enter the character ch:");
    scanf("%c",&ch);
    ch=lowercase_alphabet;
    re=uppercase_alphabet;

    lowecase_alphabet=(ch='a',ch='e',ch='i',ch='o',ch='u');
    uppercase_alphabet=(ch='A',ch='E',ch='I',ch='O',ch='U');

    if(lowercase_alphabet||uppercase_alphabet){
        printf("the alphabet is vowel:%c%c",lowercase_alphabet,uppercase_alphabet);
    }
    else{
        printf("the alphabet is consonant:%c");
    }

    getch();

}
