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
	{ 0x52c33ad1, "mt76_connac_mcu_restart" },
	{ 0x82fb052a, "ieee80211_sta_register_airtime" },
	{ 0x33ab7c9d, "relay_reset" },
	{ 0x0340ad7a, "mt76_init_sar_power" },
	{ 0xa61fd7aa, "__check_object_size" },
	{ 0xf8414c19, "mt76_dma_rx_poll" },
	{ 0x1bb9bfab, "mt76_tx_status_unlock" },
	{ 0x1abc7887, "release_firmware" },
	{ 0xf541d690, "simple_attr_open" },
	{ 0x56ba2d9e, "ieee80211_iterate_interfaces" },
	{ 0x6286616d, "devm_request_threaded_irq" },
	{ 0x5b12a9a8, "debugfs_attr_write" },
	{ 0x092a35a2, "_copy_from_user" },
	{ 0xbf9c33b7, "devm_kmalloc" },
	{ 0x457edffd, "skb_put" },
	{ 0xd272d446, "__rcu_read_lock" },
	{ 0xd9ff10d6, "mt76_connac_get_phy_mode_v2" },
	{ 0x0d8b8609, "consume_skb" },
	{ 0xa53f4e29, "memmove" },
	{ 0x42194be5, "pci_alloc_irq_vectors" },
	{ 0x40a621c5, "snprintf" },
	{ 0x18250048, "mt76_tx_status_skb_get" },
	{ 0xf27c0ced, "relay_open" },
	{ 0x7e8b5a27, "mt76_mcu_msg_alloc" },
	{ 0xd272d446, "__SCT__preempt_schedule" },
	{ 0x1bb9bfab, "mt76_tx_status_lock" },
	{ 0xc87f4bab, "finish_wait" },
	{ 0x2cbe976a, "pci_get_device" },
	{ 0x185931d9, "ieee80211_free_hw" },
	{ 0x13835454, "dma_unmap_page_attrs" },
	{ 0xc36345fa, "__sw_hweight32" },
	{ 0x26923678, "mt76_release_buffered_frames" },
	{ 0xf6efb7a9, "request_firmware" },
	{ 0x9b40f8ea, "mt76_get_txpower" },
	{ 0xbd03ed67, "this_cpu_off" },
	{ 0x22b15f7e, "mt76_connac_mcu_sta_uapsd" },
	{ 0x5a844b26, "__x86_indirect_thunk_r15" },
	{ 0x316f0153, "mt76_tx_status_skb_add" },
	{ 0xcc6bf4bf, "__pci_register_driver" },
	{ 0x05135ca5, "ieee80211_iterate_stations_atomic" },
	{ 0x97c76c70, "mt76_get_rate" },
	{ 0x38562629, "mt76_wake_tx_queue" },
	{ 0x7a7b2fb6, "ieee80211_start_tx_ba_session" },
	{ 0xa53f4e29, "memcpy" },
	{ 0xc7594be5, "mt76_get_antenna" },
	{ 0x4b4ef2ab, "__mt76_tx_complete_skb" },
	{ 0x5d3be6f8, "pcpu_hot" },
	{ 0x388dee05, "seq_lseek" },
	{ 0xe6a3482e, "thermal_cooling_device_register" },
	{ 0x6efdfde1, "mt76_set_stream_caps" },
	{ 0x28a786c6, "netif_napi_add_weight_locked" },
	{ 0x0feb1e94, "usleep_range_state" },
	{ 0x0db8d68d, "prepare_to_wait_event" },
	{ 0x6794f592, "ieee80211_get_hdrlen_from_skb" },
	{ 0x16ab4215, "__wake_up" },
	{ 0xc783d29b, "cfg80211_chandef_valid" },
	{ 0x02191612, "get_device" },
	{ 0xe1e1f979, "_raw_spin_lock_irqsave" },
	{ 0xd8248fc3, "kthread_park" },
	{ 0x26cf0a68, "__dynamic_dev_dbg" },
	{ 0x00e62fcb, "mt76_mcu_rx_event" },
	{ 0x9d5790c1, "mt76_alloc_phy" },
	{ 0x4c10fec5, "mt76_dma_cleanup" },
	{ 0x089fd8b8, "pci_unregister_driver" },
	{ 0xd272d446, "__fentry__" },
	{ 0x9afa6563, "mt76_alloc_device" },
	{ 0x353fef8f, "mt76_tx_status_check" },
	{ 0xbe0bf0cb, "wake_up_process" },
	{ 0x1f8a0346, "skb_queue_purge_reason" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0x467ed8e0, "ieee80211_find_sta" },
	{ 0x2ff9b4e7, "napi_complete_done" },
	{ 0xe8213e80, "_printk" },
	{ 0x7528022c, "cfg80211_reg_check_beaconing" },
	{ 0x8bc4b446, "mt76_calculate_default_rate" },
	{ 0x6ac784f4, "schedule_timeout" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x0f4bde61, "debugfs_create_devm_seqfile" },
	{ 0xde338d9a, "_raw_spin_unlock_bh" },
	{ 0xcc29f68c, "put_device" },
	{ 0x433c17b1, "devm_free_irq" },
	{ 0x0f3bbb1f, "mt76_tx" },
	{ 0x0a711811, "__napi_schedule" },
	{ 0x38c8be28, "idr_get_next" },
	{ 0xd7c4f51b, "mt76_wcid_alloc" },
	{ 0xd3b6f66a, "mt76_pci_disable_aspm" },
	{ 0x5a844b26, "__x86_indirect_thunk_rdx" },
	{ 0x67cdd8c3, "mt76_wcid_key_setup" },
	{ 0x7444c00b, "_dev_info" },
	{ 0x92cef2e6, "mt76_free_device" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0x0ba5aa3c, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xb26510be, "mt76_rx" },
	{ 0xb9df25ec, "sysfs_create_link" },
	{ 0xeafded1c, "kthread_unpark" },
	{ 0x26226372, "cfg80211_find_elem_match" },
	{ 0x39b60c63, "mt76_phy_dfs_state" },
	{ 0x07d50c57, "idr_remove" },
	{ 0xdcc00c14, "wiphy_to_ieee80211_hw" },
	{ 0x7410aa48, "mt76_init_queue" },
	{ 0xa0a9b0dc, "debugfs_attr_read" },
	{ 0xe77e5e6c, "pcim_iomap_regions" },
	{ 0x7a5ffe84, "init_wait_entry" },
	{ 0x84b4f3cf, "mt76_tx_status_skb_done" },
	{ 0xab0e9602, "ieee80211_queue_delayed_work" },
	{ 0xeca03107, "devm_kmemdup" },
	{ 0x5c7b0206, "mt76_eeprom_init" },
	{ 0x7444c00b, "_dev_err" },
	{ 0x09796bbb, "simple_open" },
	{ 0x457edffd, "skb_pull" },
	{ 0xd440cfdb, "mt76_register_device" },
	{ 0xdff2e89c, "sysfs_remove_link" },
	{ 0xb193f6e8, "mt76_mcu_skb_send_and_get_msg" },
	{ 0x09796bbb, "simple_attr_release" },
	{ 0xd272d446, "__rcu_read_unlock" },
	{ 0x5a844b26, "__x86_indirect_thunk_r14" },
	{ 0xfc5f8088, "__SCK__tp_func_dev_irq" },
	{ 0xf46d5bf3, "mutex_lock" },
	{ 0x457edffd, "skb_push" },
	{ 0x183b27e0, "mt76_set_channel" },
	{ 0xd66823d5, "debugfs_remove" },
	{ 0x0a711811, "napi_enable" },
	{ 0x2bf07e13, "seq_putc" },
	{ 0xe86dc867, "__mt76_poll_msec" },
	{ 0x9c0551c6, "__tasklet_schedule" },
	{ 0x5a844b26, "__x86_indirect_thunk_r13" },
	{ 0xcfaca492, "mt76_mmio_init" },
	{ 0x9934ae99, "ieee80211_wake_queues" },
	{ 0x4da10267, "mt76_mcu_send_and_get_msg" },
	{ 0x62a16dd8, "ieee80211_beacon_get_template" },
	{ 0xb5c51982, "__cpu_online_mask" },
	{ 0x946818cf, "mt76_eeprom_override" },
	{ 0xfcc2e8f3, "__local_bh_enable_ip" },
	{ 0x173ec8da, "sscanf" },
	{ 0x92cef2e6, "mt76_unregister_device" },
	{ 0xbf9859a5, "mt76_connac_get_he_phy_cap" },
	{ 0x81a1a811, "_raw_spin_unlock_irqrestore" },
	{ 0xe963bd28, "mt76_set_irq_mask" },
	{ 0x255dfd5a, "idr_destroy" },
	{ 0x1d177ede, "default_llseek" },
	{ 0x27ec0604, "mt76_get_survey" },
	{ 0x7295b8c3, "ieee80211_freq_khz_to_channel" },
	{ 0xbc761077, "devm_hwmon_device_register_with_groups" },
	{ 0x7444c00b, "_dev_warn" },
	{ 0x5a844b26, "__x86_indirect_thunk_r10" },
	{ 0x6d2f6d40, "rfc1042_header" },
	{ 0x44faca5c, "__mt76_mcu_send_firmware" },
	{ 0x9e039c4a, "pci_set_master" },
	{ 0x0bca568c, "mt76_token_release" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x574d2dc3, "debugfs_create_u32" },
	{ 0x52c33ad1, "mt76_connac_mcu_start_patch" },
	{ 0x5403c125, "__init_waitqueue_head" },
	{ 0xffc2758f, "mt76_sta_state" },
	{ 0x2ce58a7d, "mt76_seq_puts_array" },
	{ 0x9934ae99, "ieee80211_stop_queues" },
	{ 0x058c185a, "jiffies" },
	{ 0x58ad0d64, "relay_switch_subbuf" },
	{ 0x3a89cea9, "mt76_connac_mcu_init_download" },
	{ 0x3d03b154, "devm_kasprintf" },
	{ 0x9fa91036, "__tracepoint_dev_irq" },
	{ 0xd22cd56f, "seq_read" },
	{ 0xdd6830c7, "sprintf" },
	{ 0x012db9e7, "mt76_connac_mcu_add_nested_tlv" },
	{ 0xa9967f5a, "mt76_rates" },
	{ 0x82fd7238, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xbd32e0a1, "mt76_token_consume" },
	{ 0xdbb4076b, "__SCT__tp_func_dev_irq" },
	{ 0xc6a6c2b3, "mt76_get_rate_power_limits" },
	{ 0x56ba2d9e, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x33ab7c9d, "relay_flush" },
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
	{ 0xcb1b824b, "mt76_connac_mcu_start_firmware" },
	{ 0x75738bed, "__warn_printk" },
	{ 0x12cfb334, "seq_printf" },
	{ 0x5a844b26, "__x86_indirect_thunk_r9" },
	{ 0x71798f7e, "delayed_work_timer_fn" },
	{ 0xd64cbdde, "ieee80211_color_change_finish" },
	{ 0xde338d9a, "_raw_spin_lock_bh" },
	{ 0x183b27e0, "mt76_unregister_phy" },
	{ 0x33a0e06b, "debugfs_create_file_full" },
	{ 0x909054b7, "mt76_register_phy" },
	{ 0xe94dec52, "mt76_put_txwi" },
	{ 0x3c95cb5e, "mt76_get_of_eeprom" },
	{ 0x3bb85c8b, "__mt76_connac_mcu_alloc_sta_req" },
	{ 0xae030cd0, "single_release" },
	{ 0xbec10a93, "dma_set_mask" },
	{ 0xfc9f408f, "mt76_sw_scan" },
	{ 0x79e6084c, "mt76_sta_pre_rcu_remove" },
	{ 0x031fcfe7, "mt76_register_debugfs_fops" },
	{ 0x8db98efb, "thermal_cooling_device_unregister" },
	{ 0x5a844b26, "__x86_indirect_thunk_r12" },
	{ 0xa42d101e, "relay_file_operations" },
	{ 0x60b846fe, "pcim_iomap_table" },
	{ 0xdff18c89, "tasklet_setup" },
	{ 0xb711180d, "__mt76_set_tx_blocked" },
	{ 0xb90f4011, "ieee80211_queue_work" },
	{ 0x1f55c5b2, "kstrtoll" },
	{ 0x5adfd8b1, "napi_schedule_prep" },
	{ 0x77bde336, "napi_consume_skb" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0x0a711811, "napi_disable" },
	{ 0x6d2f6d40, "bridge_tunnel_header" },
	{ 0xd0a6e881, "dev_kfree_skb_any_reason" },
	{ 0x66692013, "mt76_connac_mcu_patch_sem_ctrl" },
	{ 0xe86dc867, "__mt76_poll" },
	{ 0xa8dd822f, "mt76_rx_aggr_stop" },
	{ 0xd272d446, "__SCT__preempt_schedule_notrace" },
	{ 0x5218fe90, "single_open" },
	{ 0x9c0551c6, "tasklet_unlock_wait" },
	{ 0x71c4f59f, "pcim_enable_device" },
	{ 0x0b3f8793, "mt76_connac_get_phy_mode" },
	{ 0x4c10fec5, "mt76_dma_attach" },
	{ 0x89e724a4, "pci_free_irq_vectors" },
	{ 0x1fb86378, "mt76_ethtool_worker" },
	{ 0x5a844b26, "__x86_indirect_thunk_r8" },
	{ 0x67628f51, "msleep" },
	{ 0x12ca6142, "ktime_get_with_offset" },
	{ 0xea8c4c26, "mt76_connac_mcu_sta_basic_tlv" },
	{ 0x7851be11, "__SCT__might_resched" },
	{ 0x7820f9b0, "pci_bus_type" },
	{ 0xb4455d41, "ieee80211_csa_finish" },
	{ 0x2d88a3ab, "flush_work" },
	{ 0x70eca2ca, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x52c33ad1,
	0x82fb052a,
	0x33ab7c9d,
	0x0340ad7a,
	0xa61fd7aa,
	0xf8414c19,
	0x1bb9bfab,
	0x1abc7887,
	0xf541d690,
	0x56ba2d9e,
	0x6286616d,
	0x5b12a9a8,
	0x092a35a2,
	0xbf9c33b7,
	0x457edffd,
	0xd272d446,
	0xd9ff10d6,
	0x0d8b8609,
	0xa53f4e29,
	0x42194be5,
	0x40a621c5,
	0x18250048,
	0xf27c0ced,
	0x7e8b5a27,
	0xd272d446,
	0x1bb9bfab,
	0xc87f4bab,
	0x2cbe976a,
	0x185931d9,
	0x13835454,
	0xc36345fa,
	0x26923678,
	0xf6efb7a9,
	0x9b40f8ea,
	0xbd03ed67,
	0x22b15f7e,
	0x5a844b26,
	0x316f0153,
	0xcc6bf4bf,
	0x05135ca5,
	0x97c76c70,
	0x38562629,
	0x7a7b2fb6,
	0xa53f4e29,
	0xc7594be5,
	0x4b4ef2ab,
	0x5d3be6f8,
	0x388dee05,
	0xe6a3482e,
	0x6efdfde1,
	0x28a786c6,
	0x0feb1e94,
	0x0db8d68d,
	0x6794f592,
	0x16ab4215,
	0xc783d29b,
	0x02191612,
	0xe1e1f979,
	0xd8248fc3,
	0x26cf0a68,
	0x00e62fcb,
	0x9d5790c1,
	0x4c10fec5,
	0x089fd8b8,
	0xd272d446,
	0x9afa6563,
	0x353fef8f,
	0xbe0bf0cb,
	0x1f8a0346,
	0x5a844b26,
	0x467ed8e0,
	0x2ff9b4e7,
	0xe8213e80,
	0x7528022c,
	0x8bc4b446,
	0x6ac784f4,
	0xd272d446,
	0x0f4bde61,
	0xde338d9a,
	0xcc29f68c,
	0x433c17b1,
	0x0f3bbb1f,
	0x0a711811,
	0x38c8be28,
	0xd7c4f51b,
	0xd3b6f66a,
	0x5a844b26,
	0x67cdd8c3,
	0x7444c00b,
	0x92cef2e6,
	0x90a48d82,
	0x0ba5aa3c,
	0xb26510be,
	0xb9df25ec,
	0xeafded1c,
	0x26226372,
	0x39b60c63,
	0x07d50c57,
	0xdcc00c14,
	0x7410aa48,
	0xa0a9b0dc,
	0xe77e5e6c,
	0x7a5ffe84,
	0x84b4f3cf,
	0xab0e9602,
	0xeca03107,
	0x5c7b0206,
	0x7444c00b,
	0x09796bbb,
	0x457edffd,
	0xd440cfdb,
	0xdff2e89c,
	0xb193f6e8,
	0x09796bbb,
	0xd272d446,
	0x5a844b26,
	0xfc5f8088,
	0xf46d5bf3,
	0x457edffd,
	0x183b27e0,
	0xd66823d5,
	0x0a711811,
	0x2bf07e13,
	0xe86dc867,
	0x9c0551c6,
	0x5a844b26,
	0xcfaca492,
	0x9934ae99,
	0x4da10267,
	0x62a16dd8,
	0xb5c51982,
	0x946818cf,
	0xfcc2e8f3,
	0x173ec8da,
	0x92cef2e6,
	0xbf9859a5,
	0x81a1a811,
	0xe963bd28,
	0x255dfd5a,
	0x1d177ede,
	0x27ec0604,
	0x7295b8c3,
	0xbc761077,
	0x7444c00b,
	0x5a844b26,
	0x6d2f6d40,
	0x44faca5c,
	0x9e039c4a,
	0x0bca568c,
	0xd272d446,
	0x574d2dc3,
	0x52c33ad1,
	0x5403c125,
	0xffc2758f,
	0x2ce58a7d,
	0x9934ae99,
	0x058c185a,
	0x58ad0d64,
	0x3a89cea9,
	0x3d03b154,
	0x9fa91036,
	0xd22cd56f,
	0xdd6830c7,
	0x012db9e7,
	0xa9967f5a,
	0x82fd7238,
	0xbd32e0a1,
	0xdbb4076b,
	0xc6a6c2b3,
	0x56ba2d9e,
	0x33ab7c9d,
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
	0xcb1b824b,
	0x75738bed,
	0x12cfb334,
	0x5a844b26,
	0x71798f7e,
	0xd64cbdde,
	0xde338d9a,
	0x183b27e0,
	0x33a0e06b,
	0x909054b7,
	0xe94dec52,
	0x3c95cb5e,
	0x3bb85c8b,
	0xae030cd0,
	0xbec10a93,
	0xfc9f408f,
	0x79e6084c,
	0x031fcfe7,
	0x8db98efb,
	0x5a844b26,
	0xa42d101e,
	0x60b846fe,
	0xdff18c89,
	0xb711180d,
	0xb90f4011,
	0x1f55c5b2,
	0x5adfd8b1,
	0x77bde336,
	0xe4de56b4,
	0x0a711811,
	0x6d2f6d40,
	0xd0a6e881,
	0x66692013,
	0xe86dc867,
	0xa8dd822f,
	0xd272d446,
	0x5218fe90,
	0x9c0551c6,
	0x71c4f59f,
	0x0b3f8793,
	0x4c10fec5,
	0x89e724a4,
	0x1fb86378,
	0x5a844b26,
	0x67628f51,
	0x12ca6142,
	0xea8c4c26,
	0x7851be11,
	0x7820f9b0,
	0xb4455d41,
	0x2d88a3ab,
	0x70eca2ca,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"mt76_connac_mcu_restart\0"
	"ieee80211_sta_register_airtime\0"
	"relay_reset\0"
	"mt76_init_sar_power\0"
	"__check_object_size\0"
	"mt76_dma_rx_poll\0"
	"mt76_tx_status_unlock\0"
	"release_firmware\0"
	"simple_attr_open\0"
	"ieee80211_iterate_interfaces\0"
	"devm_request_threaded_irq\0"
	"debugfs_attr_write\0"
	"_copy_from_user\0"
	"devm_kmalloc\0"
	"skb_put\0"
	"__rcu_read_lock\0"
	"mt76_connac_get_phy_mode_v2\0"
	"consume_skb\0"
	"memmove\0"
	"pci_alloc_irq_vectors\0"
	"snprintf\0"
	"mt76_tx_status_skb_get\0"
	"relay_open\0"
	"mt76_mcu_msg_alloc\0"
	"__SCT__preempt_schedule\0"
	"mt76_tx_status_lock\0"
	"finish_wait\0"
	"pci_get_device\0"
	"ieee80211_free_hw\0"
	"dma_unmap_page_attrs\0"
	"__sw_hweight32\0"
	"mt76_release_buffered_frames\0"
	"request_firmware\0"
	"mt76_get_txpower\0"
	"this_cpu_off\0"
	"mt76_connac_mcu_sta_uapsd\0"
	"__x86_indirect_thunk_r15\0"
	"mt76_tx_status_skb_add\0"
	"__pci_register_driver\0"
	"ieee80211_iterate_stations_atomic\0"
	"mt76_get_rate\0"
	"mt76_wake_tx_queue\0"
	"ieee80211_start_tx_ba_session\0"
	"memcpy\0"
	"mt76_get_antenna\0"
	"__mt76_tx_complete_skb\0"
	"pcpu_hot\0"
	"seq_lseek\0"
	"thermal_cooling_device_register\0"
	"mt76_set_stream_caps\0"
	"netif_napi_add_weight_locked\0"
	"usleep_range_state\0"
	"prepare_to_wait_event\0"
	"ieee80211_get_hdrlen_from_skb\0"
	"__wake_up\0"
	"cfg80211_chandef_valid\0"
	"get_device\0"
	"_raw_spin_lock_irqsave\0"
	"kthread_park\0"
	"__dynamic_dev_dbg\0"
	"mt76_mcu_rx_event\0"
	"mt76_alloc_phy\0"
	"mt76_dma_cleanup\0"
	"pci_unregister_driver\0"
	"__fentry__\0"
	"mt76_alloc_device\0"
	"mt76_tx_status_check\0"
	"wake_up_process\0"
	"skb_queue_purge_reason\0"
	"__x86_indirect_thunk_rax\0"
	"ieee80211_find_sta\0"
	"napi_complete_done\0"
	"_printk\0"
	"cfg80211_reg_check_beaconing\0"
	"mt76_calculate_default_rate\0"
	"schedule_timeout\0"
	"__stack_chk_fail\0"
	"debugfs_create_devm_seqfile\0"
	"_raw_spin_unlock_bh\0"
	"put_device\0"
	"devm_free_irq\0"
	"mt76_tx\0"
	"__napi_schedule\0"
	"idr_get_next\0"
	"mt76_wcid_alloc\0"
	"mt76_pci_disable_aspm\0"
	"__x86_indirect_thunk_rdx\0"
	"mt76_wcid_key_setup\0"
	"_dev_info\0"
	"mt76_free_device\0"
	"__ubsan_handle_out_of_bounds\0"
	"ieee80211_stop_tx_ba_cb_irqsafe\0"
	"mt76_rx\0"
	"sysfs_create_link\0"
	"kthread_unpark\0"
	"cfg80211_find_elem_match\0"
	"mt76_phy_dfs_state\0"
	"idr_remove\0"
	"wiphy_to_ieee80211_hw\0"
	"mt76_init_queue\0"
	"debugfs_attr_read\0"
	"pcim_iomap_regions\0"
	"init_wait_entry\0"
	"mt76_tx_status_skb_done\0"
	"ieee80211_queue_delayed_work\0"
	"devm_kmemdup\0"
	"mt76_eeprom_init\0"
	"_dev_err\0"
	"simple_open\0"
	"skb_pull\0"
	"mt76_register_device\0"
	"sysfs_remove_link\0"
	"mt76_mcu_skb_send_and_get_msg\0"
	"simple_attr_release\0"
	"__rcu_read_unlock\0"
	"__x86_indirect_thunk_r14\0"
	"__SCK__tp_func_dev_irq\0"
	"mutex_lock\0"
	"skb_push\0"
	"mt76_set_channel\0"
	"debugfs_remove\0"
	"napi_enable\0"
	"seq_putc\0"
	"__mt76_poll_msec\0"
	"__tasklet_schedule\0"
	"__x86_indirect_thunk_r13\0"
	"mt76_mmio_init\0"
	"ieee80211_wake_queues\0"
	"mt76_mcu_send_and_get_msg\0"
	"ieee80211_beacon_get_template\0"
	"__cpu_online_mask\0"
	"mt76_eeprom_override\0"
	"__local_bh_enable_ip\0"
	"sscanf\0"
	"mt76_unregister_device\0"
	"mt76_connac_get_he_phy_cap\0"
	"_raw_spin_unlock_irqrestore\0"
	"mt76_set_irq_mask\0"
	"idr_destroy\0"
	"default_llseek\0"
	"mt76_get_survey\0"
	"ieee80211_freq_khz_to_channel\0"
	"devm_hwmon_device_register_with_groups\0"
	"_dev_warn\0"
	"__x86_indirect_thunk_r10\0"
	"rfc1042_header\0"
	"__mt76_mcu_send_firmware\0"
	"pci_set_master\0"
	"mt76_token_release\0"
	"__x86_return_thunk\0"
	"debugfs_create_u32\0"
	"mt76_connac_mcu_start_patch\0"
	"__init_waitqueue_head\0"
	"mt76_sta_state\0"
	"mt76_seq_puts_array\0"
	"ieee80211_stop_queues\0"
	"jiffies\0"
	"relay_switch_subbuf\0"
	"mt76_connac_mcu_init_download\0"
	"devm_kasprintf\0"
	"__tracepoint_dev_irq\0"
	"seq_read\0"
	"sprintf\0"
	"mt76_connac_mcu_add_nested_tlv\0"
	"mt76_rates\0"
	"__ubsan_handle_shift_out_of_bounds\0"
	"mt76_token_consume\0"
	"__SCT__tp_func_dev_irq\0"
	"mt76_get_rate_power_limits\0"
	"ieee80211_iterate_active_interfaces_atomic\0"
	"relay_flush\0"
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
	"mt76_connac_mcu_start_firmware\0"
	"__warn_printk\0"
	"seq_printf\0"
	"__x86_indirect_thunk_r9\0"
	"delayed_work_timer_fn\0"
	"ieee80211_color_change_finish\0"
	"_raw_spin_lock_bh\0"
	"mt76_unregister_phy\0"
	"debugfs_create_file_full\0"
	"mt76_register_phy\0"
	"mt76_put_txwi\0"
	"mt76_get_of_eeprom\0"
	"__mt76_connac_mcu_alloc_sta_req\0"
	"single_release\0"
	"dma_set_mask\0"
	"mt76_sw_scan\0"
	"mt76_sta_pre_rcu_remove\0"
	"mt76_register_debugfs_fops\0"
	"thermal_cooling_device_unregister\0"
	"__x86_indirect_thunk_r12\0"
	"relay_file_operations\0"
	"pcim_iomap_table\0"
	"tasklet_setup\0"
	"__mt76_set_tx_blocked\0"
	"ieee80211_queue_work\0"
	"kstrtoll\0"
	"napi_schedule_prep\0"
	"napi_consume_skb\0"
	"__ubsan_handle_load_invalid_value\0"
	"napi_disable\0"
	"bridge_tunnel_header\0"
	"dev_kfree_skb_any_reason\0"
	"mt76_connac_mcu_patch_sem_ctrl\0"
	"__mt76_poll\0"
	"mt76_rx_aggr_stop\0"
	"__SCT__preempt_schedule_notrace\0"
	"single_open\0"
	"tasklet_unlock_wait\0"
	"pcim_enable_device\0"
	"mt76_connac_get_phy_mode\0"
	"mt76_dma_attach\0"
	"pci_free_irq_vectors\0"
	"mt76_ethtool_worker\0"
	"__x86_indirect_thunk_r8\0"
	"msleep\0"
	"ktime_get_with_offset\0"
	"mt76_connac_mcu_sta_basic_tlv\0"
	"__SCT__might_resched\0"
	"pci_bus_type\0"
	"ieee80211_csa_finish\0"
	"flush_work\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mt76-connac-lib,mac80211,mt76,cfg80211");

MODULE_ALIAS("pci:v000014C3d00007902sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "895A934DA87DDF61650B198");
