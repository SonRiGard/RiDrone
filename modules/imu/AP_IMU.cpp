#include "hardWareConfig.h"
#include "AP_IMU.h"

void imuSetUp(){
    setupMPU6050_HMC5883L ();
}

void sensorPublisherTask(void *pvParameters) {
    imuSetUp();
    imudata9Dof data;
    while (1) {
        readDataMPU6050_HMC5883L(data.AGraw,data.Mraw,data.AGconverted,data.Mconverted);
        xQueueSend(imuKalmanDataQueue, &data, portMAX_DELAY);

        vTaskDelay(pdMS_TO_TICKS(10)); // 10ms
    }
}

