savedcmd_besra/besra.mod := printf '%s\n'   pci.o init.o dma.o eeprom.o main.o mcu.o mac.o debugfs.o mmio.o | awk '!x[$$0]++ { print("besra/"$$0) }' > besra/besra.mod
