import java.util.*;
import java.lang.Math.*;

class KhachHang{
    public String ID, Name;
    public long Time;

    public KhachHang(String ID, String Name, long [] Begin, long [] End) {
        this.ID = ID;
        this.Name = Name;
        this.Time = End[0] * 60 + End[1] - (Begin[0] * 60 + Begin[1]);
    }
}
public class J05011_Tinh_gio {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        KhachHang[] a = new KhachHang[n];
        sc.nextLine();
        for(int i = 0; i < n; i++) {
            String ID = sc.nextLine();
            String Name = sc.nextLine();
            long Begin[] = new long[2];
            long End[] = new long[2];
            String [] tmp = sc.nextLine().split(":");
            Begin[0] = Integer.parseInt(tmp[0]);
            Begin[1] = Integer.parseInt(tmp[1]);
            tmp = sc.nextLine().split(":");
            End[0] = Integer.parseInt(tmp[0]);
            End[1] = Integer.parseInt(tmp[1]);
            a[i] = new KhachHang(ID, Name, Begin, End);
        }
        Arrays.sort(a, new Comparator<KhachHang>() {
            @Override
            public int compare(KhachHang o1, KhachHang o2) {
                return -Long.compare(o1.Time, o2.Time);
            }
        });
        for(int i = 0; i < n; i++) {
            System.out.println(a[i].ID + " " + a[i].Name + " " + a[i].Time / 60 + " gio " + a[i].Time % 60 + " phut");
        }
    }
}
