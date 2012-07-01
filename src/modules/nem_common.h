/*
 * Nfc Event Module common header
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

#ifndef __NEM_COMMON__
#define __NEM_COMMON__

#include <nfc/nfc.h>

/* Nfc Event Module, aka NEM, common defines */
#include "../nfcconf/nfcconf.h"
#include "../debug/debug.h"
#include "../debug/nfc-utils.h"
#include "../types.h"

typedef void (*module_init_fct)(nfcconf_context*, nfcconf_block*);
typedef int (*module_event_handler_fct)( const nfc_device*, const nfc_target*, const nem_event_t );

#endif /* __NEM_COMMON__ */

