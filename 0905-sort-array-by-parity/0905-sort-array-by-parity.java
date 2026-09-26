class Solution {
    public int[] sortArrayByParity(int[] nums) {
        ArrayList<Integer> arrev=new ArrayList<>();
        ArrayList<Integer> arrod=new ArrayList<>();
        
        for(int i=0;i<nums.length;i++){
            if(nums[i]%2==0) arrev.add(nums[i]);
            else{
                arrod.add(nums[i]);
            }
        }
        int k=0;
         for(int i=0;i<arrev.size();i++)
             {
                nums[k++]=arrev.get(i);
            }
            for(int i=0;i<arrod.size();i++){
                 nums[k++]=arrod.get(i);
            }
        return nums;
    }

}