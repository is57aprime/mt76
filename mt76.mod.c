#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(mt76_set_irq_mask, "_gpl", "");
KSYMTAB_FUNC(mt76_mmio_init, "_gpl", "");
KSYMTAB_FUNC(__mt76_poll, "_gpl", "");
KSYMTAB_FUNC(__mt76_poll_msec, "_gpl", "");
KSYMTAB_FUNC(mt76_wcid_alloc, "_gpl", "");
KSYMTAB_FUNC(mt76_get_min_avg_rssi, "_gpl", "");
KSYMTAB_FUNC(__mt76_worker_fn, "_gpl", "");
KSYMTAB_DATA(__tracepoint_mac_txdone, "_gpl", "");
KSYMTAB_FUNC(__traceiter_mac_txdone, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_mac_txdone, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_mac_txdone, "_gpl", "");
KSYMTAB_DATA(__tracepoint_dev_irq, "_gpl", "");
KSYMTAB_FUNC(__traceiter_dev_irq, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_dev_irq, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_dev_irq, "_gpl", "");
KSYMTAB_FUNC(mt76_put_txwi, "_gpl", "");
KSYMTAB_FUNC(mt76_dma_rx_poll, "_gpl", "");
KSYMTAB_FUNC(mt76_dma_attach, "_gpl", "");
KSYMTAB_FUNC(mt76_dma_cleanup, "_gpl", "");
KSYMTAB_DATA(mt76_rates, "_gpl", "");
KSYMTAB_FUNC(mt76_set_stream_caps, "_gpl", "");
KSYMTAB_FUNC(mt76_alloc_phy, "_gpl", "");
KSYMTAB_FUNC(mt76_register_phy, "_gpl", "");
KSYMTAB_FUNC(mt76_unregister_phy, "_gpl", "");
KSYMTAB_FUNC(mt76_alloc_device, "_gpl", "");
KSYMTAB_FUNC(mt76_register_device, "_gpl", "");
KSYMTAB_FUNC(mt76_unregister_device, "_gpl", "");
KSYMTAB_FUNC(mt76_free_device, "_gpl", "");
KSYMTAB_FUNC(mt76_rx, "_gpl", "");
KSYMTAB_FUNC(mt76_has_tx_pending, "_gpl", "");
KSYMTAB_FUNC(mt76_update_survey_active_time, "_gpl", "");
KSYMTAB_FUNC(mt76_update_survey, "_gpl", "");
KSYMTAB_FUNC(mt76_set_channel, "_gpl", "");
KSYMTAB_FUNC(mt76_get_survey, "_gpl", "");
KSYMTAB_FUNC(mt76_wcid_key_setup, "", "");
KSYMTAB_FUNC(mt76_rx_poll_complete, "_gpl", "");
KSYMTAB_FUNC(__mt76_sta_remove, "_gpl", "");
KSYMTAB_FUNC(mt76_sta_state, "_gpl", "");
KSYMTAB_FUNC(mt76_sta_pre_rcu_remove, "_gpl", "");
KSYMTAB_FUNC(mt76_get_txpower, "_gpl", "");
KSYMTAB_FUNC(mt76_init_sar_power, "_gpl", "");
KSYMTAB_FUNC(mt76_get_sar_power, "_gpl", "");
KSYMTAB_FUNC(mt76_csa_finish, "_gpl", "");
KSYMTAB_FUNC(mt76_csa_check, "_gpl", "");
KSYMTAB_FUNC(mt76_set_tim, "_gpl", "");
KSYMTAB_FUNC(mt76_insert_ccmp_hdr, "_gpl", "");
KSYMTAB_FUNC(mt76_get_rate, "_gpl", "");
KSYMTAB_FUNC(mt76_sw_scan, "_gpl", "");
KSYMTAB_FUNC(mt76_sw_scan_complete, "_gpl", "");
KSYMTAB_FUNC(mt76_get_antenna, "_gpl", "");
KSYMTAB_FUNC(mt76_init_queue, "_gpl", "");
KSYMTAB_FUNC(mt76_calculate_default_rate, "_gpl", "");
KSYMTAB_FUNC(mt76_ethtool_worker, "_gpl", "");
KSYMTAB_FUNC(mt76_phy_dfs_state, "_gpl", "");
KSYMTAB_FUNC(mt76_queues_read, "_gpl", "");
KSYMTAB_FUNC(mt76_seq_puts_array, "_gpl", "");
KSYMTAB_FUNC(mt76_register_debugfs_fops, "_gpl", "");
KSYMTAB_FUNC(mt76_get_of_eeprom, "_gpl", "");
KSYMTAB_FUNC(mt76_eeprom_override, "_gpl", "");
KSYMTAB_FUNC(mt76_get_rate_power_limits, "_gpl", "");
KSYMTAB_FUNC(mt76_eeprom_init, "_gpl", "");
KSYMTAB_FUNC(mt76_tx_check_agg_ssn, "_gpl", "");
KSYMTAB_FUNC(mt76_tx_status_lock, "_gpl", "");
KSYMTAB_FUNC(mt76_tx_status_unlock, "_gpl", "");
KSYMTAB_FUNC(mt76_tx_status_skb_done, "_gpl", "");
KSYMTAB_FUNC(mt76_tx_status_skb_add, "_gpl", "");
KSYMTAB_FUNC(mt76_tx_status_skb_get, "_gpl", "");
KSYMTAB_FUNC(mt76_tx_status_check, "_gpl", "");
KSYMTAB_FUNC(__mt76_tx_complete_skb, "_gpl", "");
KSYMTAB_FUNC(mt76_tx, "_gpl", "");
KSYMTAB_FUNC(mt76_release_buffered_frames, "_gpl", "");
KSYMTAB_FUNC(mt76_txq_schedule, "_gpl", "");
KSYMTAB_FUNC(mt76_txq_schedule_all, "_gpl", "");
KSYMTAB_FUNC(mt76_tx_worker_run, "_gpl", "");
KSYMTAB_FUNC(mt76_stop_tx_queues, "_gpl", "");
KSYMTAB_FUNC(mt76_wake_tx_queue, "_gpl", "");
KSYMTAB_FUNC(mt76_ac_to_hwq, "_gpl", "");
KSYMTAB_FUNC(mt76_skb_adjust_pad, "_gpl", "");
KSYMTAB_FUNC(mt76_queue_tx_complete, "_gpl", "");
KSYMTAB_FUNC(__mt76_set_tx_blocked, "_gpl", "");
KSYMTAB_FUNC(mt76_token_consume, "_gpl", "");
KSYMTAB_FUNC(mt76_token_release, "_gpl", "");
KSYMTAB_FUNC(mt76_rx_aggr_start, "_gpl", "");
KSYMTAB_FUNC(mt76_rx_aggr_stop, "_gpl", "");
KSYMTAB_FUNC(mt76_mcu_msg_alloc, "_gpl", "");
KSYMTAB_FUNC(mt76_mcu_get_response, "_gpl", "");
KSYMTAB_FUNC(mt76_mcu_rx_event, "_gpl", "");
KSYMTAB_FUNC(mt76_mcu_send_and_get_msg, "_gpl", "");
KSYMTAB_FUNC(mt76_mcu_skb_send_and_get_msg, "_gpl", "");
KSYMTAB_FUNC(__mt76_mcu_send_firmware, "_gpl", "");
KSYMTAB_FUNC(mt76_pci_disable_aspm, "_gpl", "");

