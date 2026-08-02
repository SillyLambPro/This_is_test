class Solution {
  public:
    int getSecondLargest(vector<int> &ar) {
        // code here
        set<int> st;
        for(auto &x : ar) st.insert(x);
        vector<int> arr;
        for(auto &x : st) arr.push_back(x);
        return (arr[arr.size() - 2]) ? arr[arr.size() - 2] : -1;
    }
};
