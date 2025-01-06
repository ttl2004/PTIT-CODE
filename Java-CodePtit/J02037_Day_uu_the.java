import java.util.*;

public class J02037_Day_uu_the {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int testCases = scanner.nextInt();
        scanner.nextLine();  

        for (int t = 0; t < testCases; t++) {

            String line = scanner.nextLine();
            String[] numbers = line.split(" ");
            int evenCount = 0;  
            int oddCount = 0;   

            for (String numStr : numbers) {
                if (numStr.isEmpty()) {
                    continue;
                }
                
                int num = Integer.parseInt(numStr); 
                if (num % 2 == 0) {
                    evenCount++;  
                } 
                else {
                    oddCount++;   
                }
            }

            int totalElements = evenCount + oddCount;  

            if ((totalElements % 2 == 0 && evenCount > oddCount) || 
                (totalElements % 2 != 0 && oddCount > evenCount)) {
                System.out.println("YES");
            } 
            else {
                System.out.println("NO");
            }
        }

        scanner.close();
    }

}
