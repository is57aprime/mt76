savedcmd_mt76-sdio.mod := printf '%s\n'   sdio.o sdio_txrx.o | awk '!x[$$0]++ { print("./"$$0) }' > mt76-sdio.mod
