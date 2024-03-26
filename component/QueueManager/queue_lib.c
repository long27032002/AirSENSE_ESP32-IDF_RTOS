#include "queue_lib.h"

Queue_config_t *queue_create(uint32_t size, TickType_t timeout) {
    Queue_config_t *queue_config = (Queue_config_t *)malloc(sizeof(Queue_config_t));
    memset(queue_config, 0, sizeof(Queue_config_t));

    queue_config->size = size;
    queue_config->timeout = timeout;

    queue_config->queue = xQueueCreate(queue_config->size, sizeof(uint8_t));

    return queue_config;
}