import java.util.Scanner;

public class J04002_Khai_bao_lop_Hinh_chu_nhat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        String s = sc.next();
        char[] chars = s.toCharArray();

        for (int i = 0; i < chars.length; i++) {
            if (i == 0) {
                chars[i] = Character.toUpperCase(chars[i]);
            } 
            else if (Character.isUpperCase(chars[i])) {
                chars[i] = Character.toLowerCase(chars[i]);
            }
        }
        s = new String(chars);
        if (a <= 0 || b <= 0) {
            System.out.println("INVALID");
        } 
        else {
            System.out.println(((a + b) * 2) + " " + (a * b) + " " + s);
        }
    }
}
