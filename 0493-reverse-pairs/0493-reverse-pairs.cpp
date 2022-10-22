class Solution {
public:
    int Merge(vector < int > & nums, int low, int mid, int high) {
  int total = 0;
  int j = mid + 1;
  for (int i = low; i <= mid; i++) {
    while (j <= high && nums[i] > 2ll * nums[j]) {
      j++;
    }
    total += (j - (mid + 1));
  }

  sort(nums.begin() + low, nums.begin() + high + 1);
  return total;
}
int MergeSort(vector < int > & nums, int low, int high) {

  if (low >= high) return 0;
  int mid = (low + high) / 2;
  int inv = MergeSort(nums, low, mid);
  inv += MergeSort(nums, mid + 1, high);
  inv += Merge(nums, low, mid, high);
  return inv;
}
    int reversePairs(vector<int>& nums) {
        return MergeSort(nums,0,nums.size()-1);
    }
};