# Processor frequency
F_CPU = 8000000

BOARD = GENERIC_RP_RP2040
POINTING_DEVICE_DRIVER = pmw3360

QUANTUM_LIB_SRC += analog.c
#SRC += opt_encoder.c

DEFAULT_FOLDER = outerspace/trackball_ergo
CONSOLE_ENABLE=yes
