#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
#define fi first
#define se second
using namespace std;
/*
                       _oo0oo_
                      o8888888o
                      88" . "88
                      (| -_- |)
                      0\  =  /0
                    ___/`---'\___
                  .' \\|     |// '.
                 / \\|||  :  |||// \
                / _||||| -:- |||||- \
               |   | \\\  -  /// |   |
               | \_|  ''\---/''  |_/ |
               \  .-\__  '-'  ___/-. /
             ___'. .'  /--.--\  `. .'___
          ."" '<  `.___\_<|>_/___.' >' "".
         | | :  `- \`.;`\ _ /`;.`/ - ` : | |
         \  \ `_.   \_ __\ /__ _/   .-` /  /
     =====`-.____`.___ \_____/___.-`___.-'=====
                       `=---='
*/
//ABCDEFGHIJKLMNOPQRSTUVWXYZ

int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
/*
Ý tưởng của thuật toán này:
	+ Đếm số lượng ký tự X và T trong chuỗi s và lưu vào biến cnt_X và cnt_T;
	+ Biến cnt_X ta coi nó là độ dài của cửa sổ thứ 1 mà trong cửa sổ đó chỉ chứa 
ký tự X và cửa sổ này luôn lằm ở đầu dãy (dãy đã được sort thoả mãn đề bài)
	+ Biến cnt_T ta cũng coi nó là độ dài của cửa sổ thứ 2 mà trong cửa sổ đó chỉ chứa
ký tự T và cửa sổ này nằm sau cửa sổ thứ 1 (có độ dài là cnt_X) trong dãy đúng (dãy thoả mãn 
yêu cầu đề bài)
	+ Ta duyệt cửa sổ thứ 1 của dãy a ban đầu (chưa thoả mãn) đếm xem có bao nhiếu ký tự X và lưu
vào biến ct_X, và đếm luôn hai ký tự T và D và lưu vào ct_T và ct_D.
	+ Sau khi duyệt xong thì ta biết đc cửa sổ thứ 1 có số lượng ký tự X là ct_X và số lượng 
ký tự X còn thiếu là cnt_X - ct_X => chỉnh là số lần swap để đưa các ký tự X ko nằm trong cửa sổ
thứ 1 về cửa sổ thứ 1
	+ Tiếp theo ta có hai biến ct_T và ct_D chính là sô lượng ký tự T và D vừa swap với ký tự X để
đưa các ký tự X về vị trí đúng
	+ Giờ chỉ cần gán các vị trị có ký tự là X trong chuỗi s ban đầu bằng ký tự T nếu ct_T > 0 hoặc bằng ký tự D nếu ct_D > 0,
chú ý gán số X = T trước đến khi nào ct_T = 0 thì mới gán X = D vì nếu gán X = D trước thì kết quả cuối 
cùng sẽ không phải số lần swap ít nhất
	+ Sau khi gán xong, ta chỉ cần kiểm tra cửa sổ thứ 2 có bao nhiêu ký tự T và lưu vào biến ct_T (biến ct_T ở 
bước gán X = T đã được reset về 0 sau khi gán xong). Số lượng ký tự T còn thiếu ở cửa sổ này là cnt_T - ct_T => chính
là số lần swap để đưa các ký tự T ngoài cửa sổ thứ 2 về đúng vị trí trong cửa sổ thứ 2
	+ Sau khi biết đc số lần cần swap số 1 thì không cần swap nữa vì lúc này ký tự X, T, D về đúng vị trí rồi
=>> Khó hiểu quá thì chạy tay code cho hiểu ý tưởng nha :))))
*/
	int n;
	string s;
	cin >> n >> s;
	int cnt_X = 0, cnt_T = 0;
	for (int i = 0; i < n; i ++) {
		if (s[i] == 'X') cnt_X ++;
		else if (s[i] == 'T') cnt_T ++;
	}
	int ans = 0, ct_X = 0, ct_T = 0, ct_D = 0;
	for (int i = 0; i < cnt_X; i ++) {
		if (s[i] == 'X') ct_X ++;
		else if (s[i] == 'T') ct_T ++;
		else ct_D ++;
	}
	ans += cnt_X - ct_X;
	for (int i = cnt_X; i < n; i ++) {
		if (ct_T == 0 && ct_D == 0) break;
		if (ct_T > 0 && s[i] == 'X') {
			s[i] = 'T';
			ct_T --;
		}
		else if (ct_D > 0 && s[i] == 0) {
			s[i] = 'D';
			ct_D --;
		}
	}
	for (int i = cnt_X; i < cnt_T + cnt_X; i ++) {
		if (s[i] == 'T') ct_T ++;
	}
	ans += cnt_T - ct_T;
	cout << ans;
	return 0;
}
