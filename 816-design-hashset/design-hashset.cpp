class MyHashSet {
public:
vector<int>ans;
    MyHashSet() {
        ans.resize(100001,0);
    }
    
    void add(int key) {
        ans[key]=1;
    }
    
    void remove(int key) {
        ans[key]=0;
    }
    
    bool contains(int key) {
        return ans[key]==1;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */