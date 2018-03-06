#ifndef PALINDROM_H_INCLUDED
#define PALINDROM_H_INCLUDED
#include "linklist.h"
#include <stack>
class Palindrome:public Linklist{
public:
    int palindrome(Palindrome);
};
int Palindrome::palindrome(Palindrome p1){
    int flag =0;
    stack <int> s;
    temp = p1.start;
    while(temp!=NULL){
        s.push(temp->data);
        temp=temp->next;
    }
    temp = p1.start;
    while(!s.empty()){
        if(s.top() != temp->data){
            flag = 1;
            cout<<"\nnot a palindrome";
            break;
        }
        else
            flag =0;
        s.pop();
        temp=temp->next;
    }
    if(flag == 0)
        cout<<"\npalindrome";
return 0;
}
#endif // PALINDROM_H_INCLUDED
