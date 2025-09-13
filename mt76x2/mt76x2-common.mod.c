#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(mt76x2_read_rx_gain, "_gpl", "");
KSYMTAB_FUNC(mt76x2_get_rate_power, "_gpl", "");
KSYMTAB_FUNC(mt76x2_get_power_info, "_gpl", "");
KSYMTAB_FUNC(mt76x2_get_temp_comp, "_gpl", "");
KSYMTAB_FUNC(mt76x2_eeprom_init, "_gpl", "");
KSYMTAB_FUNC(mt76x2_mac_stop, "_gpl", "");
KSYMTAB_FUNC(mt76x2_set_sar_specs, "_gpl", "");
KSYMTAB_FUNC(mt76x2_reset_wlan, "_gpl", "");
KSYMTAB_FUNC(mt76_write_mac_initvals, "_gpl", "");
KSYMTAB_FUNC(mt76x2_init_txpower, "_gpl", "");
KSYMTAB_FUNC(mt76x2_apply_gain_adj, "_gpl", "");
KSYMTAB_FUNC(mt76x2_phy_set_txpower_regs, "_gpl", "");
KSYMTAB_FUNC(mt76x2_phy_set_txpower, "_gpl", "");
KSYMTAB_FUNC(mt76x2_configure_tx_delay, "_gpl", "");
KSYMTAB_FUNC(mt76x2_phy_tssi_compensate, "_gpl", "");
KSYMTAB_FUNC(mt76x2_phy_update_channel_gain, "_gpl", "");
KSYMTAB_FUNC(mt76x2_mcu_set_channel, "_gpl", "");
KSYMTAB_FUNC(mt76x2_mcu_load_cr, "_gpl", "");
KSYMTAB_FUNC(mt76x2_mcu_init_gain, "_gpl", "");
KSYMTAB_FUNC(mt76x2_mcu_tssi_comp, "_gpl", "");

