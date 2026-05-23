class Solution {
    public boolean isAnagram(String s, String t) {
        if(s.length() == t.length()){
        Map<Character, Integer> map = new HashMap<>();

        for(char ch : s.toCharArray()){
            map.put(ch , map.getOrDefault(ch, 0) + 1);
        }
        
        for(char a : t.toCharArray()){
            if(!map.containsKey(a)){
                return false;
            }
            int count = map.get(a)-1;
            if(count > 0 ){
                map.put(a, count);
            }
            else{
                map.remove(a);
            }
        }
         return map.isEmpty();
        
        }
        return false;
    }
}