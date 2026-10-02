class Solution {
    public int[] pivotArray(int[] nums, int pivot) {
        ArrayList<Integer> list1=new ArrayList<>();
        ArrayList<Integer> list2=new ArrayList<>();
        ArrayList<Integer> list3=new ArrayList<>(); 

        for(int num : nums){
            if(num<pivot){
                list1.add(num);
            }
            else if(num==pivot){
                list2.add(num);
            }
            else{
                list3.add(num);
            }
        }
           ArrayList<Integer> ans = new ArrayList<>();
        ans.addAll(list1);
        ans.addAll(list2);
        ans.addAll(list3);
        int[] result = new int[ans.size()];
        int[] res=new int[ans.size()];
        for (int i = 0; i < ans.size(); i++) {
            result[i] = ans.get(i);
        }

        return result;

    }
}