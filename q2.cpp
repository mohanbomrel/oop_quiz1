/*
 Program: Question 2 from quiz 1.
 Name  : Mohan Singh Bomrel
 Roll  : 0308
 Output: Fred Jones
*/

#include<iostream>

using namespace std;

int main()
{
	string s;
    string* p;
    s = "Fred Jones";
    p = &s;

    cout << *p;
}
