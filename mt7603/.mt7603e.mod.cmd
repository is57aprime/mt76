savedcmd_mt7603/mt7603e.mod := printf '%s\n'   pci.o soc.o main.o init.o mcu.o core.o dma.o mac.o eeprom.o beacon.o debugfs.o | awk '!x[$$0]++ { print("mt7603/"$$0) }' > mt7603/mt7603e.mod
