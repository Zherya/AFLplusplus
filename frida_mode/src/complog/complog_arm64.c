#include "frida-gum.h"

#include "debug.h"

#include "complog.h"

#if defined(__i386__)
void complog_instrument(const cs_insn *instr, GumStalkerIterator *iterator) {

  FATAL("Complog mode not supported on this architecture");

}

#endif
