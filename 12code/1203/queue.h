#ifndef QUEUE_H_
#define QUEUE_H_
class Customer
{
private:
    /* 客户到达时间、客户办理业务所需时间 */
    long arrive;
    int processtime;
public:
    Customer(){
        arrive = processtime = 0;
    }
    ~Customer();
    void set(long when); // 何时到达
    long when() const{
        return arrive;
    }
    int ptime() const{
        return processtime;
    }
};



typedef Customer Item;

class Queue
{
private:
    struct Node {
        Item item;
        struct Node * next;
    };
    enum{Q_SIZE = 10};
    Node * front;
    Node * rear;
    int items;
    const int qsize;
    // 防止复制函数和赋值函数
    Queue(const Queue & q) : qsize(0){}
    Queue & operator=(const Queue & q){
        return *this;
    }
public:
    Queue(int qs = Q_SIZE);
    ~Queue();
    bool isempty() const;
    bool isfull() const;
    int queuecount() const;
    bool enqueue(const Item & item);
    bool dequeue(Item & item);
};



#endif