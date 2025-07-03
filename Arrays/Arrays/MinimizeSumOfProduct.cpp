/* You are given two arrays arr1 and arr2.
The task is to find the minimum value of arr1[0] * arr2[0] + arr1[1] * arr2[1] + .... + arr1[N-1] * arr2[N-1], 
where the shuffling of elements of arrays arr1 and arr2 is allowed.*/
class Solution {
  public:
    typedef long long int ll;

    long long int minValue(vector<int> &arr1, vector<int> &arr2) {
        // code here
        sort(arr1.begin(),arr1.end());
      sort(arr2.begin(),arr2.end(),greater<int>());
      ll sum=0;
      for(int i=0;i<arr1.size();i++){
          sum+=(ll)arr1[i]*arr2[i];
      }
      return sum;
    }
};
