import java.util.*;
import java.math.*;
import java.io.*;

public class J07007_Liet_ke_tu_khac_nhau {
    public static void main(String[] args) {
        String fileName = "VANBAN.in";
        Set<String> wordsSet = new TreeSet<>(); 

        try (BufferedReader br = new BufferedReader(new FileReader(fileName))) {
            String line;
            while ((line = br.readLine()) != null) {
                line = line.toLowerCase();
                String[] words = line.split("\\s+");
                for (String word : words) {
                    if (!word.isEmpty()) {
                        wordsSet.add(word); 
                    }
                }
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
        for (String word : wordsSet) {
            System.out.println(word);
        }
    }
}