savedcmd_mt76x2/mt76x2e.mod := printf '%s\n'   pci.o pci_main.o pci_init.o pci_mcu.o pci_phy.o | awk '!x[$$0]++ { print("mt76x2/"$$0) }' > mt76x2/mt76x2e.mod
