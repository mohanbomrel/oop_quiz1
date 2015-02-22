/*
 Program: Question 3 from quiz 1.
 Name  : Mohan Singh Bomrel
 Roll  : 0308
 Output: Won't work
*/

#include<iostream>

using namespace std;

function doubleref(int* p)
{
    (*p) = (*p) * 2;
}
int main()
{
    int a = 5;
    doubleref(&a);
    cout << a;
} 
