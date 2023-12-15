#pragma once

/**
 * @brief Mnist model init
 *
 */
void mnist_model_init();

/**
 * @brief Mnist model predict
 *
 * @param pic
 * @param size
 */
void mnist_model_predict(float *pic, int size);