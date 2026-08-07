class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
      unordered_map<int,int>frequency;
      for(int x:arr){
        frequency[x]++;
      }  
      unordered_set<int>st;

      for(pair<int,int>x:frequency){
        if(st.count(x.second)){
            return false;
        }
        st.insert(x.second);
      }
      return true;
    }
};