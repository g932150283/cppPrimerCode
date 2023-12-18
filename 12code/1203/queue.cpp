#include"queue.h"
#include<cstdlib> // rand()

using namespace std;

Queue::Queue(int qs) : qsize(qs){
    front = rear = nullptr;
    items = 0;
}

Queue::~Queue(){
    Node * temp;
    while (rear != nullptr)
    {
        temp = front;
        front = front->next;
        delete temp;
    }
}

bool Queue::isempty() const{
    return front == nullptr;
}

bool Queue::isfull() const{
    return items == qsize;
}

int Queue::queuecount() const{
    return items;
}

bool Queue::enqueue(const Item & item){
    if(isfull()){
        return false;
    }
    Node * add = new Node;
    add->item = item;
    add->next = nullptr;
    // 队列数量变换
    items++;
    // 队列为空，直接头尾都为add
    if(front == nullptr){
        front = add;
    }else{
        rear->next = add;
    }
    rear = add;
    delete add;
    return true;

}

bool Queue::dequeue(Item & item){
    if(isempty()){
        return false;
    }
    item = front->item;

    Node * temp = front;
    front = front->next;
    items--;
    delete temp;
    // 有可能头尾都指向同一个item
    if(items == 0){
        rear = nullptr;
    }
    return true;
}

void Customer::set(long when){
    arrive = when;
    processtime = rand() % 3 + 1;
}