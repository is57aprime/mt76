#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x44114c51, "mt76x02u_tx_complete_skb" },
	{ 0x1abc7887, "release_firmware" },
	{ 0xbf9c33b7, "devm_kmalloc" },
	{ 0x6d887e8e, "mt76x02_set_ethtool_fwver" },
	{ 0xbfa333f2, "mt76x02_set_key" },
	{ 0x26923678, "mt76_release_buffered_frames" },
	{ 0xf6efb7a9, "request_firmware" },
	{ 0x8134d220, "usb_register_driver" },
	{ 0x9b40f8ea, "mt76_get_txpower" },
	{ 0x4c28f930, "mt76_write_mac_initvals" },
	{ 0xc7c311dc, "mt76x2_reset_wlan" },
	{ 0x79eabf8d, "mt76x2_mcu_set_channel" },
	{ 0xb30ab93b, "mt76x02_mcu_set_radio_state" },
	{ 0x38562629, "mt76_wake_tx_queue" },
	{ 0xc7594be5, "mt76_get_antenna" },
	{ 0x4c28f930, "mt76x2_apply_gain_adj" },
	{ 0x0feb1e94, "usleep_range_state" },
	{ 0x7375e7c1, "mt76x02_sta_ps" },
	{ 0x444a6fe8, "mt76x2_set_sar_specs" },
	{ 0xe14f1aa3, "mt76u_resume_rx" },
	{ 0xc031cef0, "mt76x02_sta_rate_tbl_update" },
	{ 0x26cf0a68, "__dynamic_dev_dbg" },
	{ 0xd272d446, "__fentry__" },
	{ 0x9afa6563, "mt76_alloc_device" },
	{ 0x5cc19aeb, "mt76x02_mac_shared_key_setup" },
	{ 0x4239cfcb, "mt76x02_ext_pa_enabled" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0xe519ea36, "mt76x2_mac_stop" },
	{ 0x1da2ef36, "usb_put_dev" },
	{ 0xf388472a, "usb_reset_device" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0xb0a500a7, "mt76x02_update_channel" },
	{ 0x51f38a28, "mt76x2_configure_tx_delay" },
	{ 0x62798cf5, "usb_get_dev" },
	{ 0x7444c00b, "_dev_info" },
	{ 0x2088b784, "mt76x02_configure_filter" },
	{ 0x92cef2e6, "mt76_free_device" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0x71e24504, "mt76x02_queue_rx_skb" },
	{ 0x49309e84, "mt76u_queues_deinit" },
	{ 0xab0e9602, "ieee80211_queue_delayed_work" },
	{ 0x7444c00b, "_dev_err" },
	{ 0x4c28f930, "mt76x02u_mcu_fw_reset" },
	{ 0x761da179, "mt76x02_mac_setaddr" },
	{ 0xd440cfdb, "mt76_register_device" },
	{ 0xedf842a7, "mt76_set_tim" },
	{ 0x9b421662, "mt76x02_sw_scan_complete" },
	{ 0x1177cac1, "mt76x02_phy_set_bw" },
	{ 0xf46d5bf3, "mutex_lock" },
	{ 0x45044077, "mt76x02_phy_set_band" },
	{ 0x183b27e0, "mt76_set_channel" },
	{ 0xa84c96b3, "mt76x02_init_device" },
	{ 0xe86dc867, "__mt76_poll_msec" },
	{ 0xca708229, "mt76x02_tx" },
	{ 0x9934ae99, "ieee80211_wake_queues" },
	{ 0x4c28f930, "mt76x02_eeprom_parse_hw_cap" },
	{ 0x01f20d7f, "mt76x02_sta_remove" },
	{ 0x4c28f930, "mt76x02_phy_set_rxpath" },
	{ 0x357b42e6, "mt76x02_edcca_init" },
	{ 0x056c43c7, "usb_deregister" },
	{ 0x22ded06e, "mt76x02_tx_status_data" },
	{ 0x876763b3, "mt76x02_sta_add" },
	{ 0xdbaea94c, "mt76x2_mcu_load_cr" },
	{ 0xc64119cc, "mt76x2_init_txpower" },
	{ 0xbe88cf54, "mt76x02u_mcu_fw_send_data" },
	{ 0xaf8471a9, "mt76u_init" },
	{ 0x27ec0604, "mt76_get_survey" },
	{ 0x4c28f930, "mt76x02_init_debugfs" },
	{ 0x7444c00b, "_dev_warn" },
	{ 0x4c10fec5, "mt76x02u_init_mcu" },
	{ 0x1138550a, "mt76x02u_tx_prepare_skb" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x8dabce81, "mt76x2_mcu_init_gain" },
	{ 0xffc2758f, "mt76_sta_state" },
	{ 0x4c28f930, "mt76x2_phy_tssi_compensate" },
	{ 0x9934ae99, "ieee80211_stop_queues" },
	{ 0xa84c96b3, "mt76x02u_mac_start" },
	{ 0x357b42e6, "mt76x02_mac_cc_reset" },
	{ 0xeba799da, "mt76x02_bss_info_changed" },
	{ 0x4c28f930, "mt76x02_init_agc_gain" },
	{ 0x4c28f930, "mt76x2_phy_update_channel_gain" },
	{ 0xf46d5bf3, "mutex_unlock" },
	{ 0x85acaba2, "cancel_delayed_work_sync" },
	{ 0x64642167, "mt76_txq_schedule_all" },
	{ 0xe14f1aa3, "mt76u_alloc_queues" },
	{ 0x02f9bbf0, "init_timer_key" },
	{ 0xcbae5412, "__const_udelay" },
	{ 0x49309e84, "mt76u_stop_tx" },
	{ 0x4c28f930, "mt76x02u_init_beacon_config" },
	{ 0x185931d9, "ieee80211_unregister_hw" },
	{ 0x0df21906, "mt76u_vendor_request" },
	{ 0x63e83916, "mt76x02_add_interface" },
	{ 0x5a844b26, "__x86_indirect_thunk_r9" },
	{ 0x71798f7e, "delayed_work_timer_fn" },
	{ 0x389781be, "mt76_get_sar_power" },
	{ 0x49309e84, "mt76u_stop_rx" },
	{ 0x430d3af8, "mt76x02_ampdu_action" },
	{ 0x2fa3f7aa, "mt76x02_mcu_calibrate" },
	{ 0x882af149, "mt76x02_conf_tx" },
	{ 0xbf3a09bb, "mt76x02_mcu_function_select" },
	{ 0xfc9f408f, "mt76_sw_scan" },
	{ 0x79e6084c, "mt76_sta_pre_rcu_remove" },
	{ 0x304a8dd9, "mt76x02_mac_wcid_setup" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0xe86dc867, "__mt76_poll" },
	{ 0x5b5def61, "mt76x2_read_rx_gain" },
	{ 0x051513d5, "mt76x2_phy_set_txpower_regs" },
	{ 0x4c28f930, "mt76x2_phy_set_txpower" },
	{ 0x4c28f930, "mt76x02_phy_set_txdac" },
	{ 0x5a844b26, "__x86_indirect_thunk_r8" },
	{ 0xa9967f5a, "mt76x02_rates" },
	{ 0x67628f51, "msleep" },
	{ 0x9b421662, "mt76x02_remove_interface" },
	{ 0x70eca2ca, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x44114c51,
	0x1abc7887,
	0xbf9c33b7,
	0x6d887e8e,
	0xbfa333f2,
	0x26923678,
	0xf6efb7a9,
	0x8134d220,
	0x9b40f8ea,
	0x4c28f930,
	0xc7c311dc,
	0x79eabf8d,
	0xb30ab93b,
	0x38562629,
	0xc7594be5,
	0x4c28f930,
	0x0feb1e94,
	0x7375e7c1,
	0x444a6fe8,
	0xe14f1aa3,
	0xc031cef0,
	0x26cf0a68,
	0xd272d446,
	0x9afa6563,
	0x5cc19aeb,
	0x4239cfcb,
	0x5a844b26,
	0xe519ea36,
	0x1da2ef36,
	0xf388472a,
	0xd272d446,
	0xb0a500a7,
	0x51f38a28,
	0x62798cf5,
	0x7444c00b,
	0x2088b784,
	0x92cef2e6,
	0x90a48d82,
	0x71e24504,
	0x49309e84,
	0xab0e9602,
	0x7444c00b,
	0x4c28f930,
	0x761da179,
	0xd440cfdb,
	0xedf842a7,
	0x9b421662,
	0x1177cac1,
	0xf46d5bf3,
	0x45044077,
	0x183b27e0,
	0xa84c96b3,
	0xe86dc867,
	0xca708229,
	0x9934ae99,
	0x4c28f930,
	0x01f20d7f,
	0x4c28f930,
	0x357b42e6,
	0x056c43c7,
	0x22ded06e,
	0x876763b3,
	0xdbaea94c,
	0xc64119cc,
	0xbe88cf54,
	0xaf8471a9,
	0x27ec0604,
	0x4c28f930,
	0x7444c00b,
	0x4c10fec5,
	0x1138550a,
	0xd272d446,
	0x8dabce81,
	0xffc2758f,
	0x4c28f930,
	0x9934ae99,
	0xa84c96b3,
	0x357b42e6,
	0xeba799da,
	0x4c28f930,
	0x4c28f930,
	0xf46d5bf3,
	0x85acaba2,
	0x64642167,
	0xe14f1aa3,
	0x02f9bbf0,
	0xcbae5412,
	0x49309e84,
	0x4c28f930,
	0x185931d9,
	0x0df21906,
	0x63e83916,
	0x5a844b26,
	0x71798f7e,
	0x389781be,
	0x49309e84,
	0x430d3af8,
	0x2fa3f7aa,
	0x882af149,
	0xbf3a09bb,
	0xfc9f408f,
	0x79e6084c,
	0x304a8dd9,
	0xe4de56b4,
	0xe86dc867,
	0x5b5def61,
	0x051513d5,
	0x4c28f930,
	0x4c28f930,
	0x5a844b26,
	0xa9967f5a,
	0x67628f51,
	0x9b421662,
	0x70eca2ca,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"mt76x02u_tx_complete_skb\0"
	"release_firmware\0"
	"devm_kmalloc\0"
	"mt76x02_set_ethtool_fwver\0"
	"mt76x02_set_key\0"
	"mt76_release_buffered_frames\0"
	"request_firmware\0"
	"usb_register_driver\0"
	"mt76_get_txpower\0"
	"mt76_write_mac_initvals\0"
	"mt76x2_reset_wlan\0"
	"mt76x2_mcu_set_channel\0"
	"mt76x02_mcu_set_radio_state\0"
	"mt76_wake_tx_queue\0"
	"mt76_get_antenna\0"
	"mt76x2_apply_gain_adj\0"
	"usleep_range_state\0"
	"mt76x02_sta_ps\0"
	"mt76x2_set_sar_specs\0"
	"mt76u_resume_rx\0"
	"mt76x02_sta_rate_tbl_update\0"
	"__dynamic_dev_dbg\0"
	"__fentry__\0"
	"mt76_alloc_device\0"
	"mt76x02_mac_shared_key_setup\0"
	"mt76x02_ext_pa_enabled\0"
	"__x86_indirect_thunk_rax\0"
	"mt76x2_mac_stop\0"
	"usb_put_dev\0"
	"usb_reset_device\0"
	"__stack_chk_fail\0"
	"mt76x02_update_channel\0"
	"mt76x2_configure_tx_delay\0"
	"usb_get_dev\0"
	"_dev_info\0"
	"mt76x02_configure_filter\0"
	"mt76_free_device\0"
	"__ubsan_handle_out_of_bounds\0"
	"mt76x02_queue_rx_skb\0"
	"mt76u_queues_deinit\0"
	"ieee80211_queue_delayed_work\0"
	"_dev_err\0"
	"mt76x02u_mcu_fw_reset\0"
	"mt76x02_mac_setaddr\0"
	"mt76_register_device\0"
	"mt76_set_tim\0"
	"mt76x02_sw_scan_complete\0"
	"mt76x02_phy_set_bw\0"
	"mutex_lock\0"
	"mt76x02_phy_set_band\0"
	"mt76_set_channel\0"
	"mt76x02_init_device\0"
	"__mt76_poll_msec\0"
	"mt76x02_tx\0"
	"ieee80211_wake_queues\0"
	"mt76x02_eeprom_parse_hw_cap\0"
	"mt76x02_sta_remove\0"
	"mt76x02_phy_set_rxpath\0"
	"mt76x02_edcca_init\0"
	"usb_deregister\0"
	"mt76x02_tx_status_data\0"
	"mt76x02_sta_add\0"
	"mt76x2_mcu_load_cr\0"
	"mt76x2_init_txpower\0"
	"mt76x02u_mcu_fw_send_data\0"
	"mt76u_init\0"
	"mt76_get_survey\0"
	"mt76x02_init_debugfs\0"
	"_dev_warn\0"
	"mt76x02u_init_mcu\0"
	"mt76x02u_tx_prepare_skb\0"
	"__x86_return_thunk\0"
	"mt76x2_mcu_init_gain\0"
	"mt76_sta_state\0"
	"mt76x2_phy_tssi_compensate\0"
	"ieee80211_stop_queues\0"
	"mt76x02u_mac_start\0"
	"mt76x02_mac_cc_reset\0"
	"mt76x02_bss_info_changed\0"
	"mt76x02_init_agc_gain\0"
	"mt76x2_phy_update_channel_gain\0"
	"mutex_unlock\0"
	"cancel_delayed_work_sync\0"
	"mt76_txq_schedule_all\0"
	"mt76u_alloc_queues\0"
	"init_timer_key\0"
	"__const_udelay\0"
	"mt76u_stop_tx\0"
	"mt76x02u_init_beacon_config\0"
	"ieee80211_unregister_hw\0"
	"mt76u_vendor_request\0"
	"mt76x02_add_interface\0"
	"__x86_indirect_thunk_r9\0"
	"delayed_work_timer_fn\0"
	"mt76_get_sar_power\0"
	"mt76u_stop_rx\0"
	"mt76x02_ampdu_action\0"
	"mt76x02_mcu_calibrate\0"
	"mt76x02_conf_tx\0"
	"mt76x02_mcu_function_select\0"
	"mt76_sw_scan\0"
	"mt76_sta_pre_rcu_remove\0"
	"mt76x02_mac_wcid_setup\0"
	"__ubsan_handle_load_invalid_value\0"
	"__mt76_poll\0"
	"mt76x2_read_rx_gain\0"
	"mt76x2_phy_set_txpower_regs\0"
	"mt76x2_phy_set_txpower\0"
	"mt76x02_phy_set_txdac\0"
	"__x86_indirect_thunk_r8\0"
	"mt76x02_rates\0"
	"msleep\0"
	"mt76x02_remove_interface\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mt76x02-usb,mt76x02-lib,mt76,mt76x2-common,mt76-usb,mac80211");

MODULE_ALIAS("usb:v0B05p1833d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17EBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p180Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7612d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7632d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C4Ep0103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9053d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep02E6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep02FEd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9E7C48B38F65AF84A6835A6");
