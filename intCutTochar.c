#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main ()
{
    #if 1
    int i ;
    char* pchar;
    int *pTest;
    pTest = (int*)malloc(sizeof(int)*1);

    *pTest = 65831;
    for(i=0;i<1;i++)
        cout << pTest[i] << endl;



    pchar = (char *)&pTest[0];
    for(i=0;i<4;i++){
        printf("%d ",*(pchar+i));
    }

}
