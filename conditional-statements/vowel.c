#include<stdio.h>
int main()
{
    char ch;
    printf("enter a alphabet: ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
          printf("VOWEL");
          break;
 
    default:
          if (ch>='a' && ch<='z')
          {
            printf("constant");
          }
          else{
            printf("invalid charecter");
          }
}
    
}