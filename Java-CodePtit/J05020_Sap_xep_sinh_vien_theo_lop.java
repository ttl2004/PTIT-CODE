import java.util.*;

class SinhVien{
    public String Msv, Name, Lop, Email;
    public SinhVien(String Msv, String Name, String Lop, String Email){
        this.Msv = Msv;
        this.Name = Name;
        this.Lop = Lop;
        this.Email = Email;
    }

    @Override
    public String toString(){
        return Msv + " " + Name + " " + Lop + " " + Email;
    }
}

public class J05020_Sap_xep_sinh_vien_theo_lop {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        SinhVien[] sv = new SinhVien[n];
        for (int i = 0; i < n; i++) {
            sv[i] = new SinhVien(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
        }
        Arrays.sort(sv, new Comparator<SinhVien>() {
            @Override
            public int compare(SinhVien o1, SinhVien o2) {
                if (o1.Lop.compareTo(o2.Lop) != 0) {
                    return o1.Lop.compareTo(o2.Lop);
                } 
                else {
                    return o1.Msv.compareTo(o2.Msv);
                }
            }
        });
        for (SinhVien i : sv) {
            System.out.println(i);
        }
    }
}

