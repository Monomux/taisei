/*
 * This software is licensed under the terms of the MIT License.
 * See COPYING for further information.
 * ---
 * Copyright (c) 2011-2024, Lukas Weber <laochailan@web.de>.
 * Copyright (c) 2012-2024, Andrei Alexeyev <akari@taisei-project.org>.
 */

#include "taskdsl.h"

DEFINE_EXTERN_TASK(_cancel_task_helper) {
	CoTask *task = cotask_unbox(ARGS.task);

	if(task) {
		cotask_cancel(task);
	}
}
