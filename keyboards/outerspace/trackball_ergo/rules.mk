# Processor frequency
#F_CPU = 8000000

BOARD = GENERIC_RP_RP2040
POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = pmw3389

QUANTUM_LIB_SRC += analog.c
#SxRC += opt_encoder.c

DEFAULT_FOLDER = outerspace/trackball_ergo
