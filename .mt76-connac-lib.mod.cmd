savedcmd_mt76-connac-lib.mod := printf '%s\n'   mt76_connac_mcu.o mt76_connac_mac.o | awk '!x[$$0]++ { print("./"$$0) }' > mt76-connac-lib.mod
