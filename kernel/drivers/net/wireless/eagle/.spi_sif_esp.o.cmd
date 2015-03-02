cmd_drivers/net/wireless/eagle/spi_sif_esp.o := arm_1103_le-gcc -Wp,-MD,drivers/net/wireless/eagle/.spi_sif_esp.o.d  -nostdinc -isystem /home/blajos/work/wm8880/apc-rock-toolchain/bin/../lib/gcc/arm-none-linux-gnueabi/4.5.2/include -I/home/blajos/work/wm8880/FOSSEE-netbook-kernel-source/arch/arm/include -Iarch/arm/include/generated -Iinclude  -include /home/blajos/work/wm8880/FOSSEE-netbook-kernel-source/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-wmt/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -O2 -marm -fno-dwarf2-cfi-asm -fno-omit-frame-pointer -mapcs -mno-sched-prolog -mabi=aapcs-linux -mno-thumb-interwork -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -fno-stack-protector -fno-omit-frame-pointer -fno-optimize-sibling-calls -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DDEBUG -DSIP_DEBUG -DFAST_TX_STATUS -DANDROID -DKERNEL_IV_WAR -DRX_SENDUP_SYNC -DDEBUGFS -DHAS_FW -DTEST_MODE -DESP_ANDROID_LOGGER -DINIT_DATA_CONF -DESP_ACK_INTERRUPT -DESP_ACK_LATER -DP2P_CONCURRENT -DESP_USE_SDIO  -DMODULE  -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(spi_sif_esp)"  -D"KBUILD_MODNAME=KBUILD_STR(eagle)" -c -o drivers/net/wireless/eagle/.tmp_spi_sif_esp.o drivers/net/wireless/eagle/spi_sif_esp.c

source_drivers/net/wireless/eagle/spi_sif_esp.o := drivers/net/wireless/eagle/spi_sif_esp.c

deps_drivers/net/wireless/eagle/spi_sif_esp.o := \

drivers/net/wireless/eagle/spi_sif_esp.o: $(deps_drivers/net/wireless/eagle/spi_sif_esp.o)

$(deps_drivers/net/wireless/eagle/spi_sif_esp.o):
