class Solution {
    public List<Integer> findDuplicates(int[] nums) {
        //jo do baar aae hai unka arary bana kar return karna haii
       HashMap<Integer,Integer> mp=new HashMap<>();
       for(int i=0;i<nums.length;i++){
        mp.put(nums[i],mp.getOrDefault(nums[i],0)+1);
       }
       ArrayList<Integer> ll=new ArrayList<>();
       for(Map.Entry<Integer,Integer> entry : mp.entrySet()){
        if(entry.getValue()==2){
            ll.add(entry.getKey());
        }
       }
       return ll;

    }
}