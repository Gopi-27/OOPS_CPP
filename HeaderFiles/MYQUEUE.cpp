#include "MYQUEUE.h"
int main(){
    MY_QUEUE q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    q1.push(50);
    q1.display();
    q1.pop();
    q1.display();
}
