#pragma warning(disable:4996)

#include <iostream>
#include <cstdio>
#include <conio.h>

/*
    Source by Programiz (https://www.programiz.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {
    int retVal;
    FILE* fp;
    char buffer[] = "Menulis File menggunakan fwrite.";

    fp = fopen("data.txt", "w");
    retVal = fwrite(buffer, sizeof(buffer), 1, fp);

    cout << "fwrite returned " << retVal;

    _getch();
    return 0;
}