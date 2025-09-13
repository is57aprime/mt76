savedcmd_mt76.mod := printf '%s\n'   mmio.o util.o trace.o dma.o mac80211.o debugfs.o eeprom.o tx.o agg-rx.o mcu.o pci.o | awk '!x[$$0]++ { print("./"$$0) }' > mt76.mod
