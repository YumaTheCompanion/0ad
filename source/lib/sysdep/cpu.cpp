/**
 * =========================================================================
 * File        : cpu.cpp
 * Project     : 0 A.D.
 * Description : CPU and memory detection.
 * =========================================================================
 */

// license: GPL; see lib/license.txt

#include "precompiled.h"
#include "cpu.h"

ERROR_ASSOCIATE(ERR::CPU_FEATURE_MISSING, "This CPU doesn't support a required feature", -1);
ERROR_ASSOCIATE(ERR::CPU_UNKNOWN_OPCODE, "Disassembly failed", -1);
ERROR_ASSOCIATE(ERR::CPU_UNKNOWN_VENDOR, "CPU vendor unknown", -1);
ERROR_ASSOCIATE(ERR::CPU_RESTRICTED_AFFINITY, "Cannot set desired CPU affinity", -1);

void* cpu_memcpy_thunk(void* RESTRICT dst, const void* RESTRICT src, size_t size)
{
	return cpu_memcpy(dst, src, size);
}
