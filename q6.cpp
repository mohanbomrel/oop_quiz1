/*
 Program: Question 6 from quiz 1.
 Name  : Mohan Singh Bomrel
 Roll  : 0308
 Output: 2334534
*/

#include<iostream>

using namespace std;

int main()
{
    int a;
    int *q;
    a = 4;
    q = &a;
    cout << *(q+1); 
}
