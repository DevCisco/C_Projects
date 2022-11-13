//IT: Modifica del carattere da minuscolo a maiuscolo
//ENG: Converting the character from lowercase to uppercase
#include <stdio.h>
#include <string.h>
char convert(char x){
    switch (x){
    case 'a':
        x='A';
        break;
    case 'b':
        x='B';
        break;
    case 'c':
        x='C';
        break;
    case 'd':
        x='D';
        break;
    case 'e':
        x='E';
        break;
    case 'f':
        x='F';
        break;
    case 'g':
        x='G';
        break;
    case 'h':
        x='H';
        break;
    case 'i':
        x='I';
        break;
    case 'j':
        x='J';
        break;
    case 'k':
        x='K';
        break;
    case 'l':
        x='L';
        break;
    case 'm':
        x='M';
        break;
    case 'n':
        x='N';
        break;
    case 'o':
        x='O';
        break;
    case 'p':
        x='P';
        break;
    case 'q':
        x='Q';
        break;
    case 'r':
        x='R';
        break;
    case 's':
        x='S';
        break;
    case 't':
        x='T';
        break;
    case 'u':
        x='U';
        break;
    case 'v':
        x='V';
        break;
    case 'w':
        x='W';
        break;
    case 'x':
        x='X';
        break;
    case 'y':
        x='Y';
        break;
    case 'z':
        x='Z';
        break;
    }
    return x;
}