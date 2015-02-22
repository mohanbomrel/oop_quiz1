/*
 Program: Question 4 from quiz 1.
 Name  : Mohan Singh Bomrel
 Roll  : 0308
 Output: Error
*/

#include<iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int *p;
    int *q;
    a = 3;
    p = &a;
    q = p;
    b = 4;
    *q = b;

    cout << *p << a;
}
