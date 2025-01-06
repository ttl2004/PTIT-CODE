import java.util.*;
import java.io.*;

class MonThi {
    public String id;
    public String name;
    public String HinhThucThi;

    public MonThi(String id, String name, String HinhThucThi) {
        this.id = id;
        this.name = name;
        this.HinhThucThi = HinhThucThi;
    }

    @Override
    public String toString() {
        return id + " " + name + " " + HinhThucThi;
    }
}
public class J07058_Danh_sach_mon_thi {
    public static void main(String[] args) {
        //String fileName = "E://Code_Ptit//Java - codeptit//DATA.txt";
        String fileName = "MONHOC.in";
        try {
            BufferedReader br =  new BufferedReader(new FileReader(fileName));
            String line = br.readLine();
            int n = Integer.parseInt(line);
            List<MonThi> list = new ArrayList<>();
            for (int i = 0; i < n; i ++) {
                String id = br.readLine().trim();  
                String name = br.readLine().trim();  
                String HinhThucThi = br.readLine().trim();  
                list.add(new MonThi(id, name, HinhThucThi));
            }
            Collections.sort(list, new Comparator<MonThi>() {
                @Override
                public int compare(MonThi o1, MonThi o2) {
                    return o1.id.compareTo(o2.id);
                }
            });
            for (MonThi x : list) {
                System.out.println(x);
            }
        }
        catch (Exception e) {
            e.printStackTrace();
        }
    }
}
