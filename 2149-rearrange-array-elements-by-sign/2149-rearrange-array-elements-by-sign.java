class Solution {
    public int[] rearrangeArray(int[] nums) {
        ArrayList<Integer> list=new ArrayList<>();
        int[] ans=new int[nums.length];
        int even=0;
        int odd=1;
        for(int num : nums){
            if(num>0){
                ans[even]=num;
                even+=2;
            }
            else{
                ans[odd]=num;
                odd+=2;
            }
        }
        return ans;
    }
}