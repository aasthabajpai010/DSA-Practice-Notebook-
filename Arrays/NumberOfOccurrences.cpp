/* Given a sorted array, arr[] and a number target, 
you need to find the number of occurrences of target in arr[]. */
int countFreq(vector<int>& arr, int target) {
    int lower = lower_bound(arr.begin(), arr.end(), target) - arr.begin();
    int upper = upper_bound(arr.begin(), arr.end(), target) - arr.begin();
    return upper - lower;
}
