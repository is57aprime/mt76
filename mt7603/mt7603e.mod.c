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
	{ 0x82fb052a, "ieee80211_sta_register_airtime" },
	{ 0x0340ad7a, "mt76_init_sar_power" },
	{ 0x234eb1f4, "devm_platform_ioremap_resource" },
	{ 0xf8414c19, "mt76_dma_rx_poll" },
	{ 0x1bb9bfab, "mt76_tx_status_unlock" },
	{ 0x1abc7887, "release_firmware" },
	{ 0xf541d690, "simple_attr_open" },
	{ 0x6286616d, "devm_request_threaded_irq" },
	{ 0x5b12a9a8, "debugfs_attr_write" },
	{ 0xbf9c33b7, "devm_kmalloc" },
	{ 0xd272d446, "__rcu_read_lock" },
	{ 0xaa711385, "platform_driver_unregister" },
	{ 0x0d8b8609, "consume_skb" },
	{ 0x2435770d, "platform_get_irq" },
	{ 0x40a621c5, "snprintf" },
	{ 0x18250048, "mt76_tx_status_skb_get" },
	{ 0x1bb9bfab, "mt76_tx_status_lock" },
	{ 0x185931d9, "ieee80211_free_hw" },
	{ 0xc36345fa, "__sw_hweight32" },
	{ 0x26923678, "mt76_release_buffered_frames" },
	{ 0xf6efb7a9, "request_firmware" },
	{ 0x9b40f8ea, "mt76_get_txpower" },
	{ 0x5a844b26, "__x86_indirect_thunk_r15" },
	{ 0x92cef2e6, "mt76_csa_check" },
	{ 0x316f0153, "mt76_tx_status_skb_add" },
	{ 0xcc6bf4bf, "__pci_register_driver" },
	{ 0x9fa91036, "__tracepoint_mac_txdone" },
	{ 0xc4f23845, "mt76_tx_check_agg_ssn" },
	{ 0x97c76c70, "mt76_get_rate" },
	{ 0x38562629, "mt76_wake_tx_queue" },
	{ 0x8cf5c30c, "ieee80211_tx_status_ext" },
	{ 0x05ebf6f7, "mt76_stop_tx_queues" },
	{ 0xa53f4e29, "memcpy" },
	{ 0xc7594be5, "mt76_get_antenna" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0x4b4ef2ab, "__mt76_tx_complete_skb" },
	{ 0x5d3be6f8, "pcpu_hot" },
	{ 0x388dee05, "seq_lseek" },
	{ 0x28a786c6, "netif_napi_add_weight_locked" },
	{ 0x0feb1e94, "usleep_range_state" },
	{ 0x91a9b34b, "ieee80211_sta_eosp" },
	{ 0x6794f592, "ieee80211_get_hdrlen_from_skb" },
	{ 0xc783d29b, "cfg80211_chandef_valid" },
	{ 0xd8248fc3, "kthread_park" },
	{ 0x00e62fcb, "mt76_mcu_rx_event" },
	{ 0xde338d9a, "_raw_spin_lock" },
	{ 0x4c10fec5, "mt76_dma_cleanup" },
	{ 0x089fd8b8, "pci_unregister_driver" },
	{ 0xd272d446, "__fentry__" },
	{ 0x9afa6563, "mt76_alloc_device" },
	{ 0x353fef8f, "mt76_tx_status_check" },
	{ 0xbe0bf0cb, "wake_up_process" },
	{ 0x1f8a0346, "skb_queue_purge_reason" },
	{ 0x5f314d15, "ieee80211_get_buffered_bc" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0x2ff9b4e7, "napi_complete_done" },
	{ 0x6452c2e9, "ieee80211_sta_set_buffered" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x0f4bde61, "debugfs_create_devm_seqfile" },
	{ 0xde338d9a, "_raw_spin_unlock_bh" },
	{ 0x0f3bbb1f, "mt76_tx" },
	{ 0x0a711811, "__napi_schedule" },
	{ 0x92cef2e6, "mt76_csa_finish" },
	{ 0xd7c4f51b, "mt76_wcid_alloc" },
	{ 0x5a844b26, "__x86_indirect_thunk_rdx" },
	{ 0x67cdd8c3, "mt76_wcid_key_setup" },
	{ 0x7444c00b, "_dev_info" },
	{ 0x92cef2e6, "mt76_free_device" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0x0ba5aa3c, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xb26510be, "mt76_rx" },
	{ 0xeafded1c, "kthread_unpark" },
	{ 0xdcc00c14, "wiphy_to_ieee80211_hw" },
	{ 0x7410aa48, "mt76_init_queue" },
	{ 0xa0a9b0dc, "debugfs_attr_read" },
	{ 0xe77e5e6c, "pcim_iomap_regions" },
	{ 0x84b4f3cf, "mt76_tx_status_skb_done" },
	{ 0xab0e9602, "ieee80211_queue_delayed_work" },
	{ 0xeca03107, "devm_kmemdup" },
	{ 0x5c7b0206, "mt76_eeprom_init" },
	{ 0x7444c00b, "_dev_err" },
	{ 0xfa0e48e3, "debugfs_create_bool" },
	{ 0x457edffd, "skb_pull" },
	{ 0xd440cfdb, "mt76_register_device" },
	{ 0x09796bbb, "simple_attr_release" },
	{ 0xedf842a7, "mt76_set_tim" },
	{ 0xd272d446, "__rcu_read_unlock" },
	{ 0x5a844b26, "__x86_indirect_thunk_r14" },
	{ 0x3aebb104, "sk_skb_reason_drop" },
	{ 0xfc5f8088, "__SCK__tp_func_dev_irq" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0xf46d5bf3, "mutex_lock" },
	{ 0x457edffd, "skb_push" },
	{ 0x183b27e0, "mt76_set_channel" },
	{ 0x0a711811, "napi_enable" },
	{ 0x2bf07e13, "seq_putc" },
	{ 0x183b27e0, "mt76_update_survey" },
	{ 0xe86dc867, "__mt76_poll_msec" },
	{ 0x9c0551c6, "__tasklet_schedule" },
	{ 0xcfaca492, "mt76_mmio_init" },
	{ 0x9934ae99, "ieee80211_wake_queues" },
	{ 0x4da10267, "mt76_mcu_send_and_get_msg" },
	{ 0xb5c51982, "__cpu_online_mask" },
	{ 0x946818cf, "mt76_eeprom_override" },
	{ 0xfcc2e8f3, "__local_bh_enable_ip" },
	{ 0x92cef2e6, "mt76_unregister_device" },
	{ 0xe963bd28, "mt76_set_irq_mask" },
	{ 0x255dfd5a, "idr_destroy" },
	{ 0x27ec0604, "mt76_get_survey" },
	{ 0x44faca5c, "__mt76_mcu_send_firmware" },
	{ 0x9e039c4a, "pci_set_master" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x574d2dc3, "debugfs_create_u32" },
	{ 0xfc5f8088, "__SCK__tp_func_mac_txdone" },
	{ 0xffc2758f, "mt76_sta_state" },
	{ 0x9934ae99, "ieee80211_stop_queues" },
	{ 0x058c185a, "jiffies" },
	{ 0x0e6689c1, "__platform_driver_register" },
	{ 0x9fa91036, "__tracepoint_dev_irq" },
	{ 0xd22cd56f, "seq_read" },
	{ 0xa9967f5a, "mt76_rates" },
	{ 0x82fd7238, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdbb4076b, "__SCT__tp_func_dev_irq" },
	{ 0x56ba2d9e, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0xf46d5bf3, "mutex_unlock" },
	{ 0x85acaba2, "cancel_delayed_work_sync" },
	{ 0x5739cac9, "mt76_insert_ccmp_hdr" },
	{ 0x64642167, "mt76_txq_schedule_all" },
	{ 0x02f9bbf0, "init_timer_key" },
	{ 0xcbae5412, "__const_udelay" },
	{ 0x7e2c6ca5, "mt76_sw_scan_complete" },
	{ 0x32077f95, "mt76_rx_aggr_start" },
	{ 0x5a844b26, "__x86_indirect_thunk_rcx" },
	{ 0x464d002c, "seq_write" },
	{ 0x8d1d7639, "__kmalloc_cache_noprof" },
	{ 0x12cfb334, "seq_printf" },
	{ 0xc67bb9c7, "ieee80211_beacon_get_tim" },
	{ 0x71798f7e, "delayed_work_timer_fn" },
	{ 0x389781be, "mt76_get_sar_power" },
	{ 0xde338d9a, "_raw_spin_lock_bh" },
	{ 0x33a0e06b, "debugfs_create_file_full" },
	{ 0xae030cd0, "single_release" },
	{ 0xbec10a93, "dma_set_mask" },
	{ 0xfc9f408f, "mt76_sw_scan" },
	{ 0x40d8875b, "mt76_queues_read" },
	{ 0x79e6084c, "mt76_sta_pre_rcu_remove" },
	{ 0x031fcfe7, "mt76_register_debugfs_fops" },
	{ 0x60b846fe, "pcim_iomap_table" },
	{ 0xdff18c89, "tasklet_setup" },
	{ 0x5adfd8b1, "napi_schedule_prep" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0x0a711811, "napi_disable" },
	{ 0xd0a6e881, "dev_kfree_skb_any_reason" },
	{ 0xe86dc867, "__mt76_poll" },
	{ 0xa8dd822f, "mt76_rx_aggr_stop" },
	{ 0xd272d446, "__SCT__preempt_schedule_notrace" },
	{ 0x62f367ff, "debugfs_create_u8" },
	{ 0x5218fe90, "single_open" },
	{ 0x9c0551c6, "tasklet_unlock_wait" },
	{ 0x71c4f59f, "pcim_enable_device" },
	{ 0xde338d9a, "_raw_spin_unlock" },
	{ 0x4c10fec5, "mt76_dma_attach" },
	{ 0xe0e5ffd0, "mt76_get_min_avg_rssi" },
	{ 0xa9119270, "__SCT__tp_func_mac_txdone" },
	{ 0x12ca6142, "ktime_get_with_offset" },
	{ 0x4ac4312d, "kmalloc_caches" },
	{ 0x70eca2ca, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x82fb052a,
	0x0340ad7a,
	0x234eb1f4,
	0xf8414c19,
	0x1bb9bfab,
	0x1abc7887,
	0xf541d690,
	0x6286616d,
	0x5b12a9a8,
	0xbf9c33b7,
	0xd272d446,
	0xaa711385,
	0x0d8b8609,
	0x2435770d,
	0x40a621c5,
	0x18250048,
	0x1bb9bfab,
	0x185931d9,
	0xc36345fa,
	0x26923678,
	0xf6efb7a9,
	0x9b40f8ea,
	0x5a844b26,
	0x92cef2e6,
	0x316f0153,
	0xcc6bf4bf,
	0x9fa91036,
	0xc4f23845,
	0x97c76c70,
	0x38562629,
	0x8cf5c30c,
	0x05ebf6f7,
	0xa53f4e29,
	0xc7594be5,
	0xcb8b6ec6,
	0x4b4ef2ab,
	0x5d3be6f8,
	0x388dee05,
	0x28a786c6,
	0x0feb1e94,
	0x91a9b34b,
	0x6794f592,
	0xc783d29b,
	0xd8248fc3,
	0x00e62fcb,
	0xde338d9a,
	0x4c10fec5,
	0x089fd8b8,
	0xd272d446,
	0x9afa6563,
	0x353fef8f,
	0xbe0bf0cb,
	0x1f8a0346,
	0x5f314d15,
	0x5a844b26,
	0x2ff9b4e7,
	0x6452c2e9,
	0xd272d446,
	0x0f4bde61,
	0xde338d9a,
	0x0f3bbb1f,
	0x0a711811,
	0x92cef2e6,
	0xd7c4f51b,
	0x5a844b26,
	0x67cdd8c3,
	0x7444c00b,
	0x92cef2e6,
	0x90a48d82,
	0x0ba5aa3c,
	0xb26510be,
	0xeafded1c,
	0xdcc00c14,
	0x7410aa48,
	0xa0a9b0dc,
	0xe77e5e6c,
	0x84b4f3cf,
	0xab0e9602,
	0xeca03107,
	0x5c7b0206,
	0x7444c00b,
	0xfa0e48e3,
	0x457edffd,
	0xd440cfdb,
	0x09796bbb,
	0xedf842a7,
	0xd272d446,
	0x5a844b26,
	0x3aebb104,
	0xfc5f8088,
	0xbd03ed67,
	0xf46d5bf3,
	0x457edffd,
	0x183b27e0,
	0x0a711811,
	0x2bf07e13,
	0x183b27e0,
	0xe86dc867,
	0x9c0551c6,
	0xcfaca492,
	0x9934ae99,
	0x4da10267,
	0xb5c51982,
	0x946818cf,
	0xfcc2e8f3,
	0x92cef2e6,
	0xe963bd28,
	0x255dfd5a,
	0x27ec0604,
	0x44faca5c,
	0x9e039c4a,
	0xd272d446,
	0x574d2dc3,
	0xfc5f8088,
	0xffc2758f,
	0x9934ae99,
	0x058c185a,
	0x0e6689c1,
	0x9fa91036,
	0xd22cd56f,
	0xa9967f5a,
	0x82fd7238,
	0xdbb4076b,
	0x56ba2d9e,
	0xf46d5bf3,
	0x85acaba2,
	0x5739cac9,
	0x64642167,
	0x02f9bbf0,
	0xcbae5412,
	0x7e2c6ca5,
	0x32077f95,
	0x5a844b26,
	0x464d002c,
	0x8d1d7639,
	0x12cfb334,
	0xc67bb9c7,
	0x71798f7e,
	0x389781be,
	0xde338d9a,
	0x33a0e06b,
	0xae030cd0,
	0xbec10a93,
	0xfc9f408f,
	0x40d8875b,
	0x79e6084c,
	0x031fcfe7,
	0x60b846fe,
	0xdff18c89,
	0x5adfd8b1,
	0xe4de56b4,
	0x0a711811,
	0xd0a6e881,
	0xe86dc867,
	0xa8dd822f,
	0xd272d446,
	0x62f367ff,
	0x5218fe90,
	0x9c0551c6,
	0x71c4f59f,
	0xde338d9a,
	0x4c10fec5,
	0xe0e5ffd0,
	0xa9119270,
	0x12ca6142,
	0x4ac4312d,
	0x70eca2ca,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"ieee80211_sta_register_airtime\0"
	"mt76_init_sar_power\0"
	"devm_platform_ioremap_resource\0"
	"mt76_dma_rx_poll\0"
	"mt76_tx_status_unlock\0"
	"release_firmware\0"
	"simple_attr_open\0"
	"devm_request_threaded_irq\0"
	"debugfs_attr_write\0"
	"devm_kmalloc\0"
	"__rcu_read_lock\0"
	"platform_driver_unregister\0"
	"consume_skb\0"
	"platform_get_irq\0"
	"snprintf\0"
	"mt76_tx_status_skb_get\0"
	"mt76_tx_status_lock\0"
	"ieee80211_free_hw\0"
	"__sw_hweight32\0"
	"mt76_release_buffered_frames\0"
	"request_firmware\0"
	"mt76_get_txpower\0"
	"__x86_indirect_thunk_r15\0"
	"mt76_csa_check\0"
	"mt76_tx_status_skb_add\0"
	"__pci_register_driver\0"
	"__tracepoint_mac_txdone\0"
	"mt76_tx_check_agg_ssn\0"
	"mt76_get_rate\0"
	"mt76_wake_tx_queue\0"
	"ieee80211_tx_status_ext\0"
	"mt76_stop_tx_queues\0"
	"memcpy\0"
	"mt76_get_antenna\0"
	"kfree\0"
	"__mt76_tx_complete_skb\0"
	"pcpu_hot\0"
	"seq_lseek\0"
	"netif_napi_add_weight_locked\0"
	"usleep_range_state\0"
	"ieee80211_sta_eosp\0"
	"ieee80211_get_hdrlen_from_skb\0"
	"cfg80211_chandef_valid\0"
	"kthread_park\0"
	"mt76_mcu_rx_event\0"
	"_raw_spin_lock\0"
	"mt76_dma_cleanup\0"
	"pci_unregister_driver\0"
	"__fentry__\0"
	"mt76_alloc_device\0"
	"mt76_tx_status_check\0"
	"wake_up_process\0"
	"skb_queue_purge_reason\0"
	"ieee80211_get_buffered_bc\0"
	"__x86_indirect_thunk_rax\0"
	"napi_complete_done\0"
	"ieee80211_sta_set_buffered\0"
	"__stack_chk_fail\0"
	"debugfs_create_devm_seqfile\0"
	"_raw_spin_unlock_bh\0"
	"mt76_tx\0"
	"__napi_schedule\0"
	"mt76_csa_finish\0"
	"mt76_wcid_alloc\0"
	"__x86_indirect_thunk_rdx\0"
	"mt76_wcid_key_setup\0"
	"_dev_info\0"
	"mt76_free_device\0"
	"__ubsan_handle_out_of_bounds\0"
	"ieee80211_stop_tx_ba_cb_irqsafe\0"
	"mt76_rx\0"
	"kthread_unpark\0"
	"wiphy_to_ieee80211_hw\0"
	"mt76_init_queue\0"
	"debugfs_attr_read\0"
	"pcim_iomap_regions\0"
	"mt76_tx_status_skb_done\0"
	"ieee80211_queue_delayed_work\0"
	"devm_kmemdup\0"
	"mt76_eeprom_init\0"
	"_dev_err\0"
	"debugfs_create_bool\0"
	"skb_pull\0"
	"mt76_register_device\0"
	"simple_attr_release\0"
	"mt76_set_tim\0"
	"__rcu_read_unlock\0"
	"__x86_indirect_thunk_r14\0"
	"sk_skb_reason_drop\0"
	"__SCK__tp_func_dev_irq\0"
	"random_kmalloc_seed\0"
	"mutex_lock\0"
	"skb_push\0"
	"mt76_set_channel\0"
	"napi_enable\0"
	"seq_putc\0"
	"mt76_update_survey\0"
	"__mt76_poll_msec\0"
	"__tasklet_schedule\0"
	"mt76_mmio_init\0"
	"ieee80211_wake_queues\0"
	"mt76_mcu_send_and_get_msg\0"
	"__cpu_online_mask\0"
	"mt76_eeprom_override\0"
	"__local_bh_enable_ip\0"
	"mt76_unregister_device\0"
	"mt76_set_irq_mask\0"
	"idr_destroy\0"
	"mt76_get_survey\0"
	"__mt76_mcu_send_firmware\0"
	"pci_set_master\0"
	"__x86_return_thunk\0"
	"debugfs_create_u32\0"
	"__SCK__tp_func_mac_txdone\0"
	"mt76_sta_state\0"
	"ieee80211_stop_queues\0"
	"jiffies\0"
	"__platform_driver_register\0"
	"__tracepoint_dev_irq\0"
	"seq_read\0"
	"mt76_rates\0"
	"__ubsan_handle_shift_out_of_bounds\0"
	"__SCT__tp_func_dev_irq\0"
	"ieee80211_iterate_active_interfaces_atomic\0"
	"mutex_unlock\0"
	"cancel_delayed_work_sync\0"
	"mt76_insert_ccmp_hdr\0"
	"mt76_txq_schedule_all\0"
	"init_timer_key\0"
	"__const_udelay\0"
	"mt76_sw_scan_complete\0"
	"mt76_rx_aggr_start\0"
	"__x86_indirect_thunk_rcx\0"
	"seq_write\0"
	"__kmalloc_cache_noprof\0"
	"seq_printf\0"
	"ieee80211_beacon_get_tim\0"
	"delayed_work_timer_fn\0"
	"mt76_get_sar_power\0"
	"_raw_spin_lock_bh\0"
	"debugfs_create_file_full\0"
	"single_release\0"
	"dma_set_mask\0"
	"mt76_sw_scan\0"
	"mt76_queues_read\0"
	"mt76_sta_pre_rcu_remove\0"
	"mt76_register_debugfs_fops\0"
	"pcim_iomap_table\0"
	"tasklet_setup\0"
	"napi_schedule_prep\0"
	"__ubsan_handle_load_invalid_value\0"
	"napi_disable\0"
	"dev_kfree_skb_any_reason\0"
	"__mt76_poll\0"
	"mt76_rx_aggr_stop\0"
	"__SCT__preempt_schedule_notrace\0"
	"debugfs_create_u8\0"
	"single_open\0"
	"tasklet_unlock_wait\0"
	"pcim_enable_device\0"
	"_raw_spin_unlock\0"
	"mt76_dma_attach\0"
	"mt76_get_min_avg_rssi\0"
	"__SCT__tp_func_mac_txdone\0"
	"ktime_get_with_offset\0"
	"kmalloc_caches\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mac80211,mt76,cfg80211");

MODULE_ALIAS("of:N*T*Cmediatek,mt7628-wmac");
MODULE_ALIAS("of:N*T*Cmediatek,mt7628-wmacC*");
MODULE_ALIAS("pci:v000014C3d00007603sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "31244CFD46F5B6E43900FAE");
