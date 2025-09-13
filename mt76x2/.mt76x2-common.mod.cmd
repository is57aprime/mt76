savedcmd_mt76x2/mt76x2-common.mod := printf '%s\n'   eeprom.o mac.o init.o phy.o mcu.o | awk '!x[$$0]++ { print("mt76x2/"$$0) }' > mt76x2/mt76x2-common.mod
