#ifndef HYPERCALL_H
#define HYPERCALL_H

#include <linux/kvm.h>

#include "definition.h"
#include "hypercall_table.h"

int hp_handler(uint16_t nr, VM *vm);

#endif
