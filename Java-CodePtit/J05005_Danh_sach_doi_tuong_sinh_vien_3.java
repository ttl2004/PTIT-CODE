import java.util.*;

class SinhVien{
    public String MSV = "B20DCCN0", Name, Class, Day, Month, Year;
    public Double GPA;

    SinhVien(int i, String Name, String Class, String Date, double GPA) {
        if (i < 10) this.MSV += "0";
        this.MSV += Integer.toString(i);

        String [] tmp = Name.trim().split("\\s+");
        String s = "";
        for (String x : tmp) {
            s += x.substring(0, 1).toUpperCase() + x.substring(1).toLowerCase() + " ";
        }
        this.Name = s;

        this.Class = Class;

        String [] arr = Date.trim().split("/");
        if (arr[0].length() == 1) arr[0] = "0" + arr[0];
        if (arr[1].length() == 1) arr[1] = "0" + arr[1];
        this.Day = arr[0];
        this.Month = arr[1];
        this.Year = arr[2];

        this.GPA = GPA;
    }

    @Override
    public String toString() {
        return String.format("%s %s%s %s/%s/%s %.2f", MSV, Name, Class, Day, Month, Year, GPA);
    }
}

public class J05005_Danh_sach_doi_tuong_sinh_vien_3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        ArrayList<SinhVien> list = new ArrayList<>();
        for (int i = 1; i <= t; i ++) {
            sc.nextLine();
            String Name = sc.nextLine();
            String Class = sc.nextLine();
            String Date = sc.nextLine();
            double GPA = sc.nextDouble();
            list.add(new SinhVien(i, Name, Class, Date, GPA));
        }

        Collections.sort(list, new Comparator<SinhVien>() {
            @Override
            public int compare(SinhVien o1, SinhVien o2) {
                return -o1.GPA.compareTo(o2.GPA);
            }
        });
        for (SinhVien x : list) {
            System.out.println(x);
        }
    }
}
