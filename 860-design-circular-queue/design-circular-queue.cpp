class MyCircularQueue {
public:

    int size;
    queue<int>que;
    MyCircularQueue(int k) {
        size=k;
    }
    
    bool enQueue(int value) {
         
         if(que.size()<size)
         {
            que.push(value);
            return true;
         }

         return false;

    }


    
    bool deQueue() {
        
        if(que.size()>0)
        {
             que.pop();
             return true;
        }


        return false;

    }
    
    int Front() {
        
        return (que.size()!=0) ? que.front() : -1;
    }
    
    int Rear() {
        
        return (que.size()!=0) ? que.back() : -1;
    }
    
    bool isEmpty() {
        return que.size()==0;
    }
    
    bool isFull() {
        
        return que.size()==size;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */