import java.util.*;
import java.io.*;

public class J07021_Chuan_hoa_xau_ho_ten_trong_file {
    public static void main(String[] args) {
        // String fileName = "E://Code_Ptit//Java - codeptit//DATA.txt";
        String fileName = "DATA.in";
        try{
            BufferedReader br = new BufferedReader(new FileReader(fileName));
            String line = "";
            while((line = br.readLine()) != null){
                line = line.trim();
                if (line.equals("END")) break;
                String[] arr = line.split("\\s+");
                for (int i = 0; i < arr.length; i++) {
                    for (int j = 0; j < arr[i].length(); j++) {
                        if (j == 0) {
                            arr[i] = arr[i].substring(0, 1).toUpperCase() + arr[i].substring(1).toLowerCase();
                        }   
                        else arr[i] = arr[i].substring(0, j) + arr[i].substring(j, j + 1).toLowerCase() + arr[i].substring(j + 1);
                    }
                    System.out.print(arr[i] + " ");
                }
                System.out.println();
            }
            br.close();
        }
        catch(Exception e){
            e.printStackTrace();
        }
        
    }    
}
