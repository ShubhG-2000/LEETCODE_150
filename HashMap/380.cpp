380. Insert Delete GetRandom O(1)


class RandomizedSet {
public:
    //get random in O(1) using array 
    //insert and delete in O(1) using map 

    unordered_map<int, int> mp; //number vs index
    vector<int> list;
    RandomizedSet() {}
    
    bool insert(int val) {
        if(mp.find(val) != mp.end()){
            return false;
        }
            //insertion
            list.push_back(val);
            mp[val] = (list.size() - 1);

            return true;
    }
    
    bool remove(int val) {
        if(mp.find(val) == mp.end()){
            return false;
        }//remove
            int idx = mp[val];
            int numAtLast = list[list.size() - 1];


            list[idx] = numAtLast;//swap remove ele and last ele of list 
            mp[numAtLast] = idx; // change position of last number to i index 
            mp.erase(val); //remove entry of ele from map
            list.pop_back(); //remove last val from list since pos is changed

            return true;
        
    }
    
    int getRandom() {
        int i = rand() % list.size();
        return list[i];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */