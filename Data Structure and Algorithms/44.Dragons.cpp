/*Bài 44. Dragons
Kirito đang bị mắc kẹt ở cấp độ của MMORPG mà anh ấy đang chơi hiện tại. Để tiếp tục
trò chơi, anh ta phải đánh bại tất cả n con rồng sống ở cấp độ này. Kirito và những con
rồng có sức mạnh, được biểu thị bằng một số nguyên. Trong cuộc đọ sức giữa hai đối thủ,
kết quả của cuộc đọ sức được quyết định bởi sức mạnh của họ. Ban đầu, sức mạnh của
Kirito bằng s.
Nếu Kirito bắt đầu đấu tay đôi với rồng thứ i (1 ≤ i ≤ n) và sức mạnh của Kirito không lớn
hơn sức mạnh của rồng có sức mạnh là xi, thì Kirito thua trận đấu và chết. Nhưng nếu sức
mạnh của Kirito lớn hơn sức mạnh của con rồng, thì anh ta sẽ đánh bại con rồng và được
tăng thêm sức mạnh theo là yi.
Kirito có thể chiến đấu với những con rồng theo bất kỳ thứ tự nào. Xác định xem liệu anh
ta có thể chuyển sang cấp độ tiếp theo của trò chơi hay không, tức là đánh bại tất cả
những con rồng mà không bị thua một lần nào.
Input
Dòng đầu tiên chứa hai số nguyên được phân tách bằng dấu cách s và n (1 ≤ s ≤ 104
, 1 ≤ n
≤ 103
). Sau đó n dòng tiếp theo: dòng thứ i chứa các số nguyên được phân tách bằng dấu
cách là xi và yi (1 ≤ xi ≤ 104
, 0 ≤ yi ≤ 104
) - sức mạnh của con rồng thứ i và sức mạnh
được tăng thêm khi đánh bại nó.
Output
35
Trên một dòng duy nhất in "YES" (không có dấu ngoặc kép), nếu Kirito có thể chuyển
sang cấp độ tiếp theo và in "NO" (không có dấu ngoặc kép), nếu anh ta không thể.
Ví dụ
Input   Output
2 2
1 99
100 0
        YES
10 1
100 100
        NO
*/
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
int main(){
    int s, n;
    cin >> s >> n;
    vector<pair<int , int >> v;
    for(int i = 0 ; i < n; i++){
        int x , y;
        cin >> x >> y;
        v.push_back({x,y});
    }
    sort(v.begin(), v.end());
    for(int i = 0 ; i < n; i++){
        if(s > v[i].first){
                s += v[i].second;
        }
        else{
                cout << "NO";
                return 0;
        } 
    }
    cout << "YES" << endl;
}