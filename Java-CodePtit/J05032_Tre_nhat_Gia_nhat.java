import java.util.*;

class ThongTin{
    public String Name;
    Integer  Day, Month, Year;

    ThongTin(String Name, String Date) {
        this.Name = Name;
        String [] arr = Date.trim().split("/");
        this.Day = Integer.parseInt(arr[0]);
        this.Month = Integer.parseInt(arr[1]);
        this.Year = Integer.parseInt(arr[2]);
    }

    @Override
    public String toString() {
        return Name;
    }
}
public class J05032_Tre_nhat_Gia_nhat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<ThongTin> list = new ArrayList<>();

        for (int i = 0; i < n; i ++) {
            String Name = sc.next(), Date = sc.next();
            list.add(new ThongTin(Name, Date));
        }

        Collections.sort(list, new Comparator<ThongTin>() {
            @Override
            public int compare(ThongTin o1, ThongTin o2) {
                if (o1.Year.equals(o2.Year) == false) {
                    return o1.Year.compareTo(o2.Year);
                }
                else if (o1.Month.equals(o2.Month) == false) {
                    return o1.Month.compareTo(o2.Month);
                }
                else {
                    return o1.Day.compareTo(o2.Day);
                }
            }
        });

        System.out.println(list.get(n - 1) + "\n" + list.get(0));
    }
}
