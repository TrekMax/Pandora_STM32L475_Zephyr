/*
 * Copyright (c) 2015 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/kernel.h>
#include <zephyr/shell/shell.h>
#include <version.h>
#include <zephyr/logging/log.h>

LOG_MODULE_REGISTER(app);

int main()
{
	LOG_INF("I2C Scan! %s\n", CONFIG_BOARD);
	return 0;
}