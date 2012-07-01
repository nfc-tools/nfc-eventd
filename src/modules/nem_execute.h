/*
 * Nfc Event Module Execute
 *
 * Copyright (C) 2009 Romuald Conty <romuald@libnfc.org>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 51
 * Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef __NEM_EXECUTE__
#define __NEM_EXECUTE__

#include "nem_common.h"

void nem_execute_init(nfcconf_context *module_context, nfcconf_block* module_block);
int nem_execute_event_handler(nfc_device* nfc_device, nfc_target* tag, const nem_event_t event);

#endif /* __NEM_EXECUTE__ */

