savedcmd_mt76x0/mt76x0u.mod := printf '%s\n'   usb.o usb_mcu.o | awk '!x[$$0]++ { print("mt76x0/"$$0) }' > mt76x0/mt76x0u.mod
