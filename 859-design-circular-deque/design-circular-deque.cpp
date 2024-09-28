class MyCircularDeque {
public:
    deque<int>que;
    int size;


    MyCircularDeque(int k) {
        
         size=k;
    }


    
    bool insertFront(int value) {
        
        if(que.size()<size)
        {
            que.push_front(value);
            
            return true;
        }


        return false;
    }


    
    bool insertLast(int value) {
        
        if(que.size()<size)
        {
            que.push_back(value);
          
            return true;
        }


        return false;
        
    } 


    
    bool deleteFront() {
        
        if(!que.empty())
        {
            que.pop_front();
            return true;
        }


        return false;
    }



    
    bool deleteLast() {


        if(!que.empty())
        {
            que.pop_back();
            return true;
        }


        return false;
        
    }



    
    int getFront() {
        
        if(!que.empty())
        {
           return que.front();
        }


        return -1;
    }



    
    int getRear() {

         if(!que.empty())
        {
           return que.back();
        }


        return -1;
        
    }


    
    bool isEmpty() {

       return que.empty(); 
    }


    
    bool isFull() {
        
        return (que.size()==size);
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */