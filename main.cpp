#include <iostream>
#include "linklist.h"
#include "palindrom.h"
using namespace std;
int main()
{
    Palindrome p,p1;
    p.add_node();
    p.display_node();
    p1.palindrome(p);
    return 0;
}
