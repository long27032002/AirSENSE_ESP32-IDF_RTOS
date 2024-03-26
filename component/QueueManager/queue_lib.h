/**
 * @file queue.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-02-04
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "esp_system.h"
#include "esp_log.h"
#include "freertos/queue.h"
#include "freertos/semphr.h"
#include "freertos/FreeRTOS.h"

typedef struct {
    QueueHandle_t queue;
    uint32_t size;
    TickType_t timeout;
} Queue_config_t;

Queue_config_t *queue_create(uint32_t size, TickType_t timeout);

bool queue_send(Queue_config_t *Queue_config, void *data);

bool queue_sendWithCondition(Queue_config_t *Queue_config, void *data, bool condition);

void queue_recive(Queue_config_t *Queue_config, void *data);

bool queue_reSize(Queue_Config_t *Queue_config, uint32_t size);

bool queue_isEmpty(Queue_config_t *Queue_config);

bool queue_isFull(Queue_config_t *Queue_config);

void queue_destroy(Queue_config_t *Queue_config);
