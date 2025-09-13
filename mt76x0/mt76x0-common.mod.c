#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(mt76x0_chip_onoff, "_gpl", "");
KSYMTAB_FUNC(mt76x0_mac_stop, "_gpl", "");
KSYMTAB_FUNC(mt76x0_init_hardware, "_gpl", "");
KSYMTAB_FUNC(mt76x0_register_device, "_gpl", "");
KSYMTAB_FUNC(mt76x0_set_sar_specs, "_gpl", "");
KSYMTAB_FUNC(mt76x0_config, "_gpl", "");
KSYMTAB_FUNC(mt76x0_phy_calibrate, "_gpl", "");

SYMBOL_CRC(mt76x0_chip_onoff, 0x74dbf07d, "_gpl");
SYMBOL_CRC(mt76x0_mac_stop, 0x4c28f930, "_gpl");
SYMBOL_CRC(mt76x0_init_hardware, 0xa84c96b3, "_gpl");
SYMBOL_CRC(mt76x0_register_device, 0xa84c96b3, "_gpl");
SYMBOL_CRC(mt76x0_set_sar_specs, 0x444a6fe8, "_gpl");
SYMBOL_CRC(mt76x0_config, 0x595a67b6, "_gpl");
SYMBOL_CRC(mt76x0_phy_calibrate, 0x7c9cd166, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x0340ad7a, "mt76_init_sar_power" },
	{ 0x3db4bd01, "mt76x02_phy_adjust_vga_gain" },
	{ 0x4c28f930, "mt76x02_phy_dfs_adjust_agc" },
	{ 0x0feb1e94, "usleep_range_state" },
	{ 0xc783d29b, "cfg80211_chandef_valid" },
	{ 0x26cf0a68, "__dynamic_dev_dbg" },
	{ 0xd272d446, "__fentry__" },
	{ 0x5cc19aeb, "mt76x02_mac_shared_key_setup" },
	{ 0x4239cfcb, "mt76x02_ext_pa_enabled" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0x8197acd0, "mt76x02_get_efuse_data" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x7444c00b, "_dev_info" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0x44b5b037, "mt76x02_get_rx_gain" },
	{ 0xaef31978, "mt76x02_add_rate_power_offset" },
	{ 0xab0e9602, "ieee80211_queue_delayed_work" },
	{ 0x5c7b0206, "mt76_eeprom_init" },
	{ 0x7444c00b, "_dev_err" },
	{ 0x761da179, "mt76x02_mac_setaddr" },
	{ 0xd440cfdb, "mt76_register_device" },
	{ 0x5a844b26, "__x86_indirect_thunk_r14" },
	{ 0x1177cac1, "mt76x02_phy_set_bw" },
	{ 0xf46d5bf3, "mutex_lock" },
	{ 0x45044077, "mt76x02_phy_set_band" },
	{ 0x183b27e0, "mt76_set_channel" },
	{ 0xa84c96b3, "mt76x02_init_device" },
	{ 0xe86dc867, "__mt76_poll_msec" },
	{ 0x9934ae99, "ieee80211_wake_queues" },
	{ 0x4c28f930, "mt76x02_eeprom_parse_hw_cap" },
	{ 0x4c28f930, "mt76x02_phy_set_rxpath" },
	{ 0x357b42e6, "mt76x02_edcca_init" },
	{ 0x946818cf, "mt76_eeprom_override" },
	{ 0xbbe4aa3d, "mt76x02_get_lna_gain" },
	{ 0x4c28f930, "mt76x02_init_debugfs" },
	{ 0x7444c00b, "_dev_warn" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x9934ae99, "ieee80211_stop_queues" },
	{ 0x357b42e6, "mt76x02_mac_cc_reset" },
	{ 0x4c28f930, "mt76x02_init_agc_gain" },
	{ 0xf46d5bf3, "mutex_unlock" },
	{ 0x85acaba2, "cancel_delayed_work_sync" },
	{ 0x64642167, "mt76_txq_schedule_all" },
	{ 0x02f9bbf0, "init_timer_key" },
	{ 0xcbae5412, "__const_udelay" },
	{ 0x5a844b26, "__x86_indirect_thunk_rcx" },
	{ 0x4c28f930, "mt76x02_dfs_init_params" },
	{ 0x71798f7e, "delayed_work_timer_fn" },
	{ 0x4c28f930, "mt76x02_config_mac_addr_list" },
	{ 0x389781be, "mt76_get_sar_power" },
	{ 0x87ffdd84, "mt76x02_eeprom_copy" },
	{ 0x2fa3f7aa, "mt76x02_mcu_calibrate" },
	{ 0xbf3a09bb, "mt76x02_mcu_function_select" },
	{ 0xc598a803, "mt76x02_phy_set_txpower" },
	{ 0x3014d425, "mt76x02_get_max_rate_power" },
	{ 0x304a8dd9, "mt76x02_mac_wcid_setup" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0xe86dc867, "__mt76_poll" },
	{ 0x9c0551c6, "tasklet_unlock_wait" },
	{ 0x4c28f930, "mt76x02_phy_set_txdac" },
	{ 0x725351d9, "mt76x02_limit_rate_power" },
	{ 0xe0e5ffd0, "mt76_get_min_avg_rssi" },
	{ 0xa9967f5a, "mt76x02_rates" },
	{ 0x67628f51, "msleep" },
	{ 0x70eca2ca, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x0340ad7a,
	0x3db4bd01,
	0x4c28f930,
	0x0feb1e94,
	0xc783d29b,
	0x26cf0a68,
	0xd272d446,
	0x5cc19aeb,
	0x4239cfcb,
	0x5a844b26,
	0x8197acd0,
	0xd272d446,
	0x7444c00b,
	0x90a48d82,
	0x44b5b037,
	0xaef31978,
	0xab0e9602,
	0x5c7b0206,
	0x7444c00b,
	0x761da179,
	0xd440cfdb,
	0x5a844b26,
	0x1177cac1,
	0xf46d5bf3,
	0x45044077,
	0x183b27e0,
	0xa84c96b3,
	0xe86dc867,
	0x9934ae99,
	0x4c28f930,
	0x4c28f930,
	0x357b42e6,
	0x946818cf,
	0xbbe4aa3d,
	0x4c28f930,
	0x7444c00b,
	0xd272d446,
	0x9934ae99,
	0x357b42e6,
	0x4c28f930,
	0xf46d5bf3,
	0x85acaba2,
	0x64642167,
	0x02f9bbf0,
	0xcbae5412,
	0x5a844b26,
	0x4c28f930,
	0x71798f7e,
	0x4c28f930,
	0x389781be,
	0x87ffdd84,
	0x2fa3f7aa,
	0xbf3a09bb,
	0xc598a803,
	0x3014d425,
	0x304a8dd9,
	0xe4de56b4,
	0xe86dc867,
	0x9c0551c6,
	0x4c28f930,
	0x725351d9,
	0xe0e5ffd0,
	0xa9967f5a,
	0x67628f51,
	0x70eca2ca,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"mt76_init_sar_power\0"
	"mt76x02_phy_adjust_vga_gain\0"
	"mt76x02_phy_dfs_adjust_agc\0"
	"usleep_range_state\0"
	"cfg80211_chandef_valid\0"
	"__dynamic_dev_dbg\0"
	"__fentry__\0"
	"mt76x02_mac_shared_key_setup\0"
	"mt76x02_ext_pa_enabled\0"
	"__x86_indirect_thunk_rax\0"
	"mt76x02_get_efuse_data\0"
	"__stack_chk_fail\0"
	"_dev_info\0"
	"__ubsan_handle_out_of_bounds\0"
	"mt76x02_get_rx_gain\0"
	"mt76x02_add_rate_power_offset\0"
	"ieee80211_queue_delayed_work\0"
	"mt76_eeprom_init\0"
	"_dev_err\0"
	"mt76x02_mac_setaddr\0"
	"mt76_register_device\0"
	"__x86_indirect_thunk_r14\0"
	"mt76x02_phy_set_bw\0"
	"mutex_lock\0"
	"mt76x02_phy_set_band\0"
	"mt76_set_channel\0"
	"mt76x02_init_device\0"
	"__mt76_poll_msec\0"
	"ieee80211_wake_queues\0"
	"mt76x02_eeprom_parse_hw_cap\0"
	"mt76x02_phy_set_rxpath\0"
	"mt76x02_edcca_init\0"
	"mt76_eeprom_override\0"
	"mt76x02_get_lna_gain\0"
	"mt76x02_init_debugfs\0"
	"_dev_warn\0"
	"__x86_return_thunk\0"
	"ieee80211_stop_queues\0"
	"mt76x02_mac_cc_reset\0"
	"mt76x02_init_agc_gain\0"
	"mutex_unlock\0"
	"cancel_delayed_work_sync\0"
	"mt76_txq_schedule_all\0"
	"init_timer_key\0"
	"__const_udelay\0"
	"__x86_indirect_thunk_rcx\0"
	"mt76x02_dfs_init_params\0"
	"delayed_work_timer_fn\0"
	"mt76x02_config_mac_addr_list\0"
	"mt76_get_sar_power\0"
	"mt76x02_eeprom_copy\0"
	"mt76x02_mcu_calibrate\0"
	"mt76x02_mcu_function_select\0"
	"mt76x02_phy_set_txpower\0"
	"mt76x02_get_max_rate_power\0"
	"mt76x02_mac_wcid_setup\0"
	"__ubsan_handle_load_invalid_value\0"
	"__mt76_poll\0"
	"tasklet_unlock_wait\0"
	"mt76x02_phy_set_txdac\0"
	"mt76x02_limit_rate_power\0"
	"mt76_get_min_avg_rssi\0"
	"mt76x02_rates\0"
	"msleep\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mt76,mt76x02-lib,cfg80211,mac80211");


MODULE_INFO(srcversion, "9856F21A96920887413306B");
