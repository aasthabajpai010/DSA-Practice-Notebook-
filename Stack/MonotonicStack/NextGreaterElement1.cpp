/*The next greater element of some element x in an array is the first greater element that is to the right of x in the same array.
You are given two distinct 0-indexed integer arrays nums1 and nums2, where nums1 is a subset of nums2.
For each 0 <= i < nums1.length, find the index j such that nums1[i] == nums2[j] and determine the next greater element of nums2[j] in nums2. 
If there is no next greater element, then the answer for this query is -1.
Return an array ans of length nums1.length such that ans[i] is the next greater element as described above.
*/
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        unordered_map<int,int> ans;
        stack<int> st;
        for(int i=n-1;i>=0;i--){

             while(!st.empty() && st.top()<=nums2[i]){
                st.pop();
             }
             if(st.empty()){
                ans[nums2[i]]=-1;
             }
             else{
                ans[nums2[i]]=st.top();
             }
            st.push(nums2[i]);

        }
        vector<int> res;
        for(int i=0;i<nums1.size();i++){
            res.push_back(ans[nums1[i]]);
        }
        return res;
    }
};
