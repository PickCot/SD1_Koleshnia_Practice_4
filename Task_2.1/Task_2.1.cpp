﻿#include <iostream>
using namespace std;
int main()
{
    char s[80];
    int word, count = 0;
    //system("chcp 1251");
    //system("cls");
    cout << "Введите строку: " << endl;
    cin.get(s, 80);
    int i = 0;
    while ((s[i] == ' ' && s[i] != '\0') || (s[i] == '  ' && s[i] != '\0'))
    {
        i++;
    }
    word = 0;
    while (s[i] != '\0') 
    {
        if (s[i] != ' ' && word == 0)
        {
            word = 1;
            count++;
        }
        else if (s[i] == ' ')
            word = 0;
        i++;
    }
    cout << "Количество слов в строке " << count;
    cin.get(); cin.get();
    return 0;
}