SYMBOL_CRC(mt76x2_read_rx_gain, 0x5b5def61, "_gpl");
SYMBOL_CRC(mt76x2_get_rate_power, 0x8593e7ac, "_gpl");
SYMBOL_CRC(mt76x2_get_power_info, 0xbd45679f, "_gpl");
SYMBOL_CRC(mt76x2_get_temp_comp, 0xbb3b54e5, "_gpl");
SYMBOL_CRC(mt76x2_eeprom_init, 0x1eca1a1b, "_gpl");
SYMBOL_CRC(mt76x2_mac_stop, 0xe519ea36, "_gpl");
SYMBOL_CRC(mt76x2_set_sar_specs, 0x444a6fe8, "_gpl");
SYMBOL_CRC(mt76x2_reset_wlan, 0xc7c311dc, "_gpl");
SYMBOL_CRC(mt76_write_mac_initvals, 0x4c28f930, "_gpl");
SYMBOL_CRC(mt76x2_init_txpower, 0xc64119cc, "_gpl");
SYMBOL_CRC(mt76x2_apply_gain_adj, 0x4c28f930, "_gpl");
SYMBOL_CRC(mt76x2_phy_set_txpower_regs, 0x051513d5, "_gpl");
SYMBOL_CRC(mt76x2_phy_set_txpower, 0x4c28f930, "_gpl");
SYMBOL_CRC(mt76x2_configure_tx_delay, 0x51f38a28, "_gpl");
SYMBOL_CRC(mt76x2_phy_tssi_compensate, 0x4c28f930, "_gpl");
SYMBOL_CRC(mt76x2_phy_update_channel_gain, 0x4c28f930, "_gpl");
SYMBOL_CRC(mt76x2_mcu_set_channel, 0x79eabf8d, "_gpl");
SYMBOL_CRC(mt76x2_mcu_load_cr, 0xdbaea94c, "_gpl");
SYMBOL_CRC(mt76x2_mcu_init_gain, 0x8dabce81, "_gpl");
SYMBOL_CRC(mt76x2_mcu_tssi_comp, 0xa9df779c, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x0340ad7a, "mt76_init_sar_power" },
	{ 0x3db4bd01, "mt76x02_phy_adjust_vga_gain" },
	{ 0x4c28f930, "mt76x02_phy_dfs_adjust_agc" },
	{ 0xbf9c33b7, "devm_kmalloc" },
	{ 0x0feb1e94, "usleep_range_state" },
	{ 0xc783d29b, "cfg80211_chandef_valid" },
	{ 0xd272d446, "__fentry__" },
	{ 0x4239cfcb, "mt76x02_ext_pa_enabled" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0x8197acd0, "mt76x02_get_efuse_data" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0x44b5b037, "mt76x02_get_rx_gain" },
	{ 0xaef31978, "mt76x02_add_rate_power_offset" },
	{ 0x5c7b0206, "mt76_eeprom_init" },
	{ 0x7444c00b, "_dev_err" },
	{ 0xf46d5bf3, "mutex_lock" },
	{ 0x4c28f930, "mt76x02_eeprom_parse_hw_cap" },
	{ 0x4da10267, "mt76_mcu_send_and_get_msg" },
	{ 0x946818cf, "mt76_eeprom_override" },
	{ 0xbbe4aa3d, "mt76x02_get_lna_gain" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0xf46d5bf3, "mutex_unlock" },
	{ 0xcbae5412, "__const_udelay" },
	{ 0x389781be, "mt76_get_sar_power" },
	{ 0x87ffdd84, "mt76x02_eeprom_copy" },
	{ 0x2fa3f7aa, "mt76x02_mcu_calibrate" },
	{ 0xc598a803, "mt76x02_phy_set_txpower" },
	{ 0x3014d425, "mt76x02_get_max_rate_power" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0x725351d9, "mt76x02_limit_rate_power" },
	{ 0xe0e5ffd0, "mt76_get_min_avg_rssi" },
	{ 0x70eca2ca, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x0340ad7a,
	0x3db4bd01,
	0x4c28f930,
	0xbf9c33b7,
	0x0feb1e94,
	0xc783d29b,
	0xd272d446,
	0x4239cfcb,
	0x5a844b26,
	0x8197acd0,
	0xd272d446,
	0x90a48d82,
	0x44b5b037,
	0xaef31978,
	0x5c7b0206,
	0x7444c00b,
	0xf46d5bf3,
	0x4c28f930,
	0x4da10267,
	0x946818cf,
	0xbbe4aa3d,
	0xd272d446,
	0xf46d5bf3,
	0xcbae5412,
	0x389781be,
	0x87ffdd84,
	0x2fa3f7aa,
	0xc598a803,
	0x3014d425,
	0xe4de56b4,
	0x725351d9,
	0xe0e5ffd0,
	0x70eca2ca,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"mt76_init_sar_power\0"
	"mt76x02_phy_adjust_vga_gain\0"
	"mt76x02_phy_dfs_adjust_agc\0"
	"devm_kmalloc\0"
	"usleep_range_state\0"
	"cfg80211_chandef_valid\0"
	"__fentry__\0"
	"mt76x02_ext_pa_enabled\0"
	"__x86_indirect_thunk_rax\0"
	"mt76x02_get_efuse_data\0"
	"__stack_chk_fail\0"
	"__ubsan_handle_out_of_bounds\0"
	"mt76x02_get_rx_gain\0"
	"mt76x02_add_rate_power_offset\0"
	"mt76_eeprom_init\0"
	"_dev_err\0"
	"mutex_lock\0"
	"mt76x02_eeprom_parse_hw_cap\0"
	"mt76_mcu_send_and_get_msg\0"
	"mt76_eeprom_override\0"
	"mt76x02_get_lna_gain\0"
	"__x86_return_thunk\0"
	"mutex_unlock\0"
	"__const_udelay\0"
	"mt76_get_sar_power\0"
	"mt76x02_eeprom_copy\0"
	"mt76x02_mcu_calibrate\0"
	"mt76x02_phy_set_txpower\0"
	"mt76x02_get_max_rate_power\0"
	"__ubsan_handle_load_invalid_value\0"
	"mt76x02_limit_rate_power\0"
	"mt76_get_min_avg_rssi\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mt76,mt76x02-lib,cfg80211");


MODULE_INFO(srcversion, "BAE434CF5054E79BE22E501");
