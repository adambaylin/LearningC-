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
Sử dụng tham chiếu có thể giúp tránh việc sao chép không cần thiết và giúp thay đổi trực tiếp giá trị của biến gốc. * </br>
