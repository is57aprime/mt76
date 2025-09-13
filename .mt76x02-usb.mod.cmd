savedcmd_mt76x02-usb.mod := printf '%s\n'   mt76x02_usb_mcu.o mt76x02_usb_core.o | awk '!x[$$0]++ { print("./"$$0) }' > mt76x02-usb.mod
