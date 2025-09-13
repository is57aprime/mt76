savedcmd_mt76x0/mt76x0e.mod := printf '%s\n'   pci.o pci_mcu.o | awk '!x[$$0]++ { print("mt76x0/"$$0) }' > mt76x0/mt76x0e.mod
