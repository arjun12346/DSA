class Solution {
public:
int firstOccurence(int arr[] , int size , int key) {
    int ans = -1;
    int s = 0 , e = size-1;
    int mid = s+(e-s)/2;
    while(s <= e) {
        if(arr[mid] == key) {
            ans = mid;
            e = mid-1;
        }else if(key > arr[mid]) { //right me jao
            s = mid+1;
        }else if (key < arr[mid]) { //left me jao
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;

}
int lastOccurence(int arr[] , int size , int key) {
     int ans = -1;
    int s = 0 , e = size-1;
    int mid = s+(e-s)/2;
    while(s <= e) {
        if(arr[mid] == key) {
            ans = mid;
            s = mid+1;
        }else if(key > arr[mid]) { //right me jao
            s = mid+1;
        } else if(key < arr[mid]) { //left me jao
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;

}
   vector<int> searchRange(vector<int>& nums, int target) {
        int size = nums.size();
        int* arr = nums.data();
        int first = firstOccurence(arr, size, target);
        int last = lastOccurence(arr, size, target);
        return {first, last};
    }
};