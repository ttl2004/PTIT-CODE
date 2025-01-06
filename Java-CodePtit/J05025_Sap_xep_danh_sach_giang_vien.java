import java.util.*;

class GiangVien{
    public String id, name, nganh, s;

    GiangVien(String id, String name, String nganh) {
        this.id = id;
        this.name= name;
        this.nganh = nganh;
        String [] tmp = name.trim().split("\\s+");
        this.s = tmp[tmp.length - 1];
    }
    @Override
    public String toString(){
        return id  + " " + name + " " + nganh;
    }
}

public class J05025_Sap_xep_danh_sach_giang_vien {
    public static String xuly(String s) {
        String [] arr = s.trim().split("\\s+");
        String res = "";
        for (String x : arr) {
            res += x.charAt(0);
        }
        return  res.toUpperCase();
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<GiangVien> a = new ArrayList<>();
        sc.nextLine();
        for (int i = 1; i <= n; i ++) {
            String id = "GV";
            if (i < 10) id += "0";
            id += Integer.toString(i);
            String name = sc.nextLine();
            String nganh = sc.nextLine();
            a.add(new GiangVien(id, name, xuly(nganh)));
        }
        Collections.sort(a, new Comparator<GiangVien>() {
            @Override
            public int compare(GiangVien o1, GiangVien o2) {
                if (o1.s.compareTo(o2.s) != 0) {
                    return o1.s.compareTo(o2.s);
                }
                else return o1.id.compareTo(o2.id);
            }
        });
        for (GiangVien x : a) {
            System.out.println(x);
        }
    }
}
