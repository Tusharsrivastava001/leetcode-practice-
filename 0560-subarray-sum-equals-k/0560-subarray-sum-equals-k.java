class Solution {
    public int subarraySum(int[] nums, int k) {
        //yaha par har voh subaarya nikalna hai jiska sum k k equal ho okay 
        int count=0;
        for(int i=0;i<nums.length;i++){
            int sum=0;
            for(int j=i;j<nums.length;j++){
                sum+=nums[j];
                if(sum==k) count++;
            }
        }
        return count;
    }
}