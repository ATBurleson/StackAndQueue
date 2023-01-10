#include <iostream>
#include <stack>
#include <queue>
#include "QueueStack.h"
//constuct my stack
void ThisIsMyStack()
{
    int num = 350;

    //The values pushed in the stack should be of the same data which is written during declaration of stack
    std::stack<int> stack;
    stack.push(31);//bottom of the stack. 
    stack.push(32);
    stack.push(90);
    stack.push(150);
    stack.push(num);


    std::cout << "The top of the stack is: " << stack.top() << " " << std::endl;
    std::cout << "The size of the stack is: " << stack.size() << std::endl << std::endl;

    while (!stack.empty()) {
        std::cout << stack.top() << " " << std::endl << std::endl;
        if (stack.size() == 1)
        {
            std::cout << "The bottom of the stack is: " << stack.top() << std::endl;
        }
        stack.pop();
    }

    std::cout << std::endl;

}

//constuct my queue
void ThisIsMyQueue()
{
    int num = 35;

    //The values pushed in the stack should be of the same data which is written during declaration of stack
    std::queue<int> queue;
    queue.push(3);//bottom of the stack. 
    queue.push(7);
    queue.push(9);
    queue.push(15);
    queue.push(num);


    std::cout << "The front item of the Queue is: " << queue.front() << " " << std::endl;
    std::cout << "The size of the Queue is: " << queue.size() << std::endl << std::endl;

    while (!queue.empty()) {
        std::cout << queue.front() << " ";
        if (queue.size() == 1)
        {
            std::cout << std::endl;
            std::cout << "The last item of the queue is: " << queue.front() << std::endl;
        }
        queue.pop();
    }

    std::cout << std::endl;
}