SYMBOL_CRC(mt76_set_irq_mask, 0xe963bd28, "_gpl");
SYMBOL_CRC(mt76_mmio_init, 0xcfaca492, "_gpl");
SYMBOL_CRC(__mt76_poll, 0xe86dc867, "_gpl");
SYMBOL_CRC(__mt76_poll_msec, 0xe86dc867, "_gpl");
SYMBOL_CRC(mt76_wcid_alloc, 0xd7c4f51b, "_gpl");
SYMBOL_CRC(mt76_get_min_avg_rssi, 0xe0e5ffd0, "_gpl");
SYMBOL_CRC(__mt76_worker_fn, 0xb86a39eb, "_gpl");
SYMBOL_CRC(__tracepoint_mac_txdone, 0x9fa91036, "_gpl");
SYMBOL_CRC(__traceiter_mac_txdone, 0xc849fee0, "_gpl");
SYMBOL_CRC(__SCK__tp_func_mac_txdone, 0xfc5f8088, "_gpl");
SYMBOL_CRC(__SCT__tp_func_mac_txdone, 0xa9119270, "_gpl");
SYMBOL_CRC(__tracepoint_dev_irq, 0x9fa91036, "_gpl");
SYMBOL_CRC(__traceiter_dev_irq, 0xcf87bcbc, "_gpl");
SYMBOL_CRC(__SCK__tp_func_dev_irq, 0xfc5f8088, "_gpl");
SYMBOL_CRC(__SCT__tp_func_dev_irq, 0xdbb4076b, "_gpl");
SYMBOL_CRC(mt76_put_txwi, 0xe94dec52, "_gpl");
SYMBOL_CRC(mt76_dma_rx_poll, 0xf8414c19, "_gpl");
SYMBOL_CRC(mt76_dma_attach, 0x4c10fec5, "_gpl");
SYMBOL_CRC(mt76_dma_cleanup, 0x4c10fec5, "_gpl");
SYMBOL_CRC(mt76_rates, 0xa9967f5a, "_gpl");
SYMBOL_CRC(mt76_set_stream_caps, 0x6efdfde1, "_gpl");
SYMBOL_CRC(mt76_alloc_phy, 0x9d5790c1, "_gpl");
SYMBOL_CRC(mt76_register_phy, 0x909054b7, "_gpl");
SYMBOL_CRC(mt76_unregister_phy, 0x183b27e0, "_gpl");
SYMBOL_CRC(mt76_alloc_device, 0x9afa6563, "_gpl");
SYMBOL_CRC(mt76_register_device, 0xd440cfdb, "_gpl");
SYMBOL_CRC(mt76_unregister_device, 0x92cef2e6, "_gpl");
SYMBOL_CRC(mt76_free_device, 0x92cef2e6, "_gpl");
SYMBOL_CRC(mt76_rx, 0xb26510be, "_gpl");
SYMBOL_CRC(mt76_has_tx_pending, 0x7b79fc00, "_gpl");
SYMBOL_CRC(mt76_update_survey_active_time, 0xdfe89277, "_gpl");
SYMBOL_CRC(mt76_update_survey, 0x183b27e0, "_gpl");
SYMBOL_CRC(mt76_set_channel, 0x183b27e0, "_gpl");
SYMBOL_CRC(mt76_get_survey, 0x27ec0604, "_gpl");
SYMBOL_CRC(mt76_wcid_key_setup, 0x67cdd8c3, "");
SYMBOL_CRC(mt76_rx_poll_complete, 0xf8cfc1cc, "_gpl");
SYMBOL_CRC(__mt76_sta_remove, 0xb5144dc6, "_gpl");
SYMBOL_CRC(mt76_sta_state, 0xffc2758f, "_gpl");
SYMBOL_CRC(mt76_sta_pre_rcu_remove, 0x79e6084c, "_gpl");
SYMBOL_CRC(mt76_get_txpower, 0x9b40f8ea, "_gpl");
SYMBOL_CRC(mt76_init_sar_power, 0x0340ad7a, "_gpl");
SYMBOL_CRC(mt76_get_sar_power, 0x389781be, "_gpl");
SYMBOL_CRC(mt76_csa_finish, 0x92cef2e6, "_gpl");
SYMBOL_CRC(mt76_csa_check, 0x92cef2e6, "_gpl");
SYMBOL_CRC(mt76_set_tim, 0xedf842a7, "_gpl");
SYMBOL_CRC(mt76_insert_ccmp_hdr, 0x5739cac9, "_gpl");
SYMBOL_CRC(mt76_get_rate, 0x97c76c70, "_gpl");
SYMBOL_CRC(mt76_sw_scan, 0xfc9f408f, "_gpl");
SYMBOL_CRC(mt76_sw_scan_complete, 0x7e2c6ca5, "_gpl");
SYMBOL_CRC(mt76_get_antenna, 0xc7594be5, "_gpl");
SYMBOL_CRC(mt76_init_queue, 0x7410aa48, "_gpl");
SYMBOL_CRC(mt76_calculate_default_rate, 0x8bc4b446, "_gpl");
SYMBOL_CRC(mt76_ethtool_worker, 0x1fb86378, "_gpl");
SYMBOL_CRC(mt76_phy_dfs_state, 0x39b60c63, "_gpl");
SYMBOL_CRC(mt76_queues_read, 0x40d8875b, "_gpl");
SYMBOL_CRC(mt76_seq_puts_array, 0x2ce58a7d, "_gpl");
SYMBOL_CRC(mt76_register_debugfs_fops, 0x031fcfe7, "_gpl");
SYMBOL_CRC(mt76_get_of_eeprom, 0x3c95cb5e, "_gpl");
SYMBOL_CRC(mt76_eeprom_override, 0x946818cf, "_gpl");
SYMBOL_CRC(mt76_get_rate_power_limits, 0xc6a6c2b3, "_gpl");
SYMBOL_CRC(mt76_eeprom_init, 0x5c7b0206, "_gpl");
SYMBOL_CRC(mt76_tx_check_agg_ssn, 0xc4f23845, "_gpl");
SYMBOL_CRC(mt76_tx_status_lock, 0x1bb9bfab, "_gpl");
SYMBOL_CRC(mt76_tx_status_unlock, 0x1bb9bfab, "_gpl");
SYMBOL_CRC(mt76_tx_status_skb_done, 0x84b4f3cf, "_gpl");
SYMBOL_CRC(mt76_tx_status_skb_add, 0x316f0153, "_gpl");
SYMBOL_CRC(mt76_tx_status_skb_get, 0x18250048, "_gpl");
SYMBOL_CRC(mt76_tx_status_check, 0x353fef8f, "_gpl");
SYMBOL_CRC(__mt76_tx_complete_skb, 0x4b4ef2ab, "_gpl");
SYMBOL_CRC(mt76_tx, 0x0f3bbb1f, "_gpl");
SYMBOL_CRC(mt76_release_buffered_frames, 0x26923678, "_gpl");
SYMBOL_CRC(mt76_txq_schedule, 0x83b6d069, "_gpl");
SYMBOL_CRC(mt76_txq_schedule_all, 0x64642167, "_gpl");
SYMBOL_CRC(mt76_tx_worker_run, 0x89f8e6c0, "_gpl");
SYMBOL_CRC(mt76_stop_tx_queues, 0x05ebf6f7, "_gpl");
SYMBOL_CRC(mt76_wake_tx_queue, 0x38562629, "_gpl");
SYMBOL_CRC(mt76_ac_to_hwq, 0x3c1b1a7c, "_gpl");
SYMBOL_CRC(mt76_skb_adjust_pad, 0x6bb51a47, "_gpl");
SYMBOL_CRC(mt76_queue_tx_complete, 0xc09c3d54, "_gpl");
SYMBOL_CRC(__mt76_set_tx_blocked, 0xb711180d, "_gpl");
SYMBOL_CRC(mt76_token_consume, 0xbd32e0a1, "_gpl");
SYMBOL_CRC(mt76_token_release, 0x0bca568c, "_gpl");
SYMBOL_CRC(mt76_rx_aggr_start, 0x32077f95, "_gpl");
SYMBOL_CRC(mt76_rx_aggr_stop, 0xa8dd822f, "_gpl");
SYMBOL_CRC(mt76_mcu_msg_alloc, 0x7e8b5a27, "_gpl");
SYMBOL_CRC(mt76_mcu_get_response, 0xb6a98145, "_gpl");
SYMBOL_CRC(mt76_mcu_rx_event, 0x00e62fcb, "_gpl");
SYMBOL_CRC(mt76_mcu_send_and_get_msg, 0x4da10267, "_gpl");
SYMBOL_CRC(mt76_mcu_skb_send_and_get_msg, 0xb193f6e8, "_gpl");
SYMBOL_CRC(__mt76_mcu_send_firmware, 0x44faca5c, "_gpl");
SYMBOL_CRC(mt76_pci_disable_aspm, 0xd3b6f66a, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x82fb052a, "ieee80211_sta_register_airtime" },
	{ 0xc45d298e, "is_vmalloc_addr" },
	{ 0x7dd6e305, "pcie_capability_read_word" },
	{ 0xe130f71f, "__skb_pad" },
	{ 0xf541d690, "simple_attr_open" },
	{ 0xdf4bee3d, "alloc_workqueue" },
	{ 0x0fbdab4c, "__ieee80211_schedule_txq" },
	{ 0x5b12a9a8, "debugfs_attr_write" },
	{ 0xbf9c33b7, "devm_kmalloc" },
	{ 0x457edffd, "skb_put" },
	{ 0xd272d446, "__rcu_read_lock" },
	{ 0xd710adbf, "__kmalloc_noprof" },
	{ 0x0d8b8609, "consume_skb" },
	{ 0xa53f4e29, "memmove" },
	{ 0x40a621c5, "snprintf" },
	{ 0x1d1f8a18, "dmam_alloc_attrs" },
	{ 0xe24974bd, "trace_raw_output_prep" },
	{ 0xd79eeabc, "netif_receive_skb_list" },
	{ 0x7569f618, "skb_dequeue" },
	{ 0x4fc539a3, "__trace_trigger_soft_disabled" },
	{ 0xc87f4bab, "finish_wait" },
	{ 0x185931d9, "ieee80211_free_hw" },
	{ 0x13835454, "dma_unmap_page_attrs" },
	{ 0x9aea4423, "ieee80211_txq_schedule_start" },
	{ 0xc36345fa, "__sw_hweight32" },
	{ 0xcd43ac71, "trace_event_printf" },
	{ 0xbd03ed67, "this_cpu_off" },
	{ 0x8cf5c30c, "ieee80211_tx_status_ext" },
	{ 0x8ecc6f35, "debugfs_create_blob" },
	{ 0x27f56809, "trace_event_raw_init" },
	{ 0xa53f4e29, "memcpy" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0x5d3be6f8, "pcpu_hot" },
	{ 0xd272d446, "kthread_parkme" },
	{ 0x31c292da, "ieee80211_register_hw" },
	{ 0xf2a50c89, "led_classdev_unregister" },
	{ 0xae3f957a, "__ieee80211_create_tpt_led_trigger" },
	{ 0x28a786c6, "netif_napi_add_weight_locked" },
	{ 0x0feb1e94, "usleep_range_state" },
	{ 0x0db8d68d, "prepare_to_wait_event" },
	{ 0x5e505530, "kthread_should_stop" },
	{ 0x91a9b34b, "ieee80211_sta_eosp" },
	{ 0x6794f592, "ieee80211_get_hdrlen_from_skb" },
	{ 0x16ab4215, "__wake_up" },
	{ 0xe1e1f979, "_raw_spin_lock_irqsave" },
	{ 0xd8248fc3, "kthread_park" },
	{ 0xaa017f62, "sched_set_fifo_low" },
	{ 0xde338d9a, "_raw_spin_lock" },
	{ 0x5e505530, "kthread_should_park" },
	{ 0xd272d446, "__fentry__" },
	{ 0xbe0bf0cb, "wake_up_process" },
	{ 0xb6b1d672, "dev_driver_string" },
	{ 0x9f66d3bb, "trace_event_buffer_commit" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0x09eefc79, "dma_map_page_attrs" },
	{ 0x2ff9b4e7, "napi_complete_done" },
	{ 0xd7f03428, "ieee80211_get_tx_rates" },
	{ 0x363fa8f4, "ieee80211_send_bar" },
	{ 0x7528022c, "cfg80211_reg_check_beaconing" },
	{ 0xa21e2f95, "page_frag_free" },
	{ 0xf5f9c32b, "ieee80211_get_key_rx_seq" },
	{ 0x6ac784f4, "schedule_timeout" },
	{ 0xd272d446, "schedule" },
	{ 0x84fcfffc, "ieee80211_sta_uapsd_trigger" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x0f4bde61, "debugfs_create_devm_seqfile" },
	{ 0xde338d9a, "_raw_spin_unlock_bh" },
	{ 0x2bb73069, "__alloc_skb" },
	{ 0x38c8be28, "idr_get_next" },
	{ 0x96c07e76, "const_pcpu_hot" },
	{ 0x626691f6, "pci_disable_link_state" },
	{ 0x7444c00b, "_dev_info" },
	{ 0xfde4238c, "napi_gro_receive" },
	{ 0x882f8ec1, "skb_queue_tail" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0xbd03ed67, "page_offset_base" },
	{ 0x977a796c, "dev_set_threaded" },
	{ 0x44decd6f, "hugetlb_optimize_vmemmap_key" },
	{ 0x09e07c0a, "build_skb" },
	{ 0x07d50c57, "idr_remove" },
	{ 0xa0a9b0dc, "debugfs_attr_read" },
	{ 0x646f0a15, "__dma_sync_single_for_cpu" },
	{ 0x7a5ffe84, "init_wait_entry" },
	{ 0xab0e9602, "ieee80211_queue_delayed_work" },
	{ 0xeca03107, "devm_kmemdup" },
	{ 0x98aacd62, "perf_trace_buf_alloc" },
	{ 0x60f01a84, "perf_trace_run_bpf_submit" },
	{ 0xfa0e48e3, "debugfs_create_bool" },
	{ 0x1749c1b4, "debugfs_create_file_unsafe" },
	{ 0xb82edfb3, "idr_alloc" },
	{ 0x09796bbb, "simple_attr_release" },
	{ 0x517a2201, "ieee80211_calc_rx_airtime" },
	{ 0xd272d446, "__rcu_read_unlock" },
	{ 0x107bf83b, "ieee80211_find_sta_by_ifaddr" },
	{ 0xd07cf0d9, "ieee80211_next_txq" },
	{ 0xbeb1d261, "destroy_workqueue" },
	{ 0x65616dcb, "pcie_capability_clear_and_set_word_locked" },
	{ 0xf46d5bf3, "mutex_lock" },
	{ 0x457edffd, "skb_push" },
	{ 0x0a711811, "napi_enable" },
	{ 0xc18e111c, "ieee80211_beacon_cntdwn_is_complete" },
	{ 0x2bf07e13, "seq_putc" },
	{ 0x08aebaba, "trace_event_reg" },
	{ 0xc609ff70, "strncpy" },
	{ 0x91a9b34b, "ieee80211_sta_pspoll" },
	{ 0xc74f7b60, "free_netdev" },
	{ 0x68336338, "__ioread32_copy" },
	{ 0xbd03ed67, "phys_base" },
	{ 0xb5c51982, "__cpu_online_mask" },
	{ 0x402db74e, "memcmp" },
	{ 0xfcc2e8f3, "__local_bh_enable_ip" },
	{ 0xd8248fc3, "kthread_stop" },
	{ 0x30d7a8a0, "led_classdev_register_ext" },
	{ 0xc1e6c71e, "__mutex_init" },
	{ 0x0e1566ac, "ieee80211_alloc_hw_nm" },
	{ 0x81a1a811, "_raw_spin_unlock_irqrestore" },
	{ 0x255dfd5a, "idr_destroy" },
	{ 0x83632bdc, "ieee80211_tx_dequeue" },
	{ 0x533b082f, "ieee80211_rx_list" },
	{ 0x27683a56, "memset" },
	{ 0x6d2f6d40, "rfc1042_header" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x574d2dc3, "debugfs_create_u32" },
	{ 0x5403c125, "__init_waitqueue_head" },
	{ 0x20d14f53, "__netif_napi_del_locked" },
	{ 0x058c185a, "jiffies" },
	{ 0xc8f3567c, "kthread_create_on_node" },
	{ 0xdd77fc03, "bpf_trace_run3" },
	{ 0xbd03ed67, "vmemmap_base" },
	{ 0x82fd7238, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xa4c0178c, "kvfree_call_rcu" },
	{ 0xeda47edf, "alloc_netdev_dummy" },
	{ 0x351d89ad, "trace_event_buffer_reserve" },
	{ 0x56ba2d9e, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0xf46d5bf3, "mutex_unlock" },
	{ 0x85acaba2, "cancel_delayed_work_sync" },
	{ 0x02f9bbf0, "init_timer_key" },
	{ 0x646f0a15, "__dma_sync_single_for_device" },
	{ 0xcbae5412, "__const_udelay" },
	{ 0x185931d9, "ieee80211_unregister_hw" },
	{ 0x5a844b26, "__x86_indirect_thunk_rcx" },
	{ 0x464d002c, "seq_write" },
	{ 0xc7aebaf5, "radix_tree_tagged" },
	{ 0x75738bed, "__warn_printk" },
	{ 0x12cfb334, "seq_printf" },
	{ 0xb0e3a978, "ieee80211_channel_to_freq_khz" },
	{ 0x71798f7e, "delayed_work_timer_fn" },
	{ 0xde338d9a, "_raw_spin_lock_bh" },
	{ 0x7851be11, "__SCT__cond_resched" },
	{ 0x224a53e7, "get_random_bytes" },
	{ 0x5465956b, "skb_add_rx_frag_netmem" },
	{ 0xa06938d4, "page_frag_cache_drain" },
	{ 0xea3c5fcf, "__page_frag_alloc_align" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0xac3f2f59, "ieee80211_sta_ps_transition" },
	{ 0xd272d446, "__SCT__preempt_schedule_notrace" },
	{ 0x62f367ff, "debugfs_create_u8" },
	{ 0xb75057ba, "debugfs_create_dir" },
	{ 0xde338d9a, "_raw_spin_unlock" },
	{ 0x955467e2, "trace_handle_return" },
	{ 0x12ca6142, "ktime_get_with_offset" },
	{ 0x7851be11, "__SCT__might_resched" },
	{ 0xb4455d41, "ieee80211_csa_finish" },
	{ 0xd272d446, "synchronize_net" },
	{ 0x70eca2ca, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x82fb052a,
	0xc45d298e,
	0x7dd6e305,
	0xe130f71f,
	0xf541d690,
	0xdf4bee3d,
	0x0fbdab4c,
	0x5b12a9a8,
	0xbf9c33b7,
	0x457edffd,
	0xd272d446,
	0xd710adbf,
	0x0d8b8609,
	0xa53f4e29,
	0x40a621c5,
	0x1d1f8a18,
	0xe24974bd,
	0xd79eeabc,
	0x7569f618,
	0x4fc539a3,
	0xc87f4bab,
	0x185931d9,
	0x13835454,
	0x9aea4423,
	0xc36345fa,
	0xcd43ac71,
	0xbd03ed67,
	0x8cf5c30c,
	0x8ecc6f35,
	0x27f56809,
	0xa53f4e29,
	0xcb8b6ec6,
	0x5d3be6f8,
	0xd272d446,
	0x31c292da,
	0xf2a50c89,
	0xae3f957a,
	0x28a786c6,
	0x0feb1e94,
	0x0db8d68d,
	0x5e505530,
	0x91a9b34b,
	0x6794f592,
	0x16ab4215,
	0xe1e1f979,
	0xd8248fc3,
	0xaa017f62,
	0xde338d9a,
	0x5e505530,
	0xd272d446,
	0xbe0bf0cb,
	0xb6b1d672,
	0x9f66d3bb,
	0x5a844b26,
	0x09eefc79,
	0x2ff9b4e7,
	0xd7f03428,
	0x363fa8f4,
	0x7528022c,
	0xa21e2f95,
	0xf5f9c32b,
	0x6ac784f4,
	0xd272d446,
	0x84fcfffc,
	0xd272d446,
	0x0f4bde61,
	0xde338d9a,
	0x2bb73069,
	0x38c8be28,
	0x96c07e76,
	0x626691f6,
	0x7444c00b,
	0xfde4238c,
	0x882f8ec1,
	0x90a48d82,
	0xbd03ed67,
	0x977a796c,
	0x44decd6f,
	0x09e07c0a,
	0x07d50c57,
	0xa0a9b0dc,
	0x646f0a15,
	0x7a5ffe84,
	0xab0e9602,
	0xeca03107,
	0x98aacd62,
	0x60f01a84,
	0xfa0e48e3,
	0x1749c1b4,
	0xb82edfb3,
	0x09796bbb,
	0x517a2201,
	0xd272d446,
	0x107bf83b,
	0xd07cf0d9,
	0xbeb1d261,
	0x65616dcb,
	0xf46d5bf3,
	0x457edffd,
	0x0a711811,
	0xc18e111c,
	0x2bf07e13,
	0x08aebaba,
	0xc609ff70,
	0x91a9b34b,
	0xc74f7b60,
	0x68336338,
	0xbd03ed67,
	0xb5c51982,
	0x402db74e,
	0xfcc2e8f3,
	0xd8248fc3,
	0x30d7a8a0,
	0xc1e6c71e,
	0x0e1566ac,
	0x81a1a811,
	0x255dfd5a,
	0x83632bdc,
	0x533b082f,
	0x27683a56,
	0x6d2f6d40,
	0xd272d446,
	0x574d2dc3,
	0x5403c125,
	0x20d14f53,
	0x058c185a,
	0xc8f3567c,
	0xdd77fc03,
	0xbd03ed67,
	0x82fd7238,
	0xa4c0178c,
	0xeda47edf,
	0x351d89ad,
	0x56ba2d9e,
	0xf46d5bf3,
	0x85acaba2,
	0x02f9bbf0,
	0x646f0a15,
	0xcbae5412,
	0x185931d9,
	0x5a844b26,
	0x464d002c,
	0xc7aebaf5,
	0x75738bed,
	0x12cfb334,
	0xb0e3a978,
	0x71798f7e,
	0xde338d9a,
	0x7851be11,
	0x224a53e7,
	0x5465956b,
	0xa06938d4,
	0xea3c5fcf,
	0xe4de56b4,
	0xac3f2f59,
	0xd272d446,
	0x62f367ff,
	0xb75057ba,
	0xde338d9a,
	0x955467e2,
	0x12ca6142,
	0x7851be11,
	0xb4455d41,
	0xd272d446,
	0x70eca2ca,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"ieee80211_sta_register_airtime\0"
	"is_vmalloc_addr\0"
	"pcie_capability_read_word\0"
	"__skb_pad\0"
	"simple_attr_open\0"
	"alloc_workqueue\0"
	"__ieee80211_schedule_txq\0"
	"debugfs_attr_write\0"
	"devm_kmalloc\0"
	"skb_put\0"
	"__rcu_read_lock\0"
	"__kmalloc_noprof\0"
	"consume_skb\0"
	"memmove\0"
	"snprintf\0"
	"dmam_alloc_attrs\0"
	"trace_raw_output_prep\0"
	"netif_receive_skb_list\0"
	"skb_dequeue\0"
	"__trace_trigger_soft_disabled\0"
	"finish_wait\0"
	"ieee80211_free_hw\0"
	"dma_unmap_page_attrs\0"
	"ieee80211_txq_schedule_start\0"
	"__sw_hweight32\0"
	"trace_event_printf\0"
	"this_cpu_off\0"
	"ieee80211_tx_status_ext\0"
	"debugfs_create_blob\0"
	"trace_event_raw_init\0"
	"memcpy\0"
	"kfree\0"
	"pcpu_hot\0"
	"kthread_parkme\0"
	"ieee80211_register_hw\0"
	"led_classdev_unregister\0"
	"__ieee80211_create_tpt_led_trigger\0"
	"netif_napi_add_weight_locked\0"
	"usleep_range_state\0"
	"prepare_to_wait_event\0"
	"kthread_should_stop\0"
	"ieee80211_sta_eosp\0"
	"ieee80211_get_hdrlen_from_skb\0"
	"__wake_up\0"
	"_raw_spin_lock_irqsave\0"
	"kthread_park\0"
	"sched_set_fifo_low\0"
	"_raw_spin_lock\0"
	"kthread_should_park\0"
	"__fentry__\0"
	"wake_up_process\0"
	"dev_driver_string\0"
	"trace_event_buffer_commit\0"
	"__x86_indirect_thunk_rax\0"
	"dma_map_page_attrs\0"
	"napi_complete_done\0"
	"ieee80211_get_tx_rates\0"
	"ieee80211_send_bar\0"
	"cfg80211_reg_check_beaconing\0"
	"page_frag_free\0"
	"ieee80211_get_key_rx_seq\0"
	"schedule_timeout\0"
	"schedule\0"
	"ieee80211_sta_uapsd_trigger\0"
	"__stack_chk_fail\0"
	"debugfs_create_devm_seqfile\0"
	"_raw_spin_unlock_bh\0"
	"__alloc_skb\0"
	"idr_get_next\0"
	"const_pcpu_hot\0"
	"pci_disable_link_state\0"
	"_dev_info\0"
	"napi_gro_receive\0"
	"skb_queue_tail\0"
	"__ubsan_handle_out_of_bounds\0"
	"page_offset_base\0"
	"dev_set_threaded\0"
	"hugetlb_optimize_vmemmap_key\0"
	"build_skb\0"
	"idr_remove\0"
	"debugfs_attr_read\0"
	"__dma_sync_single_for_cpu\0"
	"init_wait_entry\0"
	"ieee80211_queue_delayed_work\0"
	"devm_kmemdup\0"
	"perf_trace_buf_alloc\0"
	"perf_trace_run_bpf_submit\0"
	"debugfs_create_bool\0"
	"debugfs_create_file_unsafe\0"
	"idr_alloc\0"
	"simple_attr_release\0"
	"ieee80211_calc_rx_airtime\0"
	"__rcu_read_unlock\0"
	"ieee80211_find_sta_by_ifaddr\0"
	"ieee80211_next_txq\0"
	"destroy_workqueue\0"
	"pcie_capability_clear_and_set_word_locked\0"
	"mutex_lock\0"
	"skb_push\0"
	"napi_enable\0"
	"ieee80211_beacon_cntdwn_is_complete\0"
	"seq_putc\0"
	"trace_event_reg\0"
	"strncpy\0"
	"ieee80211_sta_pspoll\0"
	"free_netdev\0"
	"__ioread32_copy\0"
	"phys_base\0"
	"__cpu_online_mask\0"
	"memcmp\0"
	"__local_bh_enable_ip\0"
	"kthread_stop\0"
	"led_classdev_register_ext\0"
	"__mutex_init\0"
	"ieee80211_alloc_hw_nm\0"
	"_raw_spin_unlock_irqrestore\0"
	"idr_destroy\0"
	"ieee80211_tx_dequeue\0"
	"ieee80211_rx_list\0"
	"memset\0"
	"rfc1042_header\0"
	"__x86_return_thunk\0"
	"debugfs_create_u32\0"
	"__init_waitqueue_head\0"
	"__netif_napi_del_locked\0"
	"jiffies\0"
	"kthread_create_on_node\0"
	"bpf_trace_run3\0"
	"vmemmap_base\0"
	"__ubsan_handle_shift_out_of_bounds\0"
	"kvfree_call_rcu\0"
	"alloc_netdev_dummy\0"
	"trace_event_buffer_reserve\0"
	"ieee80211_iterate_active_interfaces_atomic\0"
	"mutex_unlock\0"
	"cancel_delayed_work_sync\0"
	"init_timer_key\0"
	"__dma_sync_single_for_device\0"
	"__const_udelay\0"
	"ieee80211_unregister_hw\0"
	"__x86_indirect_thunk_rcx\0"
	"seq_write\0"
	"radix_tree_tagged\0"
	"__warn_printk\0"
	"seq_printf\0"
	"ieee80211_channel_to_freq_khz\0"
	"delayed_work_timer_fn\0"
	"_raw_spin_lock_bh\0"
	"__SCT__cond_resched\0"
	"get_random_bytes\0"
	"skb_add_rx_frag_netmem\0"
	"page_frag_cache_drain\0"
	"__page_frag_alloc_align\0"
	"__ubsan_handle_load_invalid_value\0"
	"ieee80211_sta_ps_transition\0"
	"__SCT__preempt_schedule_notrace\0"
	"debugfs_create_u8\0"
	"debugfs_create_dir\0"
	"_raw_spin_unlock\0"
	"trace_handle_return\0"
	"ktime_get_with_offset\0"
	"__SCT__might_resched\0"
	"ieee80211_csa_finish\0"
	"synchronize_net\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mac80211,cfg80211");


MODULE_INFO(srcversion, "8E54C86B985DDD234496F4F");
