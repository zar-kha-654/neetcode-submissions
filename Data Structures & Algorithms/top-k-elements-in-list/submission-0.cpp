class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        ///make a hash map containing two ints
        unordered_map<int,int>mp;
        for(int x: nums){
            mp[x]++;
        }
        //make a vector named v which will store the f and key for nums in the map 
        vector<pair<int,int>>v;
        for (auto p : mp){
            v.push_back(p);
        }
        //sort the f in increasing order
        sort(v.begin(), v.end(),[](pair<int,int>a, pair<int,int>b){
            return a.second<b.second;
        });
        //now we need the stored ans
        vector<int>ans;
        //for loop that will take the last k from sorted order
        for(int i= v.size()-k; i<v.size(); i++){
            ans.push_back(v[i].first);
        } 
        return ans;

    }
};
