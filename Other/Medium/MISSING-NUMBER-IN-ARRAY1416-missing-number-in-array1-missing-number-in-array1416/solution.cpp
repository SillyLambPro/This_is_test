class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        long long n = arr.size()+1;
        long long j = (n * (n+1))/2;
        for(auto &x : arr) j -= x;
        return j;
    }
};
