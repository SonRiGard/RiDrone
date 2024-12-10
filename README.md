# Ridrone Project 🚁  

## 🚀 Giới thiệu  
**Ridrone** là một dự án mã nguồn mở về máy bay không người lái sử dụng **ESP32** và framework **Arduino**. Mục tiêu của dự án là chia sẻ toàn bộ kiến thức về máy bay không người lái, khuyến khích cộng đồng đóng góp, và cùng nhau viết tài liệu chi tiết bằng tiếng Việt để giúp mọi người dễ dàng tiếp cận hơn với lĩnh vực này.

## 🌟 Tính năng chính  
- **Sử dụng các cảm biến và thư viện phổ biến:**  
  - 📡 NRF24 (Giao tiếp không dây)  
  - ⚙️ MPU6050 (Gia tốc & con quay hồi chuyển)  
  - 🧭 HMC5883L (Cảm biến từ trường)  
  - 🔧 Servo (Điều khiển động cơ)  

- **Hỗ trợ các thuật toán phức tạp:**  
  - 🔍 Kalman Filter  
  - 🎯 PID Control  
  - 🛠️ Bộ lọc dữ liệu cảm biến (cao tầng/thấp tầng).  

- **Tích hợp để nghiên cứu:**  
  - 📍 Định vị và điều khiển chính xác.  
  - 📷 Xử lý hình ảnh.  
  - 🐝 Điều khiển drone theo bầy đàn.

## 💻 Yêu cầu hệ thống  

- **Phần cứng:**  
  - 🖥️ ESP32: Bộ vi điều khiển mạnh mẽ với Wi-Fi và Bluetooth tích hợp, phù hợp để xử lý nhiều tác vụ như giao tiếp không dây và điều khiển.  
  - ⚙️ Cảm biến MPU6050, HMC5883L: MPU6050 cung cấp dữ liệu gia tốc và con quay hồi chuyển, kết hợp với HMC5883L để đo từ trường, giúp định hướng và ổn định drone.  
  - 📡 NRF24L01: Module giao tiếp không dây với độ trễ thấp và phạm vi hoạt động xa, lý tưởng cho việc điều khiển từ xa.  
  - 🔧 Động cơ servo: Được sử dụng để điều khiển cánh quạt hoặc các cơ chế linh hoạt trên drone, giúp nâng cao khả năng kiểm soát.  

- **Phần mềm:**  
  - 🔗 [PlatformIO](https://platformio.org/): Một IDE mạnh mẽ, hỗ trợ nhiều nền tảng, tích hợp dễ dàng các thư viện và công cụ build tự động, tiết kiệm thời gian cho lập trình viên.  
  - 🛠️ Framework: Arduino: Đơn giản, dễ sử dụng, có cộng đồng hỗ trợ lớn, giúp người mới dễ dàng tiếp cận và phát triển ứng dụng drone.   

## ⚙️ Cài đặt  
1. **Clone dự án:**  
   ```bash
   git clone https://github.com/SonRiGard/RiDrone
   cd ridrone
   ```
2. 📦 Cài đặt các thư viện  
- Các thư viện đã được định nghĩa trong file `platformio.ini`.  
- Khi build lần đầu, **PlatformIO** sẽ tự động tải và cài đặt các thư viện cần thiết.  

3. 🔧 Build và nạp firmware  
- Sử dụng lệnh sau để build và nạp firmware vào **ESP32**:  
  ```bash
  platformio run --target upload
  ```
## Cộng đồng đóng góp 🌟  
Chúng tôi rất mong nhận được sự đóng góp từ các bạn. Dưới đây là một số cách bạn có thể tham gia:  

### 📘 Chia sẻ kiến thức  
- 🧠 Giải thích chi tiết các thuật toán như Kalman, PID.  
- 🎯 Tại sao cần lọc dữ liệu từ cảm biến? Bộ lọc nào phù hợp với từng trường hợp?  

### 🔬 Nghiên cứu và mở rộng  
- 📷 Drone có thể xử lý hình ảnh thế nào để nhận diện vật thể?  
- 📡 Làm thế nào định vị drone mà không cần GPS?  
- 🐝 Cách điều khiển drone theo bầy đàn?  

### ✍️ Viết tài liệu bằng tiếng Việt  
- 💡 Giải thích thuật toán một cách dễ hiểu.  
- 🛠️ Chia sẻ kinh nghiệm lập trình và thiết kế drone.  

## 📬 Liên hệ  
Hãy tham gia repository của chúng tôi để đóng góp hoặc đặt câu hỏi:  
[GitHub - Ridrone](https://github.com/SonRiGard/RiDrone)
Hoặc qua địa chỉ mail cá nhân nếu muốn giải thích cụ thể để cùng bắt đầu. :)