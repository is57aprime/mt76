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
	{ 0x444a6fe8, "mt76x0_set_sar_specs" },
	{ 0xef3bb0d8, "pci_choose_state" },
	{ 0x6d887e8e, "mt76x02_set_ethtool_fwver" },
	{ 0xbfa333f2, "mt76x02_set_key" },
	{ 0x9f8671cb, "mt76x02_mcu_parse_response" },
	{ 0x26923678, "mt76_release_buffered_frames" },
	{ 0xf6efb7a9, "request_firmware" },
	{ 0x9b40f8ea, "mt76_get_txpower" },
	{ 0x5a844b26, "__x86_indirect_thunk_r15" },
	{ 0xcc6bf4bf, "__pci_register_driver" },
	{ 0x357b42e6, "mt76x02_dma_disable" },
	{ 0x38562629, "mt76_wake_tx_queue" },
	{ 0x357b42e6, "mt76x02e_init_beacon_config" },
	{ 0xc7594be5, "mt76_get_antenna" },
	{ 0x5d3be6f8, "pcpu_hot" },
	{ 0x0feb1e94, "usleep_range_state" },
	{ 0xb3671f81, "pci_set_power_state" },
	{ 0x7375e7c1, "mt76x02_sta_ps" },
	{ 0xc031cef0, "mt76x02_sta_rate_tbl_update" },
	{ 0xd8248fc3, "kthread_park" },
	{ 0x26cf0a68, "__dynamic_dev_dbg" },
	{ 0x4c10fec5, "mt76_dma_cleanup" },
	{ 0x089fd8b8, "pci_unregister_driver" },
	{ 0xd272d446, "__fentry__" },
	{ 0x624a6757, "mt76x02_reconfig_complete" },
	{ 0x9afa6563, "mt76_alloc_device" },
	{ 0xbe0bf0cb, "wake_up_process" },
	{ 0x214c7079, "mt76x02_set_coverage_class" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0xb0a500a7, "mt76x02_update_channel" },
	{ 0x0a711811, "__napi_schedule" },
	{ 0xd3b6f66a, "mt76_pci_disable_aspm" },
	{ 0x7444c00b, "_dev_info" },
	{ 0x2088b784, "mt76x02_configure_filter" },
	{ 0x92cef2e6, "mt76_free_device" },
	{ 0x74dbf07d, "mt76x0_chip_onoff" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0x71e24504, "mt76x02_queue_rx_skb" },
	{ 0xeafded1c, "kthread_unpark" },
	{ 0xe77e5e6c, "pcim_iomap_regions" },
	{ 0xab0e9602, "ieee80211_queue_delayed_work" },
	{ 0x595a67b6, "mt76x0_config" },
	{ 0xa84c96b3, "mt76x0_register_device" },
	{ 0x7444c00b, "_dev_err" },
	{ 0x7b542cbe, "mt76x02_rx_poll_complete" },
	{ 0x7c9cd166, "mt76x0_phy_calibrate" },
	{ 0xedf842a7, "mt76_set_tim" },
	{ 0x9b421662, "mt76x02_sw_scan_complete" },
	{ 0x9a424296, "mt76x02_irq_handler" },
	{ 0x0a711811, "napi_enable" },
	{ 0xe86dc867, "__mt76_poll_msec" },
	{ 0xca708229, "mt76x02_tx" },
	{ 0xcfaca492, "mt76_mmio_init" },
	{ 0x01f20d7f, "mt76x02_sta_remove" },
	{ 0xfcc2e8f3, "__local_bh_enable_ip" },
	{ 0xc1e6c71e, "__mutex_init" },
	{ 0x876763b3, "mt76x02_sta_add" },
	{ 0x92cef2e6, "mt76_unregister_device" },
	{ 0x9e039c4a, "pci_restore_state" },
	{ 0x4c28f930, "mt76x0_mac_stop" },
	{ 0x27ec0604, "mt76_get_survey" },
	{ 0x7444c00b, "_dev_warn" },
	{ 0x9e039c4a, "pci_set_master" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0xfb825c75, "mt76x02_set_rts_threshold" },
	{ 0x818da1dc, "mt76x02_tx_complete_skb" },
	{ 0xffc2758f, "mt76_sta_state" },
	{ 0x82a24f1e, "mt76x02_mcu_msg_send" },
	{ 0xa84c96b3, "mt76x0_init_hardware" },
	{ 0xeba799da, "mt76x02_bss_info_changed" },
	{ 0xfe25420d, "pci_enable_wake" },
	{ 0x85acaba2, "cancel_delayed_work_sync" },
	{ 0x63e83916, "mt76x02_add_interface" },
	{ 0x5a844b26, "__x86_indirect_thunk_r9" },
	{ 0x8a30e615, "mt76x02_tx_prepare_skb" },
	{ 0xa84c96b3, "mt76x02_mcu_cleanup" },
	{ 0x430d3af8, "mt76x02_ampdu_action" },
	{ 0x882af149, "mt76x02_conf_tx" },
	{ 0xbec10a93, "dma_set_mask" },
	{ 0xfc9f408f, "mt76_sw_scan" },
	{ 0x79e6084c, "mt76_sta_pre_rcu_remove" },
	{ 0x60b846fe, "pcim_iomap_table" },
	{ 0x5adfd8b1, "napi_schedule_prep" },
	{ 0x0a711811, "napi_disable" },
	{ 0xe86dc867, "__mt76_poll" },
	{ 0x71c4f59f, "pcim_enable_device" },
	{ 0x9c0551c6, "tasklet_unlock_wait" },
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
	0x444a6fe8,
	0xef3bb0d8,
	0x6d887e8e,
	0xbfa333f2,
	0x9f8671cb,
	0x26923678,
	0xf6efb7a9,
	0x9b40f8ea,
	0x5a844b26,
	0xcc6bf4bf,
	0x357b42e6,
	0x38562629,
	0x357b42e6,
	0xc7594be5,
	0x5d3be6f8,
	0x0feb1e94,
	0xb3671f81,
	0x7375e7c1,
	0xc031cef0,
	0xd8248fc3,
	0x26cf0a68,
	0x4c10fec5,
	0x089fd8b8,
	0xd272d446,
	0x624a6757,
	0x9afa6563,
	0xbe0bf0cb,
	0x214c7079,
	0x5a844b26,
	0xd272d446,
	0xb0a500a7,
	0x0a711811,
	0xd3b6f66a,
	0x7444c00b,
	0x2088b784,
	0x92cef2e6,
	0x74dbf07d,
	0x90a48d82,
	0x71e24504,
	0xeafded1c,
	0xe77e5e6c,
	0xab0e9602,
	0x595a67b6,
	0xa84c96b3,
	0x7444c00b,
	0x7b542cbe,
	0x7c9cd166,
	0xedf842a7,
	0x9b421662,
	0x9a424296,
	0x0a711811,
	0xe86dc867,
	0xca708229,
	0xcfaca492,
	0x01f20d7f,
	0xfcc2e8f3,
	0xc1e6c71e,
	0x876763b3,
	0x92cef2e6,
	0x9e039c4a,
	0x4c28f930,
	0x27ec0604,
	0x7444c00b,
	0x9e039c4a,
	0xd272d446,
	0xfb825c75,
	0x818da1dc,
	0xffc2758f,
	0x82a24f1e,
	0xa84c96b3,
	0xeba799da,
	0xfe25420d,
	0x85acaba2,
	0x63e83916,
	0x5a844b26,
	0x8a30e615,
	0xa84c96b3,
	0x430d3af8,
	0x882af149,
	0xbec10a93,
	0xfc9f408f,
	0x79e6084c,
	0x60b846fe,
	0x5adfd8b1,
	0x0a711811,
	0xe86dc867,
	0x71c4f59f,
	0x9c0551c6,
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
	"mt76x0_set_sar_specs\0"
	"pci_choose_state\0"
	"mt76x02_set_ethtool_fwver\0"
	"mt76x02_set_key\0"
	"mt76x02_mcu_parse_response\0"
	"mt76_release_buffered_frames\0"
	"request_firmware\0"
	"mt76_get_txpower\0"
	"__x86_indirect_thunk_r15\0"
	"__pci_register_driver\0"
	"mt76x02_dma_disable\0"
	"mt76_wake_tx_queue\0"
	"mt76x02e_init_beacon_config\0"
	"mt76_get_antenna\0"
	"pcpu_hot\0"
	"usleep_range_state\0"
	"pci_set_power_state\0"
	"mt76x02_sta_ps\0"
	"mt76x02_sta_rate_tbl_update\0"
	"kthread_park\0"
	"__dynamic_dev_dbg\0"
	"mt76_dma_cleanup\0"
	"pci_unregister_driver\0"
	"__fentry__\0"
	"mt76x02_reconfig_complete\0"
	"mt76_alloc_device\0"
	"wake_up_process\0"
	"mt76x02_set_coverage_class\0"
	"__x86_indirect_thunk_rax\0"
	"__stack_chk_fail\0"
	"mt76x02_update_channel\0"
	"__napi_schedule\0"
	"mt76_pci_disable_aspm\0"
	"_dev_info\0"
	"mt76x02_configure_filter\0"
	"mt76_free_device\0"
	"mt76x0_chip_onoff\0"
	"__ubsan_handle_out_of_bounds\0"
	"mt76x02_queue_rx_skb\0"
	"kthread_unpark\0"
	"pcim_iomap_regions\0"
	"ieee80211_queue_delayed_work\0"
	"mt76x0_config\0"
	"mt76x0_register_device\0"
	"_dev_err\0"
	"mt76x02_rx_poll_complete\0"
	"mt76x0_phy_calibrate\0"
	"mt76_set_tim\0"
	"mt76x02_sw_scan_complete\0"
	"mt76x02_irq_handler\0"
	"napi_enable\0"
	"__mt76_poll_msec\0"
	"mt76x02_tx\0"
	"mt76_mmio_init\0"
	"mt76x02_sta_remove\0"
	"__local_bh_enable_ip\0"
	"__mutex_init\0"
	"mt76x02_sta_add\0"
	"mt76_unregister_device\0"
	"pci_restore_state\0"
	"mt76x0_mac_stop\0"
	"mt76_get_survey\0"
	"_dev_warn\0"
	"pci_set_master\0"
	"__x86_return_thunk\0"
	"mt76x02_set_rts_threshold\0"
	"mt76x02_tx_complete_skb\0"
	"mt76_sta_state\0"
	"mt76x02_mcu_msg_send\0"
	"mt76x0_init_hardware\0"
	"mt76x02_bss_info_changed\0"
	"pci_enable_wake\0"
	"cancel_delayed_work_sync\0"
	"mt76x02_add_interface\0"
	"__x86_indirect_thunk_r9\0"
	"mt76x02_tx_prepare_skb\0"
	"mt76x02_mcu_cleanup\0"
	"mt76x02_ampdu_action\0"
	"mt76x02_conf_tx\0"
	"dma_set_mask\0"
	"mt76_sw_scan\0"
	"mt76_sta_pre_rcu_remove\0"
	"pcim_iomap_table\0"
	"napi_schedule_prep\0"
	"napi_disable\0"
	"__mt76_poll\0"
	"pcim_enable_device\0"
	"tasklet_unlock_wait\0"
	"mt76x02_mac_start\0"
	"mt76x02_remove_interface\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mt76x02-lib,mt76x0-common,mt76,mac80211");

MODULE_ALIAS("pci:v000014C3d00007610sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007630sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007650sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "9351AF31FE513178C0320E5");
