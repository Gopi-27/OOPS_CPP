#include "STACK.h"
int main(){
    STACK s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.display();
    s1.pop();
    s1.display();
    STACK s2;
    s2.push(100);
    s2.push(200);
    s2.push(300);
    s2.push(400);
    s2.display();
    s2.pop();
    s2.display();

}
