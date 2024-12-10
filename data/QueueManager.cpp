#include "QueueManager.h"
// Tạo queue dùng chung
QueueHandle_t imuKalmanDataQueue = nullptr;

void initializeQueues() {
    imuKalmanDataQueue = xQueueCreate(10, sizeof(imudata9Dof));
    if (imuKalmanDataQueue == NULL) {
        // Xử lý nếu tạo queue thất bại
        printf("Failed to create IMU data queue!\n");
        while (1);
    }


    
}