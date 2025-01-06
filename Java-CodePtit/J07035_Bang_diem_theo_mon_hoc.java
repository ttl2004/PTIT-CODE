import java.util.*;
import java.util.Collections.*;
import java.io.*;
class ThongTin{
    public String Msv, Name, Class, Email;

    public ThongTin(String Msv, String Name, String Class, String Email){
        this.Msv = Msv;
        this.Name = ChuanHoa(Name);
        this.Class = Class;
        this.Email = Email;
    }

    public String ChuanHoa(String s){
        s = s.trim();
        String [] tmp = s.split("\\s+");
        String ans = "";
        for (int i = 0; i < tmp.length; i++){
            ans += (tmp[i].substring(0, 1).toUpperCase() + tmp[i].substring(1).toLowerCase());
            if (i < tmp.length - 1) ans += " ";
        }
        return ans;
    }
}

class MonHoc{
    public String MaMH, TenMH, point;
    public Integer SoTC;
    public Double  Diem;

    public MonHoc(String MaMH, String TenMH, int SoTC){
        this.MaMH = MaMH;
        this.TenMH = TenMH;
        this.SoTC = SoTC;
        this.Diem = 0.0;
    }
    public MonHoc(String MaMH, String Diem) {
        this.MaMH = MaMH;
        this.point = Diem;
        this.Diem = Double.parseDouble(Diem);
    }

    public void setDiem(double Diem){
        this.Diem = Diem;
    }
}

class BangDiem{
    public ThongTin sv;
    public MonHoc mh;
    public String point;
    public Double Diem;

    public BangDiem(ThongTin sv, MonHoc mh, String point){
        this.sv = sv;
        this.mh = mh;
        this.point = point;
        this.Diem = Double.parseDouble(point);
    }

    @Override
    public String toString(){
        return sv.Msv + " " + sv.Name + " " + sv.Class + " " + point;
    }
    
}
public class J07035_Bang_diem_theo_mon_hoc {
    public static void main(String[] args) throws IOException{
        String filePath_1 = "SINHVIEN.in";
        String filePath_2 = "MONHOC.in";
        String filePath_3 = "BANGDIEM.in";

        // String filePath_1 = "E://Code_Ptit//test//Sinhvien.txt";
        // String filePath_2 = "E://Code_Ptit//test//Monhoc.txt";
        // String filePath_3 = "E://Code_Ptit//test//Bangdiem.txt";

        //Xu ly Sinhvien
        ArrayList<ThongTin> SinhVien = new ArrayList<ThongTin>();
        Map<String, ThongTin> mp = new TreeMap<>();

        BufferedReader br = new BufferedReader(new FileReader(filePath_1));
        int n = Integer.parseInt(br.readLine());
        for (int i = 1; i <= n; i ++) {
            String Msv = br.readLine();
            String Name = br.readLine();
            String Class = br.readLine();
            String Email = br.readLine();
            ThongTin sv = new ThongTin(Msv, Name, Class, Email);
            mp.put(Msv, sv);
            SinhVien.add(sv);
        }
        br.close();
        
        //Xu ly Monhoc
        ArrayList<MonHoc> MonHoc = new ArrayList<MonHoc>();
        Map<String, MonHoc> mp1 = new TreeMap<>();

        br = new BufferedReader(new FileReader(filePath_2));
        int m = Integer.parseInt(br.readLine());
        for (int i = 1; i <= m; i ++) {
            String MaMH = br.readLine();
            String TenMH = br.readLine();
            int SoTC = Integer.parseInt(br.readLine());
            MonHoc mh = new MonHoc(MaMH, TenMH, SoTC);
            mp1.put(MaMH, mh);
            MonHoc.add(mh);
        }
        br.close();

        //Xu ly BangDiem
        br = new BufferedReader(new FileReader(filePath_3));

        ArrayList<BangDiem> Bangdiem = new ArrayList<BangDiem>();
        int k = Integer.parseInt(br.readLine());
        for (int i = 1; i <= k; i ++) {
            String line = br.readLine();
            line = line.trim();
            String[] arr = line.split("\\s+");
            BangDiem bd = new BangDiem(mp.get(arr[0]), mp1.get(arr[1]), arr[2]);
            Bangdiem.add(bd);
        }
        
        Collections.sort(Bangdiem, new Comparator<BangDiem>(){
            @Override
            public int compare(BangDiem o1, BangDiem o2){
                if (o1.Diem != o2.Diem) return o2.Diem.compareTo(o1.Diem);
                return o1.sv.Msv.compareTo(o2.sv.Msv);
            }
        });
        
        int q = Integer.parseInt(br.readLine());
        while (q -- > 0) {
            String MaMonHoc = br.readLine();

            System.out.println("BANG DIEM MON " + mp1.get(MaMonHoc).TenMH + ":");
            for (BangDiem bd : Bangdiem) {
                if (bd.mh.MaMH.equals(MaMonHoc)) {
                    System.out.println(bd);
                }
            }
        }
    }
}


