import java.util.*;
class time{
    private int hour;
    private int minute;
    private int second;
    public int total_time;
    public time(int hour, int minute, int second){
        this.hour = hour;
        this.minute = minute;
        this.second = second;
        this.total_time = hour*3600 + minute*60 + second;
    }

    @Override
    public String toString() {
        return hour + " " + minute + " " + second;
    }
}
public class J05033_Sap_xep_thoi_gian {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        time[] a = new time[n];
        for(int i = 0; i < n; i++){
            int hour = sc.nextInt();
            int minute = sc.nextInt();
            int second = sc.nextInt();
            a[i] = new time(hour, minute, second);
        }
        Arrays.sort(a, new Comparator<time>(){
            @Override
            public int compare(time o1, time o2) {
                return Integer.compare(o1.total_time, o2.total_time);
            }
        });
        for(int i = 0; i < n; i++){
            System.out.println(a[i]);
        }
    }
    
}
