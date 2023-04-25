#include <stdio.h>

int main()
{
    char x;
    scanf("%c", &x);
  switch(x){
        case 97 ... 122: switch(x){ 
                case 'a': printf("Eh uma vogal"); break;
                case 'e': printf("Eh uma vogal"); break;
                case 'i': printf("Eh uma vogal"); break;
                case 'o': printf("Eh uma vogal"); break;
                case 'u': printf("Eh uma vogal"); break;
                default: printf("Eh uma consoante"); break;
                }
                break;
        case 65 ... 90:switch(x){ 
                case 'A': printf("Eh uma vogal"); break;
                case 'E': printf("Eh uma vogal"); break;
                case 'I': printf("Eh uma vogal"); break;
                case 'O': printf("Eh uma vogal"); break;
                case 'U': printf("Eh uma vogal"); break;
                default: printf("Eh uma consoante"); break;
                }
                break;
        default: printf("Nao eh uma letra do alfabeto"); break;
        }
    return 0;
}