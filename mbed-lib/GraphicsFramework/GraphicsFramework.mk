ASM_OBJ += $(MBED_LIB_DIR)/GraphicsFramework/ospl/porting/TOOLCHAIN_GCC/r_ospl_os_less_asm.o

C_OBJ += $(MBED_LIB_DIR)/GraphicsFramework/common/src/clib_drivers.o
C_OBJ += $(MBED_LIB_DIR)/GraphicsFramework/common/src/clib_samples.o
C_OBJ += $(MBED_LIB_DIR)/GraphicsFramework/jcu/jcu_driver/converter_wrapper.o
C_OBJ += $(MBED_LIB_DIR)/GraphicsFramework/jcu/jcu_driver/jcu_api.o
C_OBJ += $(MBED_LIB_DIR)/GraphicsFramework/jcu/jcu_driver/jcu_para.o
C_OBJ += $(MBED_LIB_DIR)/GraphicsFramework/jcu/jcu_driver/jcu_reg.o
C_OBJ += $(MBED_LIB_DIR)/GraphicsFramework/jcu/porting/jcu_pl.o
C_OBJ += $(MBED_LIB_DIR)/GraphicsFramework/jcu/userdef/jcu_user.o
C_OBJ += $(MBED_LIB_DIR)/GraphicsFramework/ospl/porting/DebugBreak.o
C_OBJ += $(MBED_LIB_DIR)/GraphicsFramework/ospl/porting/inline_body.o
C_OBJ += $(MBED_LIB_DIR)/GraphicsFramework/ospl/porting/locking.o
C_OBJ += $(MBED_LIB_DIR)/GraphicsFramework/ospl/porting/mcu_interrupts.o
C_OBJ += $(MBED_LIB_DIR)/GraphicsFramework/ospl/porting/r_ospl_debug.o
C_OBJ += $(MBED_LIB_DIR)/GraphicsFramework/ospl/porting/r_ospl_memory.o
C_OBJ += $(MBED_LIB_DIR)/GraphicsFramework/ospl/porting/r_ospl_RTX.o
C_OBJ += $(MBED_LIB_DIR)/GraphicsFramework/ospl/porting/r_ospl_unrecoverable.o
C_OBJ += $(MBED_LIB_DIR)/GraphicsFramework/ospl/src/r_ospl.o
C_OBJ += $(MBED_LIB_DIR)/GraphicsFramework/RGA/porting/RGA_Callback.o
C_OBJ += $(MBED_LIB_DIR)/GraphicsFramework/RGA/porting/RGA_Callback_WorkBuf.o
C_OBJ += $(MBED_LIB_DIR)/GraphicsFramework/RGA/porting/RGA_VRAM.o
C_OBJ += $(MBED_LIB_DIR)/GraphicsFramework/RGA/porting/RGA_VRAM_EX.o
C_OBJ += $(MBED_LIB_DIR)/GraphicsFramework/RGA/porting/vsync_pl.o
C_OBJ += $(MBED_LIB_DIR)/GraphicsFramework/RGA/RGPNCG/src/ncg_memory.o
C_OBJ += $(MBED_LIB_DIR)/GraphicsFramework/RGA/RGPNCG/src/ncg_register.o
C_OBJ += $(MBED_LIB_DIR)/GraphicsFramework/RGA/RGPNCG/src/ncg_state.o
C_OBJ += $(MBED_LIB_DIR)/GraphicsFramework/RGA/RGPNCG/src/ncg_vg.o
C_OBJ += $(MBED_LIB_DIR)/GraphicsFramework/RGA/RGPNCG/src/ncg_vg_isr.o
C_OBJ += $(MBED_LIB_DIR)/GraphicsFramework/RGA/src/video_input.o
C_OBJ += $(MBED_LIB_DIR)/GraphicsFramework/RGA/src/vsync.o
C_OBJ += $(MBED_LIB_DIR)/GraphicsFramework/RGA/src/window_surfaces.o

CXX_OBJ += $(MBED_LIB_DIR)/GraphicsFramework/jcu/jcu_driver/JPEG_Coverter.o
CXX_OBJ += $(MBED_LIB_DIR)/GraphicsFramework/RGA/src/video_input_cpp.o
CXX_OBJ += $(MBED_LIB_DIR)/GraphicsFramework/RGA/src/window_surfaces_cpp.o
CXX_OBJ += $(MBED_LIB_DIR)/mbed-rtos/rtos/Semaphore.o
CXX_OBJ += $(MBED_LIB_DIR)/mbed-rtos/rtos/Thread.o

INCLUDE_PATHS += -I$(MBED_LIB_DIR)/GraphicsFramework/common/inc
INCLUDE_PATHS += -I$(MBED_LIB_DIR)/GraphicsFramework/config
INCLUDE_PATHS += -I$(MBED_LIB_DIR)/GraphicsFramework/iobitmasks
INCLUDE_PATHS += -I$(MBED_LIB_DIR)/GraphicsFramework/jcu/inc
INCLUDE_PATHS += -I$(MBED_LIB_DIR)/GraphicsFramework/ospl/inc
INCLUDE_PATHS += -I$(MBED_LIB_DIR)/GraphicsFramework/RGA
INCLUDE_PATHS += -I$(MBED_LIB_DIR)/GraphicsFramework/RGA/inc
INCLUDE_PATHS += -I$(MBED_LIB_DIR)/GraphicsFramework/RGA/\RGPNCG/inc
INCLUDE_PATHS += -I$(MBED_LIB_DIR)/mbed-rtos/rtos
INCLUDE_PATHS += -I$(MBED_LIB_DIR)/mbed-rtos/rtx/TARGET_CORTEX_A

CDEFS += 