savedcmd_mt76-usb.mod := printf '%s\n'   usb.o usb_trace.o | awk '!x[$$0]++ { print("./"$$0) }' > mt76-usb.mod
