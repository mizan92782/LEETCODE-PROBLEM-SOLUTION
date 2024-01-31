class SmallestInfiniteSet {
public:
   
    set<int>que;
    SmallestInfiniteSet() {

        for(int i=1;i<=1000;i++)
        {
            que.insert(i);
        }
        
    }
    
    int popSmallest() {
      if (que.empty()) {
        return -1;  // Or any suitable value
         }
    
    int x = *que.begin();
    que.erase(que.begin());
    return x;
    }
    
    void addBack(int num) {

       que.insert(num);
        
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */