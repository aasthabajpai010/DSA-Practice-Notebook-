/* Given an array arr[] of numbers from 0 to 9. 
Your task is to rearrange elements of the array such that after combining all the elements of the array, the number formed is maximum.*/
class Solution {
  public:
    string MaxNumber(vector<int>& arr) {
        // code here.
        sort(arr.begin(),arr.end(),greater<int>());
        if(arr[0]==0){
            return "0";
        }
        string s="";
        for(int i=0;i<arr.size();i++){
            s+=to_string(arr[i]);
        }
        return s;
    }
};
