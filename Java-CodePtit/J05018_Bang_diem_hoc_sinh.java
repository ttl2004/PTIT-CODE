import java.util.*;
import java.lang.Math.*;
public class J05018_Bang_diem_hoc_sinh {
    public static class HocSinh{
        public String ID, Name, Type;
        public Double Avg_Score;

        HocSinh (String ID, String Name, double Avg_Score){
            this.ID = ID;
            this.Name = Name;
            this.Type = Check(Avg_Score);
            String f = (String.format("%.2f", Avg_Score));
            this.Avg_Score = Double.parseDouble(f);
        }
        
        public String Check(double Avg_Score){
            if (Avg_Score >= 9) return "XUAT SAC";
            if (Avg_Score >= 8) return "GIOI";
            if (Avg_Score >= 7) return "KHA";
            if (Avg_Score >= 5) return "TB";
            return "YEU";
        }
        @Override
        public String toString(){
            return ID + " " + Name + " "  + String.format("%.1f", Avg_Score) + " " + Type;
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        ArrayList<HocSinh> hs = new ArrayList<>();
        
        for (int i = 1; i <= t; i ++) {
            sc.nextLine();
            String ID = "HS";
            if  (i < 10) ID += "0"; 
            ID += Integer.toString(i);
            String Name = sc.nextLine();
            double [] Score = new double[11];
            for (int j = 1; j <= 10; j++) {
                Score[j] = sc.nextDouble();
            }
            double Avg_Score = 0;
            for (int j = 1; j <= 10; j++) {
                if  (j == 1 || j == 2) Avg_Score += 2 * Score[j];
                else Avg_Score += Score[j];
                
            }
            Avg_Score /= 12;
            hs.add(new HocSinh(ID, Name, Avg_Score));
        }
        Collections.sort(hs, new Comparator<HocSinh>() {
            @Override
            public int compare(HocSinh a, HocSinh b) {
                if (a.Avg_Score != b.Avg_Score) return b.Avg_Score.compareTo(a.Avg_Score);
                else
                    return a.ID.compareTo(b.ID);
            }
        });
        for (HocSinh x : hs) {
            System.out.println(x);
        }
    }
}