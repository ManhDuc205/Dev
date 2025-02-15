/*
Bài 43. Vanya và đèn lồng
Vanya đi bộ vào ban đêm dọc theo một con đường thẳng dài có độ dài l, được thắp sáng
bởi n chiếc đèn lồng. Xét hệ trục tọa độ với điểm đầu của đường phố tương ứng với điểm
0 và điểm cuối của nó tương ứng với điểm l. Khi đó đèn lồng thứ i ở điểm ai. Đèn lồng
chiếu sáng tất cả các điểm trên đường phố cách nó nhiều nhất là d, trong đó d là một số
dương, chung cho tất cả các đèn lồng.
Vanya tự hỏi: bán kính ánh sáng tối thiểu d mà những chiếc đèn lồng phải có để thắp sáng
cả con phố?
Input
Dòng đầu tiên chứa hai số nguyên n, l (1 ≤ n ≤ 1000, 1 ≤ l ≤ 109) - số lượng đèn lồng và
chiều dài đường phố tương ứng.
34
Dòng tiếp theo chứa n số nguyên ai (0 ≤ ai ≤ l). Nhiều đèn lồng có thể được đặt tại cùng
một điểm. Đèn lồng có thể nằm ở cuối phố.
Output
In bán kính ánh sáng tối thiểu d, cần thiết để chiếu sáng cả đường phố. Câu trả lời sẽ được
coi là đúng nếu sai số tuyệt đối hoặc tương đối của nó không vượt quá 10-9
Ví dụ
Input                       Output
7 15
15 5 3 7 9 14 0
                            2.5000000000
2 5
2 5
                            2.0000000000
*/
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main(){
    int n, l;
    cin >> n  >> l;
    int* a = new int[n];
    for(int i  = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    double bkmax = max(a[0], l - a[n - 1]);
    for(int i = 1 ; i < n; i++){
        bkmax = max (bkmax , (a[i] - a[i - 1]) / 2.0);
    }
    cout << fixed << setprecision(10) << bkmax << endl;
    delete[] a;
}