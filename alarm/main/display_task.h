#pragma once

#if 0
typedef struct {
    QueueHandle_t toDisplayQ;
    QueueHandle_t toMqttQ;
} display_task_ipc_t;
#endif

void display_task(void * ipc_void);
