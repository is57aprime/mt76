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
	{ 0xba044245, "mt76x02_dma_init" },
	{ 0xf9cd995f, "pci_save_state" },
	{ 0x1abc7887, "release_firmware" },
	{ 0x6286616d, "devm_request_threaded_irq" },
	{ 0xef3bb0d8, "pci_choose_state" },
	{ 0x6d887e8e, "mt76x02_set_ethtool_fwver" },
	{ 0x7d06ce6d, "mt76x02_tx_set_txpwr_auto" },
	{ 0xbfa333f2, "mt76x02_set_key" },
	{ 0x9f8671cb, "mt76x02_mcu_parse_response" },
	{ 0x26923678, "mt76_release_buffered_frames" },
	{ 0xf6efb7a9, "request_firmware" },
	{ 0x9b40f8ea, "mt76_get_txpower" },
	{ 0xcc6bf4bf, "__pci_register_driver" },
	{ 0x4c28f930, "mt76_write_mac_initvals" },
	{ 0xc7c311dc, "mt76x2_reset_wlan" },
	{ 0x79eabf8d, "mt76x2_mcu_set_channel" },
	{ 0x357b42e6, "mt76x02_dma_disable" },
	{ 0xb30ab93b, "mt76x02_mcu_set_radio_state" },
	{ 0x38562629, "mt76_wake_tx_queue" },
	{ 0x357b42e6, "mt76x02e_init_beacon_config" },
	{ 0xc7594be5, "mt76_get_antenna" },
	{ 0x5d3be6f8, "pcpu_hot" },
	{ 0x6efdfde1, "mt76_set_stream_caps" },
	{ 0x4c28f930, "mt76x2_apply_gain_adj" },
	{ 0x0feb1e94, "usleep_range_state" },
	{ 0xb3671f81, "pci_set_power_state" },
	{ 0x7375e7c1, "mt76x02_sta_ps" },
	{ 0x444a6fe8, "mt76x2_set_sar_specs" },
	{ 0xc031cef0, "mt76x02_sta_rate_tbl_update" },
	{ 0xd8248fc3, "kthread_park" },
	{ 0x4c10fec5, "mt76_dma_cleanup" },
	{ 0x089fd8b8, "pci_unregister_driver" },
	{ 0xd272d446, "__fentry__" },
	{ 0x624a6757, "mt76x02_reconfig_complete" },
	{ 0x9afa6563, "mt76_alloc_device" },
	{ 0xbe0bf0cb, "wake_up_process" },
	{ 0x5cc19aeb, "mt76x02_mac_shared_key_setup" },
	{ 0x4239cfcb, "mt76x02_ext_pa_enabled" },
	{ 0x214c7079, "mt76x02_set_coverage_class" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0xe519ea36, "mt76x2_mac_stop" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x4c28f930, "mt76x02_set_tx_ackto" },
	{ 0xb0a500a7, "mt76x02_update_channel" },
	{ 0x0a711811, "__napi_schedule" },
	{ 0x51f38a28, "mt76x2_configure_tx_delay" },
	{ 0xd3b6f66a, "mt76_pci_disable_aspm" },
	{ 0x7444c00b, "_dev_info" },
	{ 0x2088b784, "mt76x02_configure_filter" },
	{ 0x92cef2e6, "mt76_free_device" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0x71e24504, "mt76x02_queue_rx_skb" },
	{ 0xeafded1c, "kthread_unpark" },
	{ 0x9c0551c6, "tasklet_kill" },
	{ 0xe77e5e6c, "pcim_iomap_regions" },
	{ 0xab0e9602, "ieee80211_queue_delayed_work" },
	{ 0x7444c00b, "_dev_err" },
	{ 0x7b542cbe, "mt76x02_rx_poll_complete" },
	{ 0x761da179, "mt76x02_mac_setaddr" },
	{ 0xd440cfdb, "mt76_register_device" },
	{ 0xedf842a7, "mt76_set_tim" },
	{ 0x9b421662, "mt76x02_sw_scan_complete" },
	{ 0x1177cac1, "mt76x02_phy_set_bw" },
	{ 0x9a424296, "mt76x02_irq_handler" },
	{ 0xf46d5bf3, "mutex_lock" },
	{ 0x45044077, "mt76x02_phy_set_band" },
	{ 0x183b27e0, "mt76_set_channel" },
	{ 0xa84c96b3, "mt76x02_init_device" },
	{ 0x0a711811, "napi_enable" },
	{ 0xe86dc867, "__mt76_poll_msec" },
	{ 0xca708229, "mt76x02_tx" },
	{ 0xcfaca492, "mt76_mmio_init" },
	{ 0x9934ae99, "ieee80211_wake_queues" },
	{ 0x01f20d7f, "mt76x02_sta_remove" },
	{ 0x357b42e6, "mt76x02_edcca_init" },
	{ 0x1eca1a1b, "mt76x2_eeprom_init" },
	{ 0xfcc2e8f3, "__local_bh_enable_ip" },
	{ 0x876763b3, "mt76x02_sta_add" },
	{ 0x92cef2e6, "mt76_unregister_device" },
	{ 0xdbaea94c, "mt76x2_mcu_load_cr" },
	{ 0x9e039c4a, "pci_restore_state" },
	{ 0xc64119cc, "mt76x2_init_txpower" },
	{ 0x4c28f930, "mt76x02_init_debugfs" },
	{ 0x27ec0604, "mt76_get_survey" },
	{ 0x9e039c4a, "pci_set_master" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x8dabce81, "mt76x2_mcu_init_gain" },
	{ 0xfb825c75, "mt76x02_set_rts_threshold" },
	{ 0x818da1dc, "mt76x02_tx_complete_skb" },
	{ 0xffc2758f, "mt76_sta_state" },
	{ 0x82a24f1e, "mt76x02_mcu_msg_send" },
	{ 0x4c28f930, "mt76x2_phy_tssi_compensate" },
	{ 0x9934ae99, "ieee80211_stop_queues" },
	{ 0x357b42e6, "mt76x02_mac_cc_reset" },
	{ 0xeba799da, "mt76x02_bss_info_changed" },
	{ 0x4c28f930, "mt76x02_init_agc_gain" },
	{ 0x4c28f930, "mt76x2_phy_update_channel_gain" },
	{ 0xfe25420d, "pci_enable_wake" },
	{ 0xf46d5bf3, "mutex_unlock" },
	{ 0x85acaba2, "cancel_delayed_work_sync" },
	{ 0x64642167, "mt76_txq_schedule_all" },
	{ 0x02f9bbf0, "init_timer_key" },
	{ 0xcbae5412, "__const_udelay" },
	{ 0x63e83916, "mt76x02_add_interface" },
	{ 0x4c28f930, "mt76x02_dfs_init_params" },
	{ 0x5a844b26, "__x86_indirect_thunk_r9" },
	{ 0x71798f7e, "delayed_work_timer_fn" },
	{ 0x4c28f930, "mt76x02_config_mac_addr_list" },
	{ 0x389781be, "mt76_get_sar_power" },
	{ 0x8a30e615, "mt76x02_tx_prepare_skb" },
	{ 0xa84c96b3, "mt76x02_mcu_cleanup" },
	{ 0x430d3af8, "mt76x02_ampdu_action" },
	{ 0x2fa3f7aa, "mt76x02_mcu_calibrate" },
	{ 0x882af149, "mt76x02_conf_tx" },
	{ 0xbf3a09bb, "mt76x02_mcu_function_select" },
	{ 0xbec10a93, "dma_set_mask" },
	{ 0xfc9f408f, "mt76_sw_scan" },
	{ 0x79e6084c, "mt76_sta_pre_rcu_remove" },
	{ 0x60b846fe, "pcim_iomap_table" },
	{ 0xbb3b54e5, "mt76x2_get_temp_comp" },
	{ 0x304a8dd9, "mt76x02_mac_wcid_setup" },
	{ 0x5adfd8b1, "napi_schedule_prep" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0x0a711811, "napi_disable" },
	{ 0xe86dc867, "__mt76_poll" },
	{ 0x5b5def61, "mt76x2_read_rx_gain" },
	{ 0x9c0551c6, "tasklet_unlock_wait" },
	{ 0x71c4f59f, "pcim_enable_device" },
	{ 0x051513d5, "mt76x2_phy_set_txpower_regs" },
	{ 0x4c28f930, "mt76x2_phy_set_txpower" },
	{ 0x5a844b26, "__x86_indirect_thunk_r8" },
	{ 0xa9967f5a, "mt76x02_rates" },
	{ 0x357b42e6, "mt76x02_mac_start" },
	{ 0x9b421662, "mt76x02_remove_interface" },
	{ 0x70eca2ca, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xba044245,
	0xf9cd995f,
	0x1abc7887,
	0x6286616d,
	0xef3bb0d8,
	0x6d887e8e,
	0x7d06ce6d,
	0xbfa333f2,
	0x9f8671cb,
	0x26923678,
	0xf6efb7a9,
	0x9b40f8ea,
	0xcc6bf4bf,
	0x4c28f930,
	0xc7c311dc,
	0x79eabf8d,
	0x357b42e6,
	0xb30ab93b,
	0x38562629,
	0x357b42e6,
	0xc7594be5,
	0x5d3be6f8,
	0x6efdfde1,
	0x4c28f930,
	0x0feb1e94,
	0xb3671f81,
	0x7375e7c1,
	0x444a6fe8,
	0xc031cef0,
	0xd8248fc3,
	0x4c10fec5,
	0x089fd8b8,
	0xd272d446,
	0x624a6757,
	0x9afa6563,
	0xbe0bf0cb,
	0x5cc19aeb,
	0x4239cfcb,
	0x214c7079,
	0x5a844b26,
	0xe519ea36,
	0xd272d446,
	0x4c28f930,
	0xb0a500a7,
	0x0a711811,
	0x51f38a28,
	0xd3b6f66a,
	0x7444c00b,
	0x2088b784,
	0x92cef2e6,
	0x90a48d82,
	0x71e24504,
	0xeafded1c,
	0x9c0551c6,
	0xe77e5e6c,
	0xab0e9602,
	0x7444c00b,
	0x7b542cbe,
	0x761da179,
	0xd440cfdb,
	0xedf842a7,
	0x9b421662,
	0x1177cac1,
	0x9a424296,
	0xf46d5bf3,
	0x45044077,
	0x183b27e0,
	0xa84c96b3,
	0x0a711811,
	0xe86dc867,
	0xca708229,
	0xcfaca492,
	0x9934ae99,
	0x01f20d7f,
	0x357b42e6,
	0x1eca1a1b,
	0xfcc2e8f3,
	0x876763b3,
	0x92cef2e6,
	0xdbaea94c,
	0x9e039c4a,
	0xc64119cc,
	0x4c28f930,
	0x27ec0604,
	0x9e039c4a,
	0xd272d446,
	0x8dabce81,
	0xfb825c75,
	0x818da1dc,
	0xffc2758f,
	0x82a24f1e,
	0x4c28f930,
	0x9934ae99,
	0x357b42e6,
	0xeba799da,
	0x4c28f930,
	0x4c28f930,
	0xfe25420d,
	0xf46d5bf3,
	0x85acaba2,
	0x64642167,
	0x02f9bbf0,
	0xcbae5412,
	0x63e83916,
	0x4c28f930,
	0x5a844b26,
	0x71798f7e,
	0x4c28f930,
	0x389781be,
	0x8a30e615,
	0xa84c96b3,
	0x430d3af8,
	0x2fa3f7aa,
	0x882af149,
	0xbf3a09bb,
	0xbec10a93,
	0xfc9f408f,
	0x79e6084c,
	0x60b846fe,
	0xbb3b54e5,
	0x304a8dd9,
	0x5adfd8b1,
	0xe4de56b4,
	0x0a711811,
	0xe86dc867,
	0x5b5def61,
	0x9c0551c6,
	0x71c4f59f,
	0x051513d5,
	0x4c28f930,
	0x5a844b26,
	0xa9967f5a,
	0x357b42e6,
	0x9b421662,
	0x70eca2ca,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"mt76x02_dma_init\0"
	"pci_save_state\0"
	"release_firmware\0"
	"devm_request_threaded_irq\0"
	"pci_choose_state\0"
	"mt76x02_set_ethtool_fwver\0"
	"mt76x02_tx_set_txpwr_auto\0"
	"mt76x02_set_key\0"
	"mt76x02_mcu_parse_response\0"
	"mt76_release_buffered_frames\0"
	"request_firmware\0"
	"mt76_get_txpower\0"
	"__pci_register_driver\0"
	"mt76_write_mac_initvals\0"
	"mt76x2_reset_wlan\0"
	"mt76x2_mcu_set_channel\0"
	"mt76x02_dma_disable\0"
	"mt76x02_mcu_set_radio_state\0"
	"mt76_wake_tx_queue\0"
	"mt76x02e_init_beacon_config\0"
	"mt76_get_antenna\0"
	"pcpu_hot\0"
	"mt76_set_stream_caps\0"
	"mt76x2_apply_gain_adj\0"
	"usleep_range_state\0"
	"pci_set_power_state\0"
	"mt76x02_sta_ps\0"
	"mt76x2_set_sar_specs\0"
	"mt76x02_sta_rate_tbl_update\0"
	"kthread_park\0"
	"mt76_dma_cleanup\0"
	"pci_unregister_driver\0"
	"__fentry__\0"
	"mt76x02_reconfig_complete\0"
	"mt76_alloc_device\0"
	"wake_up_process\0"
	"mt76x02_mac_shared_key_setup\0"
	"mt76x02_ext_pa_enabled\0"
	"mt76x02_set_coverage_class\0"
	"__x86_indirect_thunk_rax\0"
	"mt76x2_mac_stop\0"
	"__stack_chk_fail\0"
	"mt76x02_set_tx_ackto\0"
	"mt76x02_update_channel\0"
	"__napi_schedule\0"
	"mt76x2_configure_tx_delay\0"
	"mt76_pci_disable_aspm\0"
	"_dev_info\0"
	"mt76x02_configure_filter\0"
	"mt76_free_device\0"
	"__ubsan_handle_out_of_bounds\0"
	"mt76x02_queue_rx_skb\0"
	"kthread_unpark\0"
	"tasklet_kill\0"
	"pcim_iomap_regions\0"
	"ieee80211_queue_delayed_work\0"
	"_dev_err\0"
	"mt76x02_rx_poll_complete\0"
	"mt76x02_mac_setaddr\0"
	"mt76_register_device\0"
	"mt76_set_tim\0"
	"mt76x02_sw_scan_complete\0"
	"mt76x02_phy_set_bw\0"
	"mt76x02_irq_handler\0"
	"mutex_lock\0"
	"mt76x02_phy_set_band\0"
	"mt76_set_channel\0"
	"mt76x02_init_device\0"
	"napi_enable\0"
	"__mt76_poll_msec\0"
	"mt76x02_tx\0"
	"mt76_mmio_init\0"
	"ieee80211_wake_queues\0"
	"mt76x02_sta_remove\0"
	"mt76x02_edcca_init\0"
	"mt76x2_eeprom_init\0"
	"__local_bh_enable_ip\0"
	"mt76x02_sta_add\0"
	"mt76_unregister_device\0"
	"mt76x2_mcu_load_cr\0"
	"pci_restore_state\0"
	"mt76x2_init_txpower\0"
	"mt76x02_init_debugfs\0"
	"mt76_get_survey\0"
	"pci_set_master\0"
	"__x86_return_thunk\0"
	"mt76x2_mcu_init_gain\0"
	"mt76x02_set_rts_threshold\0"
	"mt76x02_tx_complete_skb\0"
	"mt76_sta_state\0"
	"mt76x02_mcu_msg_send\0"
	"mt76x2_phy_tssi_compensate\0"
	"ieee80211_stop_queues\0"
	"mt76x02_mac_cc_reset\0"
	"mt76x02_bss_info_changed\0"
	"mt76x02_init_agc_gain\0"
	"mt76x2_phy_update_channel_gain\0"
	"pci_enable_wake\0"
	"mutex_unlock\0"
	"cancel_delayed_work_sync\0"
	"mt76_txq_schedule_all\0"
	"init_timer_key\0"
	"__const_udelay\0"
	"mt76x02_add_interface\0"
	"mt76x02_dfs_init_params\0"
	"__x86_indirect_thunk_r9\0"
	"delayed_work_timer_fn\0"
	"mt76x02_config_mac_addr_list\0"
	"mt76_get_sar_power\0"
	"mt76x02_tx_prepare_skb\0"
	"mt76x02_mcu_cleanup\0"
	"mt76x02_ampdu_action\0"
	"mt76x02_mcu_calibrate\0"
	"mt76x02_conf_tx\0"
	"mt76x02_mcu_function_select\0"
	"dma_set_mask\0"
	"mt76_sw_scan\0"
	"mt76_sta_pre_rcu_remove\0"
	"pcim_iomap_table\0"
	"mt76x2_get_temp_comp\0"
	"mt76x02_mac_wcid_setup\0"
	"napi_schedule_prep\0"
	"__ubsan_handle_load_invalid_value\0"
	"napi_disable\0"
	"__mt76_poll\0"
	"mt76x2_read_rx_gain\0"
	"tasklet_unlock_wait\0"
	"pcim_enable_device\0"
	"mt76x2_phy_set_txpower_regs\0"
	"mt76x2_phy_set_txpower\0"
	"__x86_indirect_thunk_r8\0"
	"mt76x02_rates\0"
	"mt76x02_mac_start\0"
	"mt76x02_remove_interface\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mt76x02-lib,mt76,mt76x2-common,mac80211");

MODULE_ALIAS("pci:v000014C3d00007662sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007612sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007602sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "FEE305A6896DA27A6341C07");
