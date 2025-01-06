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


public class J05027_Tim_kiem_giang_vien {
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
        
        int q = sc.nextInt();
        sc.nextLine();
        for (int i = 0; i < q; i ++) {
            String s = sc.nextLine();
            String s2 = s.toLowerCase();
            System.out.println("DANH SACH GIANG VIEN THEO TU KHOA " + s + ":");
            for (GiangVien x : a) {
                //System.out.println(s2 + " "  + x.name.toLowerCase() + " " );
                if (x.name.toLowerCase().indexOf(s2) != -1) {
                    System.out.println(x);
                }
            }
        }
    }
}
