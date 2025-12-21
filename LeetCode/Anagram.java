public class Anagram{

    public boolean isAnagram(String t, String s){
        if(t.length() != s.length()) {
            return false;
        }
        
        int charcount[] = new int[26];
        
        for(int i = 0; i < t.length(); i++){
            charcount[t.charAt(i) - 'a']++;
            charcount[s.charAt(i) - 'a']--;
        }
        for(int num : charcount){
            if(num != 0){
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        String t = "bottle";
        String s = "btotle";
        Anagram CheckAnagram = new Anagram();
        boolean result = CheckAnagram.isAnagram(t, s);
        System.out.println(result);
    }
}