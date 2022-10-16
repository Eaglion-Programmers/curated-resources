/*
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.


Leetcode: 242

*/
class validAnagram {
public boolean isAnagram(String s, String t) {
        char b[] = t.toCharArray();
        String str = "";
        StringBuilder sb = new StringBuilder(s);
        boolean isAnagramFound = true;
        if(s.length() != t.length())
        {
            return false;
        }
        for(int i=0;i<b.length;i++)
        {
            str = Character.toString(b[i]);
            if(sb.indexOf(str)>=0)
            {
                sb.delete(sb.indexOf(str),sb.indexOf(str)+1);
                isAnagramFound = true;
            }
            else{
                isAnagramFound = false;
                break;
            }
        }
        return isAnagramFound;
    
    }
    public static void main(String args[])
    {
        System.out.println(isAnagram("abc","cba"));
    }
}
