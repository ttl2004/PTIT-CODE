import java.util.*;
import java.lang.Math.*;

public class J05024_Liet_ke_sinh_vien_theo_nganh {
    public static class SinhVien{
        public String MSV, Ten, Ma_Nganh, Email;

        SinhVien(String MSV, String Ten, String Ma_Nganh, String Email){
            this.MSV = MSV;
            this.Ten = Ten;
            this.Ma_Nganh = Ma_Nganh;
            this.Email = Email;
        }

        @Override
        public String toString() {
            return MSV + " " + Ten + " " + Ma_Nganh + " " + Email;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        ArrayList<SinhVien> list = new ArrayList<>();
        sc.nextLine();
        while (t --  > 0) {
            String MSV = sc.nextLine();
            String Ten = sc.nextLine();
            String Ma_Nganh = sc.nextLine();
            String Email = sc.nextLine();
            list.add(new SinhVien(MSV, Ten, Ma_Nganh, Email));
        }

        int q = sc.nextInt();
        sc.nextLine();
        for (int i = 0; i  < q; i ++) {
            String s = sc.nextLine();
            System.out.println("DANH SACH SINH VIEN NGANH " + s.toUpperCase() + ":");
            String f = "";
            if (s.equals("Ke toan")) f = "DCKT";
            if (s.equals("Cong nghe thong tin")) f = "DCCN";
            if (s.equals("An toan thong tin")) f = "DCAT";
            if (s.equals("Vien thong")) f = "DCVT";
            if (s.equals("Dien tu")) f = "DCDT";
            //System.out.println(f);
            for (SinhVien sv : list) {
                if  (f.equals("DCCN") == true || f.equals("DCAT") == true) {
                    if (sv.Ma_Nganh.charAt(0) == 'E') {
                        continue;
                    }
                }
                if (sv.MSV.indexOf(f) != -1) {
                    System.out.println(sv);
                }
            }
        }
    }
}
