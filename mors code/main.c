#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 int main ()
 {
     char maphrase[100];
     char maPhraseMORSE[200];
     gets(maphrase);
     printf("ma phrase est : %s\n",maphrase);
     int j=0;
     for(int i=0; i< strlen(maphrase);i++)
     {   maPhraseMORSE[j] = ' '; j++;
         switch(maphrase[i])
         {
              case 'a':
                    maPhraseMORSE[j] = '.'; j++;
                    maPhraseMORSE[j] = '-'; j++;
                    break;
                case 'b':
                    maPhraseMORSE[j] = '-'; j++;
                    maPhraseMORSE[j] = '.'; j++;
                    maPhraseMORSE[j] = '.'; j++;
                    maPhraseMORSE[j] = '.'; j++;
                    break;
                case 'c':
                    maPhraseMORSE[j] = '-'; j++;
                    maPhraseMORSE[j] = '.'; j++;
                    maPhraseMORSE[j] = '-'; j++;
                    maPhraseMORSE[j] = '.'; j++;
                    break;
                case 'd':
                    maPhraseMORSE[j] = '-'; j++;
                    maPhraseMORSE[j] = '.'; j++;
                    maPhraseMORSE[j] = '.'; j++;
                    break;
                case 'e':
                    maPhraseMORSE[j] = '.'; j++;
                    break;
                case 'f':
                    maPhraseMORSE[j] = '.'; j++;
                    maPhraseMORSE[j] = '.'; j++;
                    maPhraseMORSE[j] = '-'; j++;
                    maPhraseMORSE[j] = '.'; j++;
                    break;
                case 'g':
                    maPhraseMORSE[j] = '-'; j++;
                    maPhraseMORSE[j] = '-'; j++;
                    maPhraseMORSE[j] = '.'; j++;
                    break;
                case 'h':
                    maPhraseMORSE[j] = '.'; j++;
                    maPhraseMORSE[j] = '.'; j++;
                    maPhraseMORSE[j] = '.'; j++;
                    maPhraseMORSE[j] = '.'; j++;
                    break;
                case 'i':
                    maPhraseMORSE[j] = '.'; j++;
                    maPhraseMORSE[j] = '.'; j++;
                    break;
                case 'j':
                    maPhraseMORSE[j] = '-'; j++;
                    maPhraseMORSE[j] = '-'; j++;
                    maPhraseMORSE[j] = '-'; j++;
                    maPhraseMORSE[j] = '.'; j++;
                    break;
                case 'k':
                    maPhraseMORSE[j] = '-'; j++;
                    maPhraseMORSE[j] = '.'; j++;
                    maPhraseMORSE[j] = '-'; j++;
                    break;
                case 'l':
                    maPhraseMORSE[j] = '.'; j++;
                    maPhraseMORSE[j] = '-'; j++;
                    maPhraseMORSE[j] = '.'; j++;
                    maPhraseMORSE[j] = '.'; j++;
                    break;
                case 'm':
                    maPhraseMORSE[j] = '-'; j++;
                    maPhraseMORSE[j] = '-'; j++;
                    break;
                case 'n':
                    maPhraseMORSE[j] = '-'; j++;
                    maPhraseMORSE[j] = '.'; j++;
                    break;
                case 'o':
                    maPhraseMORSE[j] = '-'; j++;
                    maPhraseMORSE[j] = '-'; j++;
                    maPhraseMORSE[j] = '-'; j++;
                    break;
                case 'p':
                    maPhraseMORSE[j] = '.'; j++;
                    maPhraseMORSE[j] = '-'; j++;
                    maPhraseMORSE[j] = '-'; j++;
                    maPhraseMORSE[j] = '.'; j++;
                    break;
                case 'q':
                    maPhraseMORSE[j] = '-'; j++;
                    maPhraseMORSE[j] = '-'; j++;
                    maPhraseMORSE[j] = '.'; j++;
                    maPhraseMORSE[j] = '-'; j++;
                    break;
                case 'r':
                    maPhraseMORSE[j] = '.'; j++;
                    maPhraseMORSE[j] = '-'; j++;
                    maPhraseMORSE[j] = '.'; j++;
                    break;
                case 's':
                    maPhraseMORSE[j] = '.'; j++;
                    maPhraseMORSE[j] = '.'; j++;
                    maPhraseMORSE[j] = '.'; j++;
                    break;
                case 't':
                    maPhraseMORSE[j] = '-'; j++;
                    break;
                case 'u':
                    maPhraseMORSE[j] = '.'; j++;
                    maPhraseMORSE[j] = '.'; j++;
                    maPhraseMORSE[j] = '-'; j++;
                    break;
                case 'v':
                    maPhraseMORSE[j] = '.'; j++;
                    maPhraseMORSE[j] = '.'; j++;
                    maPhraseMORSE[j] = '.'; j++;
                    maPhraseMORSE[j] = '-'; j++;
                    break;
                case 'w':
                    maPhraseMORSE[j] = '.'; j++;
                    maPhraseMORSE[j] = '-'; j++;
                    maPhraseMORSE[j] = '-'; j++;
                    break;
                case 'x':
                    maPhraseMORSE[j] = '-'; j++;
                    maPhraseMORSE[j] = '.'; j++;
                    maPhraseMORSE[j] = '.'; j++;
                    maPhraseMORSE[j] = '-'; j++;
                    break;
                case 'y':
                    maPhraseMORSE[j] = '-'; j++;
                    maPhraseMORSE[j] = '.'; j++;
                    maPhraseMORSE[j] = '-'; j++;
                    maPhraseMORSE[j] = '-'; j++;
                    break;
                case 'z':
                    maPhraseMORSE[j] = '-'; j++;
                    maPhraseMORSE[j] = '-'; j++;
                    maPhraseMORSE[j] = '.'; j++;
                    maPhraseMORSE[j] = '.'; j++;
                    break;
                case ' ':
                    maPhraseMORSE[j] = '/'; j++;
                    break;

         }
     }
     maPhraseMORSE[j]='\0';
printf("ma phraseM est : ");
puts(maPhraseMORSE);
     return 0;

 }
