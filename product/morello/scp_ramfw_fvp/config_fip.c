/*
 * Arm SCP/MCP Software
 * Copyright (c) 2018-2020, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "morello_scp_system_mmap.h"

#include <mod_fip.h>

#include <fwk_module.h>

const struct fwk_module_config config_fip = {
    .data = &((struct mod_fip_config){
        .fip_base_address = SCP_QSPI_FLASH_BASE_ADDR,
        .fip_nvm_size = SCP_QSPI_FLASH_SIZE,
    })
};
