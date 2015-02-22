/*
 Program: Question 6 from quiz 1.
 Name  : Mohan Singh Bomrel
 Roll  : 0308
 Output: Error: stray '\240' in program
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
