class Solution {
    public int[] sortArrayByParityII(int[] nums) {
        ArrayList<Integer> list=new ArrayList<>();
        for(int num : nums){
            list.add(num);
        }
        int even=0;
        int odd=1;
        int[] ans = new int[nums.length];
        for(int num : list){
            if(num%2==0){
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