class MyHashSet {
public:
    MyHashSet() {
        
    }
    
    void add(int key) {

        auto it = std::find(v.begin(), v.end(), key);

        if (it == v.end()){
            v.push_back(key);
        }
        
    }
    
    void remove(int key) {
        auto it = std::find(v.begin(), v.end(), key);

        if (it != v.end()){
            v.erase(it);
        }
    }
    
    bool contains(int key) {
        auto it = std::find(v.begin(), v.end(), key);

        if (it != v.end()){
            return true;
        }
        return false;
    }
private:
    vector<int> v;
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */