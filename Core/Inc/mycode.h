//
// Created by merli on 08.03.2024.
//

#ifndef LAB1_MYCODE_H
#define LAB1_MYCODE_H

#include <stdbool.h>
#include "main.h"

extern bool buttonState;
extern bool ledState;

//extern void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim);

extern void updateButtonState();

#endif //LAB1_MYCODE_H
