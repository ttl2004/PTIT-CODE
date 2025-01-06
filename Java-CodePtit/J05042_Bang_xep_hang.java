import java.util.*;

class SinhVien{
    public String Name;
    Integer Ac, Submit;

    SinhVien(String Name, int Ac, int Submit) {
        this.Name = Name;
        this.Ac = Ac;
        this.Submit = Submit;
    }

    @Override
    public String toString() {
        return String.format("%s %d %d", Name, Ac, Submit);
    }
}
public class J05042_Bang_xep_hang {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        ArrayList<SinhVien> list = new ArrayList<>();
        while (t -- > 0) {
            sc.nextLine();
            String Name = sc.nextLine();
            int Ac = sc.nextInt(), Submit = sc.nextInt();
            list.add(new SinhVien(Name, Ac, Submit));
        }

        Collections.sort(list, new Comparator<SinhVien>() {
            @Override
            public int compare(SinhVien o1, SinhVien o2) {
                if (o1.Ac.equals(o2.Ac) == false) {
                    return - o1.Ac.compareTo(o2.Ac);
                }
                else if (o1.Submit.equals(o2.Submit) == false) {
                    return o1.Submit.compareTo(o2.Submit);
                }
                else return o1.Name.compareTo(o2.Name);
            }
        });
        for (SinhVien x : list) {
            System.out.println(x);
        }
    }
}
