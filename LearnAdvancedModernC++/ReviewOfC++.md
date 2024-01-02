## Local variables and function arguments </br>

1. ### Local Variables (Biến Cục Bộ): </br>

Biến cục bộ là những biến được khai báo trong một khối mã,</br> 
thường là bên trong một hàm hoặc một câu lệnh ghép (được bao quanh bởi dấu ngoặc nhọn {}).</br> 
Những biến này chỉ có thể truy cập được trong khối mã mà chúng được khai báo. </br>
Khi luồng điều khiển thoát khỏi khối mã đó, các biến cục bộ sẽ bị hủy bỏ và bộ nhớ của chúng sẽ được giải phóng.</br>

2. ### Function Arguments (Tham Số Hàm):</br>

Tham số hàm là các tham số mà một hàm nhận khi nó được gọi.</br> 
Chúng cho phép dữ liệu được truyền vào hàm.</br> 
Tham số hàm hoạt động như các biến cục bộ trong hàm và chỉ có thể truy cập được trong phạm vi của hàm đó</br>

*Tóm lại, cả biến cục bộ và tham số hàm đều giới hạn trong phạm vi của hàm mà chúng được khai báo và</br> 
thường được sử dụng để lưu trữ và xử lý dữ liệu trong ngữ cảnh cụ thể đó.*</br>

## reference semantics và value semantics 

reference semantics và value semantics là hai cách tiếp cận khác nhau đối với việc truyền và </br>sử dụng giá trị của biến trong hàm và chương trình</br>

1. ### Value Semantics (Ngữ cảnh giá trị):

Value semantics đề cập đến việc truyền giá trị của biến vào hàm. </br>
Khi bạn truyền giá trị, một bản sao của giá trị được tạo ra, và các thay đổi trong hàm không ảnh hưởng đến giá trị gốc</br>

2. ### Reference Semantics (Ngữ cảnh tham chiếu):

Reference semantics đề cập đến việc truyền tham chiếu của biến vào hàm. </br>
Tham chiếu là một biến khác tên mà tham chiếu đến cùng một ô nhớ với biến gốc. </br> Bất kỳ thay đổi nào trong hàm đối với tham chiếu sẽ ảnh hưởng trực tiếp đến giá trị của biến gốc.</br>

*Lựa chọn giữa value semantics và reference semantics phụ thuộc vào yêu cầu của chương trình và mong muốn của người lập trình.</br> 
Sử dụng tham chiếu có thể giúp tránh việc sao chép không cần thiết và giúp thay đổi trực tiếp giá trị của biến gốc.* </br>

## Declaration and Initialization

1. ### Universal initialization 
Universal initialization trong C++ thường được gọi là "uniform initialization" hoặc "braced initialization".</br> 
Nó là một cách thức khai báo và khởi tạo biến một cách đồng nhất sử dụng dấu ngoặc nhọn {}.</br>

Có hai cách sử dụng uniform initialization:</br>

#### Khai Báo và Khởi Tạo Biến:

``` cpp
#include <iostream>

int main() {
    // Uniform initialization
    int x{10};
    double y{3.14};
    char ch{'A'};

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "ch: " << ch << std::endl;

    return 0;
}
```

#### Khai Báo và Khởi Tạo Mảng:

``` cpp
#include <iostream>

int main() {
    // Uniform initialization cho mảng
    int numbers[]{1, 2, 3, 4, 5};

    // In giá trị của mảng
    for (int i = 0; i < 5; ++i) {
        std::cout << "numbers[" << i << "]: " << numbers[i] << std::endl;
    }

    return 0;
}
```

Universal initialization mang lại một số lợi ích, bao gồm:
+ Đồng nhất: Bạn có thể sử dụng cách này để khai báo và khởi tạo biến một cách đồng nhất cho mọi kiểu dữ liệu, </br>bao gồm cả mảng và các cấu trúc dữ liệu.
+ Chế độ cảnh báo (warning): Có thể bật chế độ cảnh báo khi có sự mơ hồ hoặc mâu thuẫn trong khai báo và khởi tạo.</br>

*Tuy nhiên, cũng cần lưu ý rằng uniform initialization có thể gây nhầm lẫn trong một số tình huống,</br> đặc biệt là khi bạn có các kiểu dữ liệu có thể được chuyển đổi một cách không rõ ràng*</br>

## class

+ Một lớp (class) là một cấu trúc dữ liệu phức tạp.</br>
+ Các lớp có thể có cả hàm thành viên và thành viên dữ liệu.</br>
> + Chúng ta có thể chọn những hàm thành viên nào sẽ có, tên của chúng, </br>chức năng của chúng và khi nào chúng sẽ được gọi</br>
> + Những quyết định này xác định hành vi của các đối tượng của lớp.</br>
> + Chúng được gọi để thực hiện các hoạt động trên một đối tượng.</br>
+ Mặc định, quyền truy cập vào thành viên của lớp là "private" (riêng tư).</br>








