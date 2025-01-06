import java.lang.reflect.Array;
import java.util.*;

public class J04022_WordSet {
    static class WordSet{
        TreeSet<String> set;
        public WordSet (String tmp){
            set = new TreeSet<>();
            String[] arr = tmp.toLowerCase().trim().split("\\s+");
            for (String i : arr) {
                set.add(i);
            }
        }
    
        public WordSet() {
            set = new TreeSet<>();
        }

        public WordSet union(WordSet b) {
            WordSet ans = new WordSet();
            ans.set.addAll(this.set);
            ans.set.addAll(b.set);
            return ans;
        }
    
        public WordSet intersection(WordSet b) {
            WordSet ans = new WordSet();
            for (String i : this.set) {
                if (b.set.contains(i)) {
                    ans.set.add(i);
                }
            }
            return ans;
        }
    
        @Override
        public String toString() {
            String ans = "";
            for (String i : set) {
                ans += i + " ";
            }
            return ans;
        }
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        WordSet s1 = new WordSet(in.nextLine());
        WordSet s2 = new WordSet(in.nextLine());
        System.out.println(s1.union(s2));
        System.out.println(s1.intersection(s2));
    }
}
