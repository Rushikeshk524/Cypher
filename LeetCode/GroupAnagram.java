import java.util.*;
import java.util.List;

public class GroupAnagram {
    public List<List<String>> Solution(String strs[]){

       HashMap<String, List<String>> map = new HashMap<>();

        for(String str: strs){
            char ch[] = str.toCharArray();
            Arrays.sort(ch);
            String key = new String(ch);

            if(!map.containsKey(key)){
                map.put(key,new ArrayList<>());
            }
            
            map.get(key).add(str);
        }
        return new ArrayList<>(map.values());
    }
    public static void main(String[] args) {
        String strs[] = {"bat", "eat", "tan", "ate", "nat", "tea"};
        
        GroupAnagram s1 = new GroupAnagram();
        List<List<String>> result = s1.Solution(strs);

        System.out.println(result);
    }
}
