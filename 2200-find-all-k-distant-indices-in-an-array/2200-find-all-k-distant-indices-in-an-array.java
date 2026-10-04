class Solution {
    public List<Integer> findKDistantIndices(int[] nums, int key, int k) {
        ArrayList<Integer> ll=new ArrayList<>();
        int n=nums.length;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(nums[j]==key && Math.abs(i-j)<=k){
                    ll.add(i);
                    break;
                }
            }
        }
        return ll;
    }
}