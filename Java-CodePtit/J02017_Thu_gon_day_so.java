import java.util.*;
public class J02017_Thu_gon_day_so {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        Stack<Integer> stack = new Stack<>();
        for (int i = 0; i < N; i++) {
            int num = sc.nextInt();
            if (!stack.isEmpty() && (stack.peek() + num) % 2 == 0) {
                stack.pop();  
            } 
            else {
                stack.push(num);  
            }
        }
        System.out.println(stack.size());
    }
}