#include "AP_kalman.h"


void ekfTask(void *pvParameters) {
    imudata9Dof sensorData;

    while (1) {
        // Nhận dữ liệu thô từ queue
        if (xQueueReceive(imuKalmanDataQueue, &sensorData, portMAX_DELAY)) {
            Serial.println(sensorData.AGraw.ax);
            // Gửi trạng thái vào queue
            // xQueueSend(stateDataQueue, &stateData, portMAX_DELAY);
        }
    }